#ifndef SERVICE_H
#define SERVICE_H
#include <QString>
#include <QDate>
#include "usermodel.h"
#include "accountmodel.h"
#include "transactionmodel.h"
#include "notificationmodel.h"

#include "dashboardmodel.h"

class Service
{

public:
    Role authentifier (QString login, QString password);
    bool authentifier(QString login, QString password, User& user);

    bool loginExists(const QString& login) const;
    void ajouterUnUser(QString nom, QString login, QString password, QString country, QString birthdate, QString email, QString role, QString statut);
    void modifierUnUser(QString nom, QString login, QString password, QString country, QString birthdate, QString email, QString role, QString statut);
    void ajouterUnCompte(QMap<QString, QString> input);
    void modifierUnCompte(QMap<QString, QString> input);
    void gelerCompte(int accountId);
    void debloquerCompte(int accountId);
    bool estCompteGelé(int accountId);
    void supprimerUnUser();
    bool rechercherUnUser(int id);
    void listerLesUsers();
    void listerLesClients();
    bool getClientInfo(int clientId, QMap<QString, QString>& clientData);
    void listerLesTransactions();
    void listerLesTransactionsDuCompte();
    void listerLesTransactions(int clientId);
    void listerLesTransactionsDuCompte(const QString& accountNumber);
    void listerLesComptes(int clientId);
    void listerLesNotifications();
    void listerLesNotifications(int userId);

    void executeTransaction (QMap<QString, QString> input, bool &status, QString &message);
    bool modifierUneTransaction(const QString& id, const QMap<QString, QVariant>& data);

    static void createNotificationForTransaction(Transaction transaction, int transactionId);

    Service(UserModel* userModel);
    Service(UserModel* userModel, AccountModel* accountModel);
    Service(UserModel* userModel, AccountModel* accountModel, TransactionModel* transactionModel);
    Service(UserModel* userModel, AccountModel* accountModel, TransactionModel* transactionModel, DashboardModel* dashboardModel);
    Service(UserModel* userModel, AccountModel* accountModel, TransactionModel* transactionModel, NotificationModel* notificationModel);
    Service(UserModel* userModel, AccountModel* accountModel, TransactionModel* transactionModel, NotificationModel* notificationModel, DashboardModel* dashboardModel);

private:
    UserModel* userModel;
    AccountModel* accountModel;
    TransactionModel* transactionModel;
    NotificationModel* notificationModel;
    DashboardModel* dashboardModel;
    DBManager* dbManager;

    bool effectuerUnRetrait(int idClient, double montant);
    void effectuerUnVersement(int idClient, double montant);
    void effectuerUnVirement (int idClient, QString numeroCompteBeneficiaire, double montant);
};

#endif // SERVICE_H
