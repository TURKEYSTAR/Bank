#include "dashboardmodel.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

DashboardModel::DashboardModel()
{
    dbManager = DBManager::getInstance();
}

int DashboardModel::getTotalClients()
{
    dbManager->open();
    QSqlQuery query(dbManager->database());
    query.prepare("SELECT COUNT(*) FROM t_users");
    query.exec();
    query.next();
    int count = query.value(0).toInt();
    dbManager->close();
    return count;
}

int DashboardModel::getTotalTransactions()
{
    dbManager->open();
    QSqlQuery query(dbManager->database());
    query.prepare("SELECT COUNT(*) FROM t_transactions");
    query.exec();
    query.next();
    int count = query.value(0).toInt();
    dbManager->close();
    return count;
}

double DashboardModel::getTotalBalance()
{
    dbManager->open();
    QSqlQuery query(dbManager->database());
    query.prepare("SELECT SUM(balance) FROM t_accounts");
    query.exec();
    query.next();
    double total = query.value(0).toDouble();
    dbManager->close();
    return total;
}

QSqlQueryModel* DashboardModel::getRecentTransactionsModel()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    dbManager->open();

    QSqlQuery query(dbManager->database());
    query.prepare("SELECT t.id, u.nom, t.type, t.montant, t.date, t.statut "
                  "FROM t_transactions t "
                  "JOIN t_users u ON t.idClient = u.id "
                  "ORDER BY t.date DESC LIMIT 20");
    query.exec();

    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Client"));
    model->setHeaderData(2, Qt::Horizontal, tr("Type"));
    model->setHeaderData(3, Qt::Horizontal, tr("Montant"));
    model->setHeaderData(4, Qt::Horizontal, tr("Date"));
    model->setHeaderData(5, Qt::Horizontal, tr("Statut"));

    dbManager->close();
    return model;
}

QSqlQueryModel* DashboardModel::getAccountsSummaryModel()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    dbManager->open();

    QSqlQuery query(dbManager->database());
    QString sql = "SELECT a.id, u.nom, a.number, a.balance, a.statut, "
                  "(SELECT COUNT(*) FROM t_transactions t WHERE t.idCompteTire = a.id OR t.idCompteBeneficiaire = a.id) as transactionCount "
                  "FROM t_accounts a "
                  "JOIN t_users u ON a.clientId = u.id "
                  "ORDER BY a.id";

    qDebug() << "Executing accounts summary query:" << sql;

    if (!query.exec(sql)) {
        qDebug() << "Accounts summary query error:" << query.lastError().text();
        qDebug() << "Last query:" << query.lastQuery();
        dbManager->close();
        return model;
    }

    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, tr("Account ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Client"));
    model->setHeaderData(2, Qt::Horizontal, tr("Account Number"));
    model->setHeaderData(3, Qt::Horizontal, tr("Balance"));
    model->setHeaderData(4, Qt::Horizontal, tr("Statut"));
    model->setHeaderData(5, Qt::Horizontal, tr("Transactions"));

    dbManager->close();
    return model;
}

QSqlQueryModel* DashboardModel::getAccountTransactionsModel(int accountId)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    dbManager->open();

    QSqlQuery query(dbManager->database());
    QString sql = "SELECT t.id, t.type, "
                  "CASE WHEN t.idCompteTire = :accountId THEN 'Outgoing' ELSE 'Incoming' END as direction, "
                  "t.montant, t.date, t.statut "
                  "FROM t_transactions t "
                  "WHERE t.idCompteTire = :accountId OR t.idCompteBeneficiaire = :accountId "
                  "ORDER BY t.date DESC";

    qDebug() << "Executing transactions query for account" << accountId << ":" << sql;

    query.prepare(sql);
    query.bindValue(":accountId", accountId);

    if (!query.exec()) {
        qDebug() << "Account transactions query error:" << query.lastError().text();
        qDebug() << "Last query:" << query.lastQuery();
        qDebug() << "Bound values:" << query.boundValues();
        dbManager->close();
        return model;
    }

    model->setQuery(query);
    if (model->columnCount() < 6) {
        qDebug() << "Warning: Expected 6 columns but got" << model->columnCount();
    }

    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Type"));
    model->setHeaderData(2, Qt::Horizontal, tr("Direction"));
    model->setHeaderData(3, Qt::Horizontal, tr("Amount"));
    model->setHeaderData(4, Qt::Horizontal, tr("Date"));
    model->setHeaderData(5, Qt::Horizontal, tr("Status"));

    qDebug() << "Transactions model row count:" << model->rowCount();
    dbManager->close();
    return model;
}

void DashboardModel::enableNotifications()
{
    setNotificationState(true);
}

void DashboardModel::disableNotifications()
{
    setNotificationState(false);
}

void DashboardModel::setNotificationState(bool enabled)
{
    if (!dbManager->open()) {
        qDebug() << "Failed to open database connection";
        return;
    }

    QSqlQuery query(dbManager->database());

    // Ensure table exists
    initializeNotificationsTable();

    query.prepare("UPDATE notification_settings SET status = :status");
    query.bindValue(":status", enabled ? "ACTIVER" : "DESACTIVER");

    if (!query.exec()) {
        qDebug() << "Failed to update notification setting:" << query.lastError().text();
    } else {
        qDebug() << "Notification setting updated to:" << (enabled ? "ACTIVER" : "DESACTIVER");
    }

    dbManager->close();
}


bool DashboardModel::areNotificationsEnabled() const
{
    if (!dbManager->open()) {
        qDebug() << "Failed to open database connection";
        return false;
    }

    QSqlQuery query(dbManager->database());

    // Ensure table exists
    const_cast<DashboardModel*>(this)->initializeNotificationsTable();

    if (!query.exec("SELECT status FROM notification_settings LIMIT 1")) {
        qDebug() << "Query failed:" << query.lastError().text();
        dbManager->close();
        return true; // Default to enabled
    }

    bool enabled = true;

    if (query.next()) {
        QString status = query.value(0).toString();
        enabled = (status.compare("ACTIVER", Qt::CaseInsensitive) == 0);
        qDebug() << "Current global notification status:" << status;
    }

    dbManager->close();
    return enabled;
}


void DashboardModel::initializeNotificationsTable() const
{
    QSqlQuery query(dbManager->database());

    if (!query.exec("CREATE TABLE IF NOT EXISTS notification_settings ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "status TEXT NOT NULL DEFAULT 'ACTIVER')")) {
        qDebug() << "Failed to create notification_settings table:" << query.lastError();
        return;
    }

    // Insert default if empty
    if (!query.exec("INSERT INTO notification_settings (status) "
                    "SELECT 'ACTIVER' WHERE NOT EXISTS (SELECT 1 FROM notification_settings)")) {
        qDebug() << "Failed to insert default status:" << query.lastError();
    }
}


