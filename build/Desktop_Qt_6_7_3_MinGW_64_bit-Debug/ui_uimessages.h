/********************************************************************************
** Form generated from reading UI file 'uimessages.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMESSAGES_H
#define UI_UIMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Uimessages
{
public:
    QWidget *centralwidget;
    QHBoxLayout *mainLayout;
    QListWidget *userList;
    QWidget *messageArea;
    QVBoxLayout *messageLayout;
    QTextEdit *messageDisplay;
    QHBoxLayout *inputLayout;
    QLineEdit *messageInput;
    QPushButton *sendButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Uimessages)
    {
        if (Uimessages->objectName().isEmpty())
            Uimessages->setObjectName("Uimessages");
        Uimessages->resize(800, 600);
        centralwidget = new QWidget(Uimessages);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QHBoxLayout(centralwidget);
        mainLayout->setObjectName("mainLayout");
        userList = new QListWidget(centralwidget);
        userList->setObjectName("userList");
        userList->setMinimumWidth(200);

        mainLayout->addWidget(userList);

        messageArea = new QWidget(centralwidget);
        messageArea->setObjectName("messageArea");
        messageLayout = new QVBoxLayout(messageArea);
        messageLayout->setObjectName("messageLayout");
        messageLayout->setContentsMargins(0, 0, 0, 0);
        messageDisplay = new QTextEdit(messageArea);
        messageDisplay->setObjectName("messageDisplay");
        messageDisplay->setReadOnly(true);

        messageLayout->addWidget(messageDisplay);

        inputLayout = new QHBoxLayout();
        inputLayout->setObjectName("inputLayout");
        messageInput = new QLineEdit(messageArea);
        messageInput->setObjectName("messageInput");

        inputLayout->addWidget(messageInput);

        sendButton = new QPushButton(messageArea);
        sendButton->setObjectName("sendButton");

        inputLayout->addWidget(sendButton);


        messageLayout->addLayout(inputLayout);


        mainLayout->addWidget(messageArea);

        Uimessages->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Uimessages);
        menubar->setObjectName("menubar");
        Uimessages->setMenuBar(menubar);
        statusbar = new QStatusBar(Uimessages);
        statusbar->setObjectName("statusbar");
        Uimessages->setStatusBar(statusbar);

        retranslateUi(Uimessages);

        QMetaObject::connectSlotsByName(Uimessages);
    } // setupUi

    void retranslateUi(QMainWindow *Uimessages)
    {
        Uimessages->setWindowTitle(QCoreApplication::translate("Uimessages", "Messagerie Interne", nullptr));
        sendButton->setText(QCoreApplication::translate("Uimessages", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Uimessages: public Ui_Uimessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMESSAGES_H
