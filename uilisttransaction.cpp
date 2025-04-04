#include "uilisttransaction.h"
#include "ui_uilisttransaction.h"
#include <QDate>
#include <QDateEdit>
#include <QInputDialog>
#include <QMessageBox>
#include <QSqlError>

UIListTransaction::UIListTransaction(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIListTransaction)
{
    ui->setupUi(this);
}

UIListTransaction::UIListTransaction(QObject* controller) :
    ui(new Ui::UIListTransaction)
{
    qDebug("Contruction/Initialisation de la fenêtre UIListTransaction ...");
    ui->setupUi(this);

    connect(ui->pushButtonClose, SIGNAL(clicked()), controller, SLOT(onClose_UIListTransaction()));
    connect(ui->pushButtonFiltrer, SIGNAL(clicked()), this, SLOT(onFiltrerClicked()));
    connect(ui->pushButtonValider, SIGNAL(clicked()), this, SLOT(onValiderClicked()));
    connect(ui->pushButtonRejeter, SIGNAL(clicked()), this, SLOT(onRejeterClicked()));
}

void UIListTransaction::setTableViewModel(TransactionModel* transactionModel)
{
    ui->tableViewTransactions->setModel(dynamic_cast<QAbstractItemModel*> (transactionModel));
    ui->tableViewTransactions->setSelectionModel(transactionModel->getSelectionModel());

    ui->tableViewTransactions->show();
}

void UIListTransaction::top()
{
    ui->tableViewTransactions->setCurrentIndex(ui->tableViewTransactions->model()->index(0, 0));
}

void UIListTransaction::updateTitle(QString suite)
{
    this->setWindowTitle("Historique des transactions de : " + suite);
}

void UIListTransaction::updateTitle(QString suite, QString transactionTitle)
{
    updateTitle(suite);
    ui->labelTitle->setText(transactionTitle);
}

void UIListTransaction::setAccountNumber(const QString& accountNumber) {
    currentAccountNumber = accountNumber;
}

void UIListTransaction::onFiltrerClicked()
{
    QString selectedFilter = ui->comboBoxType->currentText(); // "Type", "Date", or "Balance"

    TransactionModel* model = dynamic_cast<TransactionModel*>(ui->tableViewTransactions->model());
    if (!model) return;

    if (selectedFilter == "Type") {
        QString transactionType = QInputDialog::getItem(
            this,
            "Filter by Type",
            "Select transaction type:",
            QStringList() << "Versement" << "Retrait" << "Virement",
            0,
            false
            );
        if (!transactionType.isEmpty()) {
            model->filtrerTransactions(transactionType, "", false);
        }
    }
    else if (selectedFilter == "Date") {
        // Use QDateEdit or a simple QInputDialog with text validation
        bool ok;
        QString dateStr = QInputDialog::getText(
            this,
            "Filter by Date",
            "Enter date (YYYY-MM-DD):",
            QLineEdit::Normal,
            QDate::currentDate().toString("yyyy-MM-dd"),
            &ok
            );

        if (ok && !dateStr.isEmpty()) {
            QDate date = QDate::fromString(dateStr, "yyyy-MM-dd");
            if (date.isValid()) {
                model->filtrerTransactions("Tous", dateStr, false);
            } else {
                QMessageBox::warning(this, "Invalid Date", "Please enter a valid date in YYYY-MM-DD format.");
            }
        }
    }
    else if (selectedFilter == "Balance") {
        model->filtrerTransactions("Tous", "", true); // Sort by balance ascending
    }
}

