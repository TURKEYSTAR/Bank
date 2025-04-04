#include "service.h"
#include "user.h"
#include "dbmanager.h"
#include <QtDebug>
#include <QMessageBox>

Service::Service(UserModel* _userModel) :
    userModel(_userModel){}

Service::Service(UserModel* _userModel, AccountModel* _accountModel) :
    userModel(_userModel), accountModel(_accountModel){}

Service::Service(UserModel* _userModel, AccountModel* _accountModel, TransactionModel* _transactionModel) :
    userModel(_userModel), accountModel(_accountModel), transactionModel (_transactionModel) {}

Role Service::authentifier(QString login, QString password)
{
    qDebug () << "Service::authentifier " << login << "-" << password << "";
    User user = userModel->readBy(login, password);
    return user.getEnumRole();
}

bool Service::authentifier(QString login, QString password, User& user)
{
    qDebug () << "Service::authentifier " << login << "-" << password << "";
    user = userModel->readBy(login, password);
    QString userRole = user.getRole();
    return userRole.compare("NOT_DEFINED") == 0 ? false : true;
}

bool Service::loginExists(const QString& login) const {
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qCritical() << "Database not open!";
        return false;
    }

    QSqlQuery query(db);
    query.prepare("SELECT 1 FROM t_users WHERE login = ? LIMIT 1");
    query.addBindValue(login);

    if (!query.exec()) {
        return false;
    }

    return query.next(); // Returns true if a row exists
}

void Service::ajouterUnUser(QString nom, QString login, QString password, QString country, QString birthdate, QString email, QString role, QString statut)
{
    User user(nom, login, password, country, birthdate, email, role, statut);
    userModel->create(user);
}

void Service::modifierUnUser(QString nom, QString login, QString password, QString country, QString birthdate, QString email, QString role, QString statut)
{
    QModelIndex selectedIndex = userModel->getSelectionModel()->currentIndex();
    int selectedLine = selectedIndex.row();

    QSqlRecord selectedRecord = userModel->record(selectedLine);
    QSqlField fieldId = selectedRecord.field(0);

    int selectedId = fieldId.value().toInt();

    User user(selectedId, nom, login, password, country, birthdate, email, role, statut);
    userModel->update(user);
}

bool Service::rechercherUnUser(int id)
{
    User user = userModel->read(id);
    if (user.getId() == -1)
    {
        return false;
    }
    else
    {
        userModel->readBy(id); // Afficher sur le tableView la User trouvée !!!
        return true;
    }
}

void Service::supprimerUnUser()
{
    userModel->remove();
}

void Service::listerLesUsers()
{
    userModel->getSelectionModel()->reset();
    userModel->readAll();
}

void Service::listerLesClients()
{
    userModel->getSelectionModel()->reset();
    userModel->readAllClients();
}

void Service::listerLesComptes(int clientId)
{

    // Reset selection before loading new data
    accountModel->getSelectionModel()->reset();

    // Load data with debug output
    qDebug() << "Loading accounts for client:" << clientId;
    accountModel->readBy(clientId);

    // Verify data was loaded
    if (accountModel->rowCount() == 0) {
        qDebug() << "No accounts found for client" << clientId;
    }
}

void Service::listerLesTransactions()
{
    transactionModel->getSelectionModel()->reset();
    transactionModel->readAll();
}

void Service::listerLesTransactions(int clientId)
{
    transactionModel->getSelectionModel()->reset();
    transactionModel->readBy(clientId);
}


void Service::listerLesTransactionsDuCompte()
{
    QModelIndex selectedIndex = accountModel->getSelectionModel()->currentIndex();
    int selectedLine = selectedIndex.row();
    QSqlRecord selectedRecord = accountModel->record(selectedLine);
    QSqlField fieldId = selectedRecord.field(0);
    int accountId = fieldId.value().toInt();

    transactionModel->getSelectionModel()->reset();
    transactionModel->readAll(accountId);
}

bool Service::effectuerUnRetrait(int idClient, double montant)
{
    QModelIndex selectedIndex = accountModel->getSelectionModel()->currentIndex();
    int selectedLine = selectedIndex.row();
    QSqlRecord selectedRecord = accountModel->record(selectedLine);
    QSqlField fieldId = selectedRecord.field(0);
    int accountId = fieldId.value().toInt();

    Account account = accountModel->read(accountId);

    // Check if account is frozen
    if (account.getStatut() == "GELER") {
        QMessageBox::warning(nullptr, "Opération impossible", "Désolé, votre compte est gelé. Veuillez vous rapprocher de votre gestionnaire.");
        return false;
    }

    // Check if balance is sufficient
    if (account.getBalance() < montant) {
        QMessageBox::warning(nullptr, "Opération impossible", "Solde insuffisant pour effectuer ce retrait.");
        return false;
    }

    QDate today = QDate::currentDate();
    QTime now = QTime::currentTime();

    account.setBalance(account.getBalance() - montant);
    accountModel->update(account);
    accountModel->readBy(idClient);

    Transaction transaction("Retrait", idClient, accountId, -1, account.getNumber(), "NULL", montant,
                            today.toString("yyyy-MM-ddT") + now.toString("HH:mm:ss.zzz"), "Completed");
    transactionModel->create(transaction);

    return true;
}

