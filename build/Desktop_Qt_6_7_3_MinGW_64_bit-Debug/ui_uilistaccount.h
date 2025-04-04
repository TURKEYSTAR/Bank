/********************************************************************************
** Form generated from reading UI file 'uilistaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILISTACCOUNT_H
#define UI_UILISTACCOUNT_H

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

class Ui_UIListAccount
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutNorth;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacerLeft;
    QWidget *horizontalLayoutWidget_Tableview;
    QHBoxLayout *horizontalLayoutTableview;
    QTableView *tableViewAccounts;
    QWidget *horizontalLayoutWidget_Buttons;
    QHBoxLayout *horizontalLayoutButtons;
    QSpacerItem *horizontalSpacerButtons;
    QPushButton *pushButtonNouveau;
    QPushButton *pushButtonModifier;
    QPushButton *pushButtonOuvrir;
    QPushButton *pushButtonGeler;
    QPushButton *pushButtonActiver;
    QPushButton *pushButtonClose;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIListAccount)
    {
        if (UIListAccount->objectName().isEmpty())
            UIListAccount->setObjectName("UIListAccount");
        UIListAccount->resize(600, 500);
        UIListAccount->setMinimumSize(QSize(600, 500));
        UIListAccount->setMaximumSize(QSize(600, 500));
        centralwidget = new QWidget(UIListAccount);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 581, 37));
        horizontalLayoutNorth = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutNorth->setObjectName("horizontalLayoutNorth");
        horizontalLayoutNorth->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutNorth->addItem(horizontalSpacer);

        labelTitle = new QLabel(horizontalLayoutWidget);
        labelTitle->setObjectName("labelTitle");
        QFont font;
        font.setPointSize(16);
        labelTitle->setFont(font);

        horizontalLayoutNorth->addWidget(labelTitle);

        horizontalSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutNorth->addItem(horizontalSpacerLeft);

        horizontalLayoutWidget_Tableview = new QWidget(centralwidget);
        horizontalLayoutWidget_Tableview->setObjectName("horizontalLayoutWidget_Tableview");
        horizontalLayoutWidget_Tableview->setGeometry(QRect(10, 55, 581, 351));
        horizontalLayoutTableview = new QHBoxLayout(horizontalLayoutWidget_Tableview);
        horizontalLayoutTableview->setObjectName("horizontalLayoutTableview");
        horizontalLayoutTableview->setContentsMargins(0, 0, 0, 0);
        tableViewAccounts = new QTableView(horizontalLayoutWidget_Tableview);
        tableViewAccounts->setObjectName("tableViewAccounts");
        tableViewAccounts->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        horizontalLayoutTableview->addWidget(tableViewAccounts);

        horizontalLayoutWidget_Buttons = new QWidget(centralwidget);
        horizontalLayoutWidget_Buttons->setObjectName("horizontalLayoutWidget_Buttons");
        horizontalLayoutWidget_Buttons->setGeometry(QRect(10, 410, 581, 41));
        horizontalLayoutButtons = new QHBoxLayout(horizontalLayoutWidget_Buttons);
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        horizontalLayoutButtons->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerButtons = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacerButtons);

        pushButtonNouveau = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonNouveau->setObjectName("pushButtonNouveau");

        horizontalLayoutButtons->addWidget(pushButtonNouveau);

        pushButtonModifier = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonModifier->setObjectName("pushButtonModifier");

        horizontalLayoutButtons->addWidget(pushButtonModifier);

        pushButtonOuvrir = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonOuvrir->setObjectName("pushButtonOuvrir");

        horizontalLayoutButtons->addWidget(pushButtonOuvrir);

        pushButtonGeler = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonGeler->setObjectName("pushButtonGeler");

        horizontalLayoutButtons->addWidget(pushButtonGeler);

        pushButtonActiver = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonActiver->setObjectName("pushButtonActiver");

        horizontalLayoutButtons->addWidget(pushButtonActiver);

        pushButtonClose = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayoutButtons->addWidget(pushButtonClose);

        UIListAccount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIListAccount);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 18));
        UIListAccount->setMenuBar(menubar);
        statusbar = new QStatusBar(UIListAccount);
        statusbar->setObjectName("statusbar");
        UIListAccount->setStatusBar(statusbar);

        retranslateUi(UIListAccount);

        QMetaObject::connectSlotsByName(UIListAccount);
    } // setupUi

    void retranslateUi(QMainWindow *UIListAccount)
    {
        UIListAccount->setWindowTitle(QCoreApplication::translate("UIListAccount", "Gestion des comptes - Gestionnaire : ", nullptr));
        labelTitle->setText(QCoreApplication::translate("UIListAccount", "Les comptes du client : ", nullptr));
        pushButtonNouveau->setText(QCoreApplication::translate("UIListAccount", "Nouveau", nullptr));
        pushButtonModifier->setText(QCoreApplication::translate("UIListAccount", "Modifier", nullptr));
        pushButtonOuvrir->setText(QCoreApplication::translate("UIListAccount", "Ouvrir", nullptr));
        pushButtonGeler->setText(QCoreApplication::translate("UIListAccount", "Geler", nullptr));
        pushButtonActiver->setText(QCoreApplication::translate("UIListAccount", "Activer", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UIListAccount", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIListAccount: public Ui_UIListAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILISTACCOUNT_H
