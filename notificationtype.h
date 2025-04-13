#ifndef NOTIFICATIONTYPE_H
#define NOTIFICATIONTYPE_H

#include <QString>

enum class NotificationType {
    TRANSACTION_SUCCESS,
    VIREMENT_VALIDE,
    VIREMENT_REJETE,
    VIREMENT_RECU,
    VERSEMENT_VALIDE,
    VERSEMENT_REJETE,
    RETRAIT_VALIDE,
    RETRAIT_REJETE,
    PRIVATE_MESSAGE
};

namespace NotificationHelper {
QString typeToString(NotificationType type);

QString getTitle(NotificationType type);

QString getMessage(NotificationType type, const QString& additionalInfo = "");
}

#endif // NOTIFICATIONTYPE_H
