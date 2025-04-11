#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>

class Message
{
private:
    int id;
    QString contenu;
    int destinataire_id;
    int expediteur_id;
    QString date;

public:
    Message();
    Message(int fromId, int toId, const QString& content);

    int getId() const;
    QString getContenu() const;
    int getDestinataireId() const;
    int getExpediteurId() const;
    QString getDate() const;

    void setId(int newId);
    void setContenu(const QString& newContenu);
    void setDestinataireId(int newDestinataireId);
    void setExpediteurId(int newExpediteurId);
    void setDate(const QString& newDate);
};

#endif // MESSAGE_H