void Service::effectuerUnVersement(int idClient, double montant)
{
    QModelIndex selectedIndex = accountModel->getSelectionModel()->currentIndex();
    int selectedLine = selectedIndex.row();
    QSqlRecord selectedRecord = accountModel->record(selectedLine);
    QSqlField fieldId = selectedRecord.field(0);
    int accountId = fieldId.value().toInt();

    Account account = accountModel->read(accountId);

    // Check if account is frozen
    if (account.getStatut() == "GELER") {
        QMessageBox::warning(nullptr, "Opération impossible", "Désolé, votre compte est gelé. Veuillez vous rapprocher de votre gestionnaire.");
        return;
    }

    QDate today = QDate::currentDate();
    QTime now = QTime::currentTime();

    account.setBalance(account.getBalance() + montant);
    accountModel->update(account);
    accountModel->readBy(idClient);

    Transaction transaction("Versement", idClient, -1, accountId, "NULL", account.getNumber(), montant,
                            today.toString("yyyy-MM-ddT") + now.toString("HH:mm:ss.zzz"), "Completed");
    transactionModel->create(transaction);
}

void Service::effectuerUnVirement(int idClient, QString numeroCompteBeneficiaire, double montant)
{
    QModelIndex selectedIndex = accountModel->getSelectionModel()->currentIndex();
    int selectedLine = selectedIndex.row();
    QSqlRecord selectedRecord = accountModel->record(selectedLine);
    QSqlField fieldId = selectedRecord.field(0);
    int accountId = fieldId.value().toInt();

    // Get sender account
    Account senderAccount = accountModel->read(accountId);

    // Check if recipient account exists
    Account recipientAccount = accountModel->readByAccountNumber(numeroCompteBeneficiaire);
    if (recipientAccount.getNumber().isEmpty()) {
        throw std::runtime_error("Compte bénéficiaire introuvable");
    }

    QDate today = QDate::currentDate();
    QTime now = QTime::currentTime();

    Transaction transaction("Virement", idClient, accountId, recipientAccount.getId(),
                            senderAccount.getNumber(), recipientAccount.getNumber(), montant,
                            today.toString("yyyy-MM-ddT") + now.toString("HH:mm:ss.zzz"), "In progress");
    transactionModel->create(transaction);
}

void Service::executeTransaction(QMap<QString, QString> input, bool &status, QString &message)
{
    QString typeTransaction = input.value("typeTransaction");
    QString connectedUserId = input.value("connectedUserId");
    QString montant = input.value("montant");
    QString numeroBeneficiaire = input.value("numeroBeneficiaire");

    if (typeTransaction.compare("VERSEMENT") == 0)
    {
        effectuerUnVersement(connectedUserId.toInt(), montant.toDouble());
        message = "Versement effectué avec succès.";
    }
    else if (typeTransaction.compare("RETRAIT") == 0)
    {
        status = effectuerUnRetrait(connectedUserId.toInt(), montant.toDouble());
        if (status) message = "Retrait effectué avec succès.";
    }
    else if (typeTransaction.compare("VIREMENT") == 0)
    {
        qDebug() << typeTransaction << "- Service::executeTransaction";

        try {
            effectuerUnVirement(connectedUserId.toInt(), numeroBeneficiaire, montant.toDouble());
            status = true;
            message = "Le virement a été enrégistré et est en cours de traitement! Vous recevrez une notification.";
        }
        catch (const std::runtime_error& e) {
            status = false;
            message = e.what();
            qDebug() << "Virement failed:" << e.what();
        }
    }
    else
    {
        qDebug() << "typeTransaction " << typeTransaction << " - aucune transaction elligible - Service::executeTransaction";
    }
}

void Service::ajouterUnCompte(QMap<QString, QString> input) {
    QString idClient = input.value("idClient");
    QString number = input.value("number");
    QString type = input.value("type");
    QString balance = input.value("balance");
    QString statut = input.value("statut");

    Account account(idClient.toInt(), number, type, balance.toDouble(),statut);
    accountModel->create(account);
    listerLesComptes(idClient.toInt());
}

void Service::modifierUnCompte(QMap<QString, QString> input) {
    QString accountId = input.value("accountId");
    QString idClient = input.value("idClient");
    QString number = input.value("number");
    QString balance = input.value("balance");
    QString type = input.value("type");
    QString statut = input.value("statut");

    Account account(accountId.toInt(), idClient.toInt(), number, type, balance.toDouble(), statut);
    accountModel->update(account);
    listerLesComptes(idClient.toInt());
}

void Service::gelerCompte(int accountId) {
    Account account = accountModel->read(accountId);
    account.setStatut("geler");
    accountModel->update(account);
}

void Service::debloquerCompte(int accountId) {
    Account account = accountModel->read(accountId);
    account.setStatut("actif");
    accountModel->update(account);
}

bool Service::estCompteGelé(int accountId) {
    Account account = accountModel->read(accountId);
    return account.getStatut() == "geler";
}
