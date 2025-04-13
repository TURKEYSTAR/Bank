#include "uimessages.h"
#include "ui_uimessages.h"
#include "notificationtype.h"
#include "notification.h"
#include "notificationmodel.h"
#include <QDate>
#include "QMessageBox"

Uimessages::Uimessages(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Uimessages)
{
    ui->setupUi(this);
}

Uimessages::Uimessages(QObject *controller)
    : ui(new Ui::Uimessages)
    , messageModel(new MessageModel())
    , currentUserId(-1)
    , selectedRecipientId(-1)
{
    qDebug("Contruction/Initialisation de la fenêtre UIListClient ...");
    ui->setupUi(this);

    connect(ui->pushButtonFermer, SIGNAL(clicked()), controller, SLOT(onFermerClicked_UIMessage()));
    connect(ui->pushButtonSupprimer, SIGNAL(clicked()), controller, SLOT(onSupprimerClicked()));
    connect(ui->userList, &QListWidget::itemClicked, this, &Uimessages::onUserSelected);
    connect(ui->pushButtonSend, SIGNAL(clicked()), this, SLOT(onSendClicked()));
}

Uimessages::~Uimessages()
{
    delete ui;
}

void Uimessages::setCurrentUserId(int userId)
{
    this->currentUserId = userId;

    qDebug() << "Current user set to:" << currentUserId;
    loadUsers();
}

void Uimessages::loadUsers()
{
    qDebug() << "Loading users, currentUserId:" << currentUserId;

    ui->userList->clear();
    QList<QPair<int, QString>> users = messageModel->getAllUsers();

    qDebug() << "Users count:" << users.size();

    for (const QPair<int, QString> &user : users) {
        if (user.first != currentUserId) {
            QListWidgetItem* item = new QListWidgetItem(user.second);
            item->setData(Qt::UserRole, user.first);
            ui->userList->addItem(item);
        }
    }
}

void Uimessages::onUserSelected(QListWidgetItem* item)
{
    selectedRecipientId = item->data(Qt::UserRole).toInt();
    loadMessages(selectedRecipientId);
}

void Uimessages::loadMessages(int recipientId)
{
    ui->messageDisplay->clear();

    QList<Message> messages = messageModel->getConversation(currentUserId, recipientId);

    for (const Message &msg : messages) {
        QString display = QString("[%1] %2: %3")
        .arg(msg.getDate())
            .arg(msg.getExpediteurId() == currentUserId ? "Moi" : "Lui")
            .arg(msg.getContenu());

        QListWidgetItem* item = new QListWidgetItem(display);
        item->setData(Qt::UserRole, msg.getId());
        ui->messageDisplay->addItem(item);
    }
}

void Uimessages::onSendClicked()
{
    if (selectedRecipientId == -1 || ui->messageInput->text().isEmpty()) {
        return;
    }

    NotificationType notifType = NotificationType::PRIVATE_MESSAGE;
    QString additionalInfo = " ";
    QString message1 = NotificationHelper::getMessage(notifType, additionalInfo);
    QString title1 = NotificationHelper::getTitle(notifType);
    QDate today = QDate::currentDate();
    QString content = ui->messageInput->text();

    Message message(currentUserId, selectedRecipientId, content);
    messageModel->sendMessage(message);

    Notification notification(
        selectedRecipientId,                     // ID destinataire
        title1,                      // Titre
        message1,                     // Contenu (limité à 100 caractères)
        today.toString("yyyy-MM-ddT"),          // Horodatage
        false,                                 // Non lu (si applicable)
        notifType      // Type de notification
        );

    NotificationModel notificationModel;
    notificationModel.create(notification);

    ui->messageInput->clear();
    loadMessages(selectedRecipientId);
}


void Uimessages::deleteSelectedMessage()
{
    QListWidgetItem* selectedItem = ui->messageDisplay->currentItem();
    if (!selectedItem) return;

    int messageId = selectedItem->data(Qt::UserRole).toInt();
    qDebug() << "Trying to delete message with ID:" << messageId;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Suppression", "Voulez-vous vraiment supprimer ce message ?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        delete selectedItem;
        messageModel->deleteMessage(messageId);
        loadMessages(selectedRecipientId);
    }
}




