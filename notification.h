#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QString>
#include "notificationtype.h"

class Notification
{
private:
    int id;
    int idUser;
    QString title;
    QString message;
    QString date;
    bool isRead;
    NotificationType type;
    int idTransaction;
    QString statut;  // New field

public:
    int getId() { return id; }
    int getIdUser() { return idUser; }
    QString getTitle() { return title; }
    QString getMessage() { return message; }
    QString getDate() { return date; }
    bool getIsRead() { return isRead; }
    NotificationType getType() { return type; }
    int getIdTransaction() const { return idTransaction; }
    QString getStatut() { return statut; }  // New getter

    void setIdTransaction(int id) { idTransaction = id; }
    void setId(int id) { this->id = id; }
    void setIdUser(int idUser) { this->idUser = idUser; }
    void setTitle(QString title) { this->title = title; }
    void setMessage(QString message) { this->message = message; }
    void setDate(QString date) { this->date = date; }
    void setIsRead(bool isRead) { this->isRead = isRead; }
    void setType(NotificationType type) { this->type = type; }
    void setStatut(QString statut) { this->statut = statut; }  // New setter

    Notification();
    Notification(int idUser, QString title, QString message, QString date, NotificationType type);
    Notification(int idUser, QString title, QString message, QString date, bool isRead, NotificationType type);
    Notification(int id, int idUser, QString title, QString message, QString date, bool isRead, NotificationType type);
    Notification(int idUser, NotificationType type, QString date, const QString& additionalInfo = "");
    Notification(int id, int idUser, QString title, QString message, QString date, bool isRead, NotificationType type, QString statut);
};

#endif // NOTIFICATION_H
