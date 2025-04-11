#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QtDebug>
#include <QMutex>


class DBManager
{
private:
    QSqlDatabase db;
    DBManager();

    static DBManager* instance;
    static QMutex dbMutex;

public:

    bool open();
    void close();

    static DBManager* getInstance();
    QSqlDatabase database() { return db; }

    static QMutex& getMutex() { return dbMutex; }
    static void release();

    ~DBManager();
};


#endif // DBMANAGER_H
