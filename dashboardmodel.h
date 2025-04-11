#ifndef DASHBOARDMODEL_H
#define DASHBOARDMODEL_H

#include <QObject>
#include <QSqlQueryModel>
#include <QMutex>
#include "dbmanager.h"

class DashboardModel : public QObject
{
    Q_OBJECT
public:
    int getTotalClients();
    int getTotalTransactions();
    double getTotalBalance();

    QSqlQueryModel* getRecentTransactionsModel();
    QSqlQueryModel* getAccountsSummaryModel();
    QSqlQueryModel* getAccountTransactionsModel(int accountId);

    void enableNotifications();
    void disableNotifications();
    bool areNotificationsEnabled() const;
    void initializeNotificationsTable() const;

    DashboardModel();

private:
    DBManager *dbManager;
    mutable QMutex dbMutex;
    void setNotificationState(bool enabled);
};

#endif // DASHBOARDMODEL_H
