
#include "notificationtype.h"

QString NotificationHelper::typeToString(NotificationType type) {
    switch(type) {
    case NotificationType::TRANSACTION_SUCCESS: return "TRANSACTION_SUCCESS";
    case NotificationType::VIREMENT_VALIDE: return "VIREMENT_VALIDE";
    case NotificationType::VIREMENT_REJETE: return "VIREMENT_REJETE";
    case NotificationType::VIREMENT_RECU: return "VIREMENT_RECU";
    case NotificationType::VERSEMENT_VALIDE: return "VERSEMENT_VALIDE";
    case NotificationType::VERSEMENT_REJETE: return "VERSEMENT_REJETE";
    case NotificationType::RETRAIT_VALIDE: return "RETRAIT_VALIDE";
    case NotificationType::RETRAIT_REJETE: return "RETRAIT_REJETE";
    case NotificationType::PRIVATE_MESSAGE: return "PRIVATE_MESSAGE";
    default: return "UNKNOWN";
    }
}

QString NotificationHelper::getTitle(NotificationType type){
    switch(type) {
    case NotificationType::TRANSACTION_SUCCESS: return "Transaction réussie";
    case NotificationType::VIREMENT_VALIDE: return "Virement validé";
    case NotificationType::VIREMENT_REJETE: return "Virement rejeté";
    case NotificationType::VIREMENT_RECU: return "Nouveau virement reçu";
    case NotificationType::VERSEMENT_VALIDE: return "Versement réussi";
    case NotificationType::VERSEMENT_REJETE: return "Versement echoué";
    case NotificationType::RETRAIT_VALIDE: return "Retrait réussi";
    case NotificationType::RETRAIT_REJETE: return "Retrait echoué";
    case NotificationType::PRIVATE_MESSAGE: return "Nouveau message";
    default: return "Notification";
    }
}

QString NotificationHelper::getMessage(NotificationType type, const QString& additionalInfo) {
    switch(type) {
    case NotificationType::TRANSACTION_SUCCESS:
        return "Votre transaction a été effectuée avec succès. " + additionalInfo;
    case NotificationType::VIREMENT_VALIDE:
        return "Votre virement a été effectué avec succès " + additionalInfo;
    case NotificationType::VIREMENT_REJETE:
        return "Votre virement a été rejeté. " + additionalInfo;
    case NotificationType::VIREMENT_RECU:
        return " " + additionalInfo;
    case NotificationType::VERSEMENT_VALIDE:
        return "Votre versement a été effectué avec succès " + additionalInfo;
    case NotificationType::VERSEMENT_REJETE:
        return "Votre versement a été echoué. " + additionalInfo;
    case NotificationType::RETRAIT_VALIDE:
        return "Votre retrait a été effectué avec succès " + additionalInfo;
    case NotificationType::RETRAIT_REJETE:
        return "Votre retrait a echoué. " + additionalInfo;
    case NotificationType::PRIVATE_MESSAGE:
        return "Vous avez reçu un nouveau message. " + additionalInfo;
    default: return "Nouvelle notification. " + additionalInfo;
    }
}
