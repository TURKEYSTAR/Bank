/********************************************************************************
** Form generated from reading UI file 'uilistclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILISTCLIENT_H
#define UI_UILISTCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIListClient
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutNorth;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacerLeft;
    QPushButton *pushButton;
    QPushButton *pushButtonMessage;
    QWidget *horizontalLayoutWidget_Tableview;
    QHBoxLayout *horizontalLayoutTableview;
    QTableView *tableViewClients;
    QWidget *horizontalLayoutWidget_Buttons;
    QHBoxLayout *horizontalLayoutButtons;
    QSpacerItem *horizontalSpacerButtons;
    QPushButton *pushButtonOuvrir;
    QPushButton *pushButtonClose;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIListClient)
    {
        if (UIListClient->objectName().isEmpty())
            UIListClient->setObjectName("UIListClient");
        UIListClient->resize(600, 500);
        UIListClient->setMinimumSize(QSize(600, 500));
        UIListClient->setMaximumSize(QSize(600, 500));
        centralwidget = new QWidget(UIListClient);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 581, 37));
        horizontalLayoutNorth = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutNorth->setObjectName("horizontalLayoutNorth");
        horizontalLayoutNorth->setContentsMargins(0, 0, 0, 0);
        labelTitle = new QLabel(horizontalLayoutWidget);
        labelTitle->setObjectName("labelTitle");
        QFont font;
        font.setPointSize(16);
        labelTitle->setFont(font);

        horizontalLayoutNorth->addWidget(labelTitle);

        horizontalSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutNorth->addItem(horizontalSpacerLeft);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayoutNorth->addWidget(pushButton);

        pushButtonMessage = new QPushButton(horizontalLayoutWidget);
        pushButtonMessage->setObjectName("pushButtonMessage");

        horizontalLayoutNorth->addWidget(pushButtonMessage);

        horizontalLayoutWidget_Tableview = new QWidget(centralwidget);
        horizontalLayoutWidget_Tableview->setObjectName("horizontalLayoutWidget_Tableview");
        horizontalLayoutWidget_Tableview->setGeometry(QRect(10, 55, 581, 351));
        horizontalLayoutTableview = new QHBoxLayout(horizontalLayoutWidget_Tableview);
        horizontalLayoutTableview->setObjectName("horizontalLayoutTableview");
        horizontalLayoutTableview->setContentsMargins(0, 0, 0, 0);
        tableViewClients = new QTableView(horizontalLayoutWidget_Tableview);
        tableViewClients->setObjectName("tableViewClients");
        tableViewClients->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        horizontalLayoutTableview->addWidget(tableViewClients);

        horizontalLayoutWidget_Buttons = new QWidget(centralwidget);
        horizontalLayoutWidget_Buttons->setObjectName("horizontalLayoutWidget_Buttons");
        horizontalLayoutWidget_Buttons->setGeometry(QRect(10, 410, 581, 41));
        horizontalLayoutButtons = new QHBoxLayout(horizontalLayoutWidget_Buttons);
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        horizontalLayoutButtons->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerButtons = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacerButtons);

        pushButtonOuvrir = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonOuvrir->setObjectName("pushButtonOuvrir");

        horizontalLayoutButtons->addWidget(pushButtonOuvrir);

        pushButtonClose = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayoutButtons->addWidget(pushButtonClose);

        UIListClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIListClient);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 18));
        UIListClient->setMenuBar(menubar);
        statusbar = new QStatusBar(UIListClient);
        statusbar->setObjectName("statusbar");
        UIListClient->setStatusBar(statusbar);

        retranslateUi(UIListClient);

        QMetaObject::connectSlotsByName(UIListClient);
    } // setupUi

    void retranslateUi(QMainWindow *UIListClient)
    {
        UIListClient->setWindowTitle(QCoreApplication::translate("UIListClient", "Gestion des clients - Gestionnaire : ", nullptr));
        labelTitle->setText(QCoreApplication::translate("UIListClient", "    Les clients", nullptr));
        pushButton->setText(QCoreApplication::translate("UIListClient", "Notifications", nullptr));
        pushButtonMessage->setText(QCoreApplication::translate("UIListClient", "Message", nullptr));
        pushButtonOuvrir->setText(QCoreApplication::translate("UIListClient", "Ouvrir", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UIListClient", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIListClient: public Ui_UIListClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILISTCLIENT_H
