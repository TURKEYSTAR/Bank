#include "notification.h"

Notification::Notification()
    : statut("ACTIVER")  // Default to active
{
}

Notification::Notification(int _id, int _idUser, QString _title, QString _message,
                           QString _date, bool _isRead, NotificationType _type)
    : id(_id), idUser(_idUser), title(_title), message(_message),
    date(_date), isRead(_isRead), type(_type), statut("ACTIVER")  // Default to active
{}

Notification::Notification(int _idUser, QString _title, QString _message,
                           QString _date, NotificationType _type)
    : idUser(_idUser), title(_title), message(_message),
    date(_date), type(_type), statut("ACTIVER")  // Default to active
{}

Notification::Notification(int _idUser, QString _title, QString _message,
                           QString _date, bool _isRead, NotificationType _type)
    : idUser(_idUser), title(_title), message(_message),
    date(_date), isRead(_isRead), type(_type), statut("ACTIVER")  // Default to active
{}

Notification::Notification(int idUser, NotificationType type, QString date, const QString& additionalInfo)
    : id(0), idUser(idUser), date(date), isRead(false), type(type), statut("ACTIVER")  // Default to active
{
    title = NotificationHelper::getTitle(type);
    message = NotificationHelper::getMessage(type, additionalInfo);
}

// New constructor with statut parameter
Notification::Notification(int _id, int _idUser, QString _title, QString _message,
                           QString _date, bool _isRead, NotificationType _type, QString _statut)
    : id(_id), idUser(_idUser), title(_title), message(_message),
    date(_date), isRead(_isRead), type(_type), statut(_statut)
{}
