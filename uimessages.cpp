#include "uimessages.h"
#include "ui_uimessages.h"

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

    //connect(ui->pushButtonSend, SIGNAL(clicked()), controller, SLOT(onEnvoyerClicked()));
    connect(ui->pushButtonFermer, SIGNAL(clicked()), controller, SLOT(onFermerClicked_UIMessage()));
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
        ui->messageDisplay->append(display);
    }
}

void Uimessages::onSendClicked()
{
    if (selectedRecipientId == -1 || ui->messageInput->text().isEmpty()) {
        return;
    }

    QString content = ui->messageInput->text();

    Message message(currentUserId, selectedRecipientId, content);
    messageModel->sendMessage(message);

    ui->messageInput->clear();
    loadMessages(selectedRecipientId);
}


