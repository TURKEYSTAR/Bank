#include "notificationsettings.h"

NotificationSettings::NotificationSettings()
{
    dbManager = DBManager::getInstance();
    load();
}

void NotificationSettings::load()
{
    if (!dbManager->open()) {
        qDebug() << "Database not open for loading notification settings.";
        return;
    }

    QSqlQuery query(dbManager->database());
    if (query.exec("SELECT id, status FROM notification_settings LIMIT 1") && query.next()) {
        id = query.value(0).toInt();
        statut = query.value(1).toString();
    } else {
        qDebug() << "Notification setting not found or error:" << query.lastError();
    }

    dbManager->close();
}
