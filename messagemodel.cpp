#include "messagemodel.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
#include <QDateTime>
#include <QSqlError>

MessageModel::MessageModel()
{
    selectionModel = new QItemSelectionModel(this);
    dbManager = DBManager::getInstance();
}

void MessageModel::create(const Message& message)
{
    dbManager->open();
    QSqlQuery query(dbManager->database());

    query.prepare("INSERT INTO t_messages (contenu, destinataire_id, expediteur_id, date) "
                  "VALUES (:contenu, :destinataire_id, :expediteur_id, :date)");

    query.bindValue(":contenu", message.getContenu());
    query.bindValue(":destinataire_id", message.getDestinataireId());
    query.bindValue(":expediteur_id", message.getExpediteurId());
    query.bindValue(":date", message.getDate());

    if (!query.exec()) {
        qWarning() << "Failed to send message:" << query.lastError().text();
    } else {
        qDebug() << "Message sent successfully!";
    }

    dbManager->close();
    readAll();
}

void MessageModel::readAll()
{
    dbManager->open();
    QSqlDatabase db = dbManager->database();

    this->setQuery("SELECT id, contenu, destinataire_id, expediteur_id, date FROM t_messages", db);
    setHeaders();

    dbManager->close();
}

void MessageModel::readByUser(int userId)
{
    dbManager->open();
    QSqlQuery query(dbManager->database());

    query.prepare("SELECT id, contenu, destinataire_id, expediteur_id, date "
                  "FROM t_messages WHERE destinataire_id = :userId OR expediteur_id = :userId "
                  "ORDER BY date DESC");
    query.bindValue(":userId", userId);

    if (query.exec()) {
        this->setQuery(query);
        setHeaders();
    }

    dbManager->close();
}

void MessageModel::readConversation(int user1Id, int user2Id)
{
    dbManager->open();
    QSqlQuery query(dbManager->database());

    query.prepare("SELECT id, contenu, destinataire_id, expediteur_id, date "
                  "FROM t_messages "
                  "WHERE (expediteur_id = :user1 AND destinataire_id = :user2) "
                  "   OR (expediteur_id = :user2 AND destinataire_id = :user1) "
                  "ORDER BY date ASC");

    query.bindValue(":user1", user1Id);
    query.bindValue(":user2", user2Id);

    if (query.exec()) {
        this->setQuery(query);
        setHeaders();
    }

    dbManager->close();
}

QList<Message> MessageModel::listByUser(int userId)
{
    QList<Message> messages;
    dbManager->open();
    QSqlQuery query(dbManager->database());

    query.prepare("SELECT * FROM t_messages WHERE destinataire_id = :userId OR expediteur_id = :userId "
                  "ORDER BY date DESC");
    query.bindValue(":userId", userId);

    if (query.exec()) {
        while (query.next()) {
            Message message;
            message.setId(query.value("id").toInt());
            message.setContenu(query.value("contenu").toString());
            message.setDestinataireId(query.value("destinataire_id").toInt());
            message.setExpediteurId(query.value("expediteur_id").toInt());
            message.setDate(query.value("date").toString());
            messages.append(message);
        }
    }

    dbManager->close();
    return messages;
}

void MessageModel::setHeaders()
{
    this->setHeaderData(0, Qt::Horizontal, tr("ID"));
    this->setHeaderData(1, Qt::Horizontal, tr("Contenu"));
    this->setHeaderData(2, Qt::Horizontal, tr("Destinataire"));
    this->setHeaderData(3, Qt::Horizontal, tr("Expéditeur"));
    this->setHeaderData(4, Qt::Horizontal, tr("Date"));
}

QList<QPair<int, QString>> MessageModel::getAllUsers()
{
    QList<QPair<int, QString>> users;
    dbManager->open();
    QSqlQuery query("SELECT id, nom FROM t_users");

    while (query.next()) {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        users.append(qMakePair(id, name));
    }
    dbManager->close();
    return users;
}

// Get all messages between userId1 and userId2
QList<Message> MessageModel::getConversation(int userId1, int userId2)
{
    QList<Message> messages;
    dbManager->open();
    QSqlQuery query;
    query.prepare(R"(
        SELECT expediteur_id, destinataire_id, contenu, date_envoi FROM t_messages
        WHERE
            (expediteur_id = :user1 AND destinataire_id = :user2)
            OR
            (expediteur_id = :user2 AND destinataire_id = :user1)
        ORDER BY date_envoi ASC
    )");

    query.bindValue(":user1", userId1);
    query.bindValue(":user2", userId2);

    if (!query.exec()) {
        qWarning() << "Error retrieving messages:" << query.lastError().text();
        return messages;
    }

    while (query.next()) {
        int senderId = query.value(0).toInt();
        int recipientId = query.value(1).toInt();
        QString content = query.value(2).toString();
        QString date = query.value(3).toString();

        Message msg;
        msg = Message(senderId, recipientId, content);
        msg.setDate(date);
        messages.append(msg);
    }
    dbManager->close();
    return messages;
}

void MessageModel::sendMessage(const Message& message)
{
    dbManager->open();
    QSqlQuery query;
    query.prepare(R"(
        INSERT INTO t_messages (expediteur_id, destinataire_id, contenu, date_envoi)
        VALUES (:expediteur_id, :destinataire_id, :contenu, :date_envoi)
    )");

    query.bindValue(":expediteur_id", message.getExpediteurId());
    query.bindValue(":destinataire_id", message.getDestinataireId());
    query.bindValue(":contenu", message.getContenu());
    query.bindValue(":date_envoi", message.getDate());

    if (!query.exec()) {
        qWarning() << "Error sending message:" << query.lastError().text();
    }
    dbManager->close();
}
