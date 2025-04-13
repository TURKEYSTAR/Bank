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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Uimessages
{
public:
    QWidget *centralwidget;
    QHBoxLayout *mainLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonFermer;
    QPushButton *pushButtonSupprimer;
    QSpacerItem *verticalSpacer_2;
    QListWidget *userList;
    QVBoxLayout *messageLayout;
    QListWidget *messageDisplay;
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
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButtonFermer = new QPushButton(centralwidget);
        pushButtonFermer->setObjectName("pushButtonFermer");

        verticalLayout->addWidget(pushButtonFermer);

        pushButtonSupprimer = new QPushButton(centralwidget);
        pushButtonSupprimer->setObjectName("pushButtonSupprimer");

        verticalLayout->addWidget(pushButtonSupprimer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        mainLayout->addLayout(verticalLayout);

        userList = new QListWidget(centralwidget);
        userList->setObjectName("userList");

        mainLayout->addWidget(userList);

        messageLayout = new QVBoxLayout();
        messageLayout->setObjectName("messageLayout");
        messageDisplay = new QListWidget(centralwidget);
        messageDisplay->setObjectName("messageDisplay");

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
        pushButtonSupprimer->setText(QCoreApplication::translate("Uimessages", "Supprimer", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("Uimessages", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Uimessages: public Ui_Uimessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMESSAGES_H
