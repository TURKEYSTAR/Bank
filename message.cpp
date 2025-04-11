#include "message.h"
#include <QDateTime>

Message::Message()
    : id(0), destinataire_id(0), expediteur_id(0), contenu("")
{
    date = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
}

// Getters
int Message::getId() const {
    return id;
}

QString Message::getContenu() const {
    return contenu;
}

int Message::getDestinataireId() const {
    return destinataire_id;
}

int Message::getExpediteurId() const {
    return expediteur_id;
}

QString Message::getDate() const {
    return date;
}

// Setters
void Message::setId(int newId) {
    id = newId;
}

void Message::setContenu(const QString& newContenu) {
    contenu = newContenu;
}

void Message::setDestinataireId(int newDestinataireId) {
    destinataire_id = newDestinataireId;
}

void Message::setExpediteurId(int newExpediteurId) {
    expediteur_id = newExpediteurId;
}

void Message::setDate(const QString& newDate) {
    this->date = newDate;
}

Message::Message(int fromId, int toId, const QString& content)
    : expediteur_id(fromId), destinataire_id(toId), contenu(content), date(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss")) {}
