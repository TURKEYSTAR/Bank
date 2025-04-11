#ifndef TRANSATIONMODEL_H
#define TRANSATIONMODEL_H
#include "dbmanager.h"
#include "transaction.h"
#include <QtDebug>
#include <QMetaType>
#include <QSqlQuery>
#include <QSqlField>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QItemSelectionModel>
#include <QModelIndex>
#include <QMutex>

class TransactionModel : public QSqlQueryModel
{
private:
    DBManager* dbManager;
    QItemSelectionModel* selectionModel;
    int m_accountId = -1;
    QList<QSqlRecord> cachedTransactions;
    int currentAccountId = -1;
    mutable QMutex dbMutex;

public:
    TransactionModel();
    ~TransactionModel() {}
    QItemSelectionModel* getSelectionModel() { return selectionModel; }
    bool checkNotificationsEnabled() const;
    void create(Transaction transaction);
    void refresh();
    void setAccountId(int id);
    QList<Transaction> list();

    void readAll();
    void readAll(int accountId);
    void setHeaderTitle();
    void readBy(int clientId);
    void filtrerTransactions(const QString& type, const QString& dateFilter, bool sortByBalanceAsc, int userId);
    void createNotificationForTransaction(Transaction transaction, int transactionId);

};

#endif // TRANSATIONMODEL_H
