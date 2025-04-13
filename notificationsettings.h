#ifndef NOTIFICATIONSETTINGS_H
#define NOTIFICATIONSETTINGS_H

#include <QString>
#include "dbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class NotificationSettings
{
private:
    int id;
    QString statut;

    DBManager* dbManager;

public:
    NotificationSettings();

    int getId() const { return id; }
    QString getStatut() const { return statut; }

    void setId(int id) { this->id = id; }
    void setStatut(const QString& statut) { this->statut = statut; }

    void load();
};

#endif // NOTIFICATIONSETTINGS_H