void UIListTransaction::onValiderClicked()
{
    // Get selected transaction
    QModelIndex index = ui->tableViewTransactions->selectionModel()->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "Sélection requise", "Veuillez sélectionner une transaction");
        return;
    }

    int selectedRow = index.row();
    TransactionModel* model = dynamic_cast<TransactionModel*>(ui->tableViewTransactions->model());
    QSqlRecord record = model->record(selectedRow);

    // Get transaction data
    QString transactionId = record.value("id").toString();
    QString statut = record.value("statut").toString();
    QString type = record.value("type").toString();
    double montant = record.value("montant").toDouble();
    QString compteTire = record.value("numeroCompteTire").toString();
    QString compteBeneficiaire = record.value("numeroCompteBeneficiaire").toString();

    // Check status
    if (statut != "In progress") {
        QMessageBox::warning(this, "Statut incorrect", "Transaction déjà effectuée");
        return;
    }

    // Start database operations
    dbManager = DBManager::getInstance();
    if (!dbManager->open()) {
        QMessageBox::critical(this, "Erreur", "Connexion base de données échouée");
        return;
    }

    QSqlDatabase database = dbManager->database();
    database.transaction();

    try {
        // 1. Process account balances
        if (type == "Retrait" || type == "Virement") {
            // Verify account balance
            QSqlQuery checkQuery(database);
            checkQuery.prepare("SELECT balance FROM t_accounts WHERE number = ?");
            checkQuery.addBindValue(compteTire);

            if (!checkQuery.exec() || !checkQuery.next()) {
                throw std::runtime_error("Impossible de vérifier le solde du compte");
            }

            double solde = checkQuery.value(0).toDouble();
            if (solde < montant) {
                throw std::runtime_error(
                    QString("Solde insuffisant (%1 € pour %2 €)")
                        .arg(solde, 0, 'f', 2)
                        .arg(montant, 0, 'f', 2).toStdString());
            }

            // Perform debit
            QSqlQuery debitQuery(database);
            debitQuery.prepare("UPDATE t_accounts SET balance = balance - ? WHERE number = ?");
            debitQuery.addBindValue(montant);
            debitQuery.addBindValue(compteTire);

            if (!debitQuery.exec() || debitQuery.numRowsAffected() != 1) {
                throw std::runtime_error("Échec du débit sur le compte");
            }
        }

        // For deposits or transfers, credit the account
        if (type == "Versement" || type == "Virement") {
            QString targetAccount = (type == "Versement") ? compteTire : compteBeneficiaire;

            QSqlQuery creditQuery(database);
            creditQuery.prepare("UPDATE t_accounts SET balance = balance + ? WHERE number = ?");
            creditQuery.addBindValue(montant);
            creditQuery.addBindValue(targetAccount);

            if (!creditQuery.exec() || creditQuery.numRowsAffected() != 1) {
                throw std::runtime_error("Échec du crédit sur le compte bénéficiaire");
            }
        }

        // 2. Update transaction status directly in database
        QSqlQuery updateTransaction(database);
        updateTransaction.prepare(
            "UPDATE t_transactions SET "
            "statut = :statut, "
            "date = :date "
            "WHERE id = :id");

        updateTransaction.bindValue(":statut", "Completed");
        updateTransaction.bindValue(":date", QDateTime::currentDateTime());
        updateTransaction.bindValue(":id", transactionId);

        if (!updateTransaction.exec()) {
            throw std::runtime_error(
                QString("Échec de la mise à jour de la transaction: %1")
                    .arg(updateTransaction.lastError().text()).toStdString());
        }

        // 4. Commit transaction
        if (!database.commit()) {
            throw std::runtime_error("Échec de la validation de la transaction");
        }

        QMessageBox::information(this, "Succès", "Transaction validée avec succès.");

    } catch (const std::exception& e) {
        database.rollback();
        QMessageBox::critical(this, "Erreur", e.what());
        qDebug() << "Error:" << e.what();
    }
}

void UIListTransaction::onRejeterClicked()
{
    // Get database instance
    dbManager = DBManager::getInstance();
    if (!dbManager->open()) {
        QMessageBox::critical(this, "Erreur", "Connexion base de données échouée");
        return;
    }

    // Get selected transaction
    QModelIndex index = ui->tableViewTransactions->selectionModel()->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "Sélection requise", "Veuillez sélectionner une transaction à rejeter.");
        return;
    }

    int selectedRow = index.row();
    TransactionModel* model = dynamic_cast<TransactionModel*>(ui->tableViewTransactions->model());
    if (!model) return;

    QSqlRecord record = model->record(selectedRow);
    QString transactionId = record.value("id").toString();
    QString statut = record.value("statut").toString();

    // Check status
    if (statut != "In progress") {
        QMessageBox::warning(this, "Statut incorrect", "Transaction déjà traitée");
        return;
    }

    // Start database transaction
    QSqlDatabase database = dbManager->database();
    database.transaction();

    try {
        // 1. Update transaction status in database
        QSqlQuery updateQuery(database);
        updateQuery.prepare(
            "UPDATE t_transactions SET "
            "statut = 'Rejected', "
            "date = :date "
            "WHERE id = :id");

        updateQuery.bindValue(":date", QDateTime::currentDateTime());
        updateQuery.bindValue(":id", transactionId);

        if (!updateQuery.exec()) {
            throw std::runtime_error(
                QString("Échec de la mise à jour en base: %1")
                    .arg(updateQuery.lastError().text()).toStdString());
        }

        // 2. Update the model using the same approach as onValiderClicked
        // First get the actual model index for the status column (column 6)
        QModelIndex statusIndex = model->index(selectedRow, 6);

        // Then update through the model's setData
        if (!model->setData(statusIndex, "Rejected")) {
            // If setData fails, try forcing a refresh
            throw std::runtime_error("La vue sera actualisée");
        }

        // 3. Commit transaction
        if (!database.commit()) {
            throw std::runtime_error("Échec du commit");
        }

        // 4. Refresh the view
        model->refresh();

        QMessageBox::information(this, "Succès", "Transaction rejetée.");

    } catch (const std::exception& e) {
        database.rollback();
        // Show success message if it's just a view update issue
        if (QString(e.what()).contains("actualisée")) {
            QMessageBox::information(this, "Succès",
                                     "Transaction rejetée (rafraîchissement nécessaire)");
        } else {
            QMessageBox::critical(this, "Erreur", e.what());
        }
        qDebug() << "Error:" << e.what();
    }
}

UIListTransaction::~UIListTransaction()
{
    delete ui;
}
