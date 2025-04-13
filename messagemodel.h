#ifndef MESSAGEMODEL_H
#define MESSAGEMODEL_H

#include <QSqlQueryModel>
#include <QItemSelectionModel>
#include "dbmanager.h"
#include "message.h"

class MessageModel : public QSqlQueryModel
{
    Q_OBJECT

private:
    DBManager* dbManager;
    QItemSelectionModel* selectionModel;

public:
    MessageModel();

    void create(const Message& message);
    void readAll();
    void readByUser(int userId);
    void readConversation(int user1Id, int user2Id);
    void markAsRead(int messageId);
    QList<Message> listByUser(int userId);
    int getUnreadCount(int userId);
    void setHeaders();
    QList<QPair<int, QString>> getAllUsers();
    QList<Message> getConversation(int fromUserId, int toUserId);
    void sendMessage(const Message &msg);
    void deleteMessage(int messageId);

};

#endif // MESSAGEMODEL_H
