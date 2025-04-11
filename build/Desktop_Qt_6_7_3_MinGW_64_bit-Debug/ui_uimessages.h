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
    QPushButton *pushButtonFermer;
    QListWidget *userList;
    QVBoxLayout *messageLayout;
    QTextEdit *messageDisplay;
    QHBoxLayout *inputLayout;
    QLineEdit *messageInput;
    QPushButton *pushButtonSend;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Uimessages)
    {
        if (Uimessages->objectName().isEmpty())
            Uimessages->setObjectName("Uimessages");
        Uimessages->resize(530, 285);
        centralwidget = new QWidget(Uimessages);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QHBoxLayout(centralwidget);
        mainLayout->setObjectName("mainLayout");
        pushButtonFermer = new QPushButton(centralwidget);
        pushButtonFermer->setObjectName("pushButtonFermer");

        mainLayout->addWidget(pushButtonFermer);

        userList = new QListWidget(centralwidget);
        userList->setObjectName("userList");

        mainLayout->addWidget(userList);

        messageLayout = new QVBoxLayout();
        messageLayout->setObjectName("messageLayout");
        messageDisplay = new QTextEdit(centralwidget);
        messageDisplay->setObjectName("messageDisplay");
        messageDisplay->setReadOnly(true);

        messageLayout->addWidget(messageDisplay);

        inputLayout = new QHBoxLayout();
        inputLayout->setObjectName("inputLayout");
        messageInput = new QLineEdit(centralwidget);
        messageInput->setObjectName("messageInput");

        inputLayout->addWidget(messageInput);

        pushButtonSend = new QPushButton(centralwidget);
        pushButtonSend->setObjectName("pushButtonSend");

        inputLayout->addWidget(pushButtonSend);


        messageLayout->addLayout(inputLayout);


        mainLayout->addLayout(messageLayout);

        Uimessages->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Uimessages);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 530, 18));
        Uimessages->setMenuBar(menubar);
        statusbar = new QStatusBar(Uimessages);
        statusbar->setObjectName("statusbar");
        Uimessages->setStatusBar(statusbar);

        retranslateUi(Uimessages);

        QMetaObject::connectSlotsByName(Uimessages);
    } // setupUi

    void retranslateUi(QMainWindow *Uimessages)
    {
        Uimessages->setWindowTitle(QCoreApplication::translate("Uimessages", "Direct messages", nullptr));
        pushButtonFermer->setText(QCoreApplication::translate("Uimessages", "Fermer", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("Uimessages", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Uimessages: public Ui_Uimessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMESSAGES_H
