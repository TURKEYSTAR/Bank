#ifndef UIMESSAGES_H
#define UIMESSAGES_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "messagemodel.h"

namespace Ui {
class Uimessages;
}

class Uimessages : public QMainWindow
{
    Q_OBJECT

public:
    explicit Uimessages(QWidget *parent = nullptr);
    Uimessages(QObject *controller);
    QList<Message> currentMessages;
    ~Uimessages();

    void setCurrentUserId(int userId);
    void deleteSelectedMessage();

private slots:
    void onUserSelected(QListWidgetItem* item);
    void onSendClicked();
private:
    Ui::Uimessages *ui;
    MessageModel *messageModel;
    int currentUserId;
    int selectedRecipientId;

    void loadUsers();
    void loadMessages(int recipientId);
};

#endif // UIMESSAGES_H

