/********************************************************************************
** Form generated from reading UI file 'uilisttransaction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILISTTRANSACTION_H
#define UI_UILISTTRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_UIListTransaction
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
    QTableView *tableViewTransactions;
    QWidget *horizontalLayoutWidget_Buttons;
    QHBoxLayout *horizontalLayoutButtons;
    QSpacerItem *horizontalSpacerButtons;
    QPushButton *pushButtonClose;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxType;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonFiltrer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIListTransaction)
    {
        if (UIListTransaction->objectName().isEmpty())
            UIListTransaction->setObjectName("UIListTransaction");
        UIListTransaction->resize(800, 500);
        UIListTransaction->setMinimumSize(QSize(800, 500));
        UIListTransaction->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(UIListTransaction);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 781, 37));
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
        horizontalLayoutWidget_Tableview->setGeometry(QRect(10, 80, 781, 351));
        horizontalLayoutTableview = new QHBoxLayout(horizontalLayoutWidget_Tableview);
        horizontalLayoutTableview->setObjectName("horizontalLayoutTableview");
        horizontalLayoutTableview->setContentsMargins(0, 0, 0, 0);
        tableViewTransactions = new QTableView(horizontalLayoutWidget_Tableview);
        tableViewTransactions->setObjectName("tableViewTransactions");
        tableViewTransactions->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        horizontalLayoutTableview->addWidget(tableViewTransactions);

        horizontalLayoutWidget_Buttons = new QWidget(centralwidget);
        horizontalLayoutWidget_Buttons->setObjectName("horizontalLayoutWidget_Buttons");
        horizontalLayoutWidget_Buttons->setGeometry(QRect(0, 430, 781, 41));
        horizontalLayoutButtons = new QHBoxLayout(horizontalLayoutWidget_Buttons);
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        horizontalLayoutButtons->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerButtons = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacerButtons);

        pushButtonClose = new QPushButton(horizontalLayoutWidget_Buttons);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayoutButtons->addWidget(pushButtonClose);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(9, 50, 781, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBoxType = new QComboBox(horizontalLayoutWidget_2);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName("comboBoxType");

        horizontalLayout_2->addWidget(comboBoxType);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonFiltrer = new QPushButton(horizontalLayoutWidget_2);
        pushButtonFiltrer->setObjectName("pushButtonFiltrer");

        horizontalLayout_2->addWidget(pushButtonFiltrer);

        UIListTransaction->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIListTransaction);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        UIListTransaction->setMenuBar(menubar);
        statusbar = new QStatusBar(UIListTransaction);
        statusbar->setObjectName("statusbar");
        UIListTransaction->setStatusBar(statusbar);

        retranslateUi(UIListTransaction);

        QMetaObject::connectSlotsByName(UIListTransaction);
    } // setupUi

    void retranslateUi(QMainWindow *UIListTransaction)
    {
        UIListTransaction->setWindowTitle(QCoreApplication::translate("UIListTransaction", "Historique des transactions", nullptr));
        labelTitle->setText(QCoreApplication::translate("UIListTransaction", "Les transactions", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UIListTransaction", "Fermer", nullptr));
        comboBoxType->setItemText(0, QCoreApplication::translate("UIListTransaction", "Tous", nullptr));
        comboBoxType->setItemText(1, QCoreApplication::translate("UIListTransaction", "Type", nullptr));
        comboBoxType->setItemText(2, QCoreApplication::translate("UIListTransaction", "Date", nullptr));
        comboBoxType->setItemText(3, QCoreApplication::translate("UIListTransaction", "Balance", nullptr));

        pushButtonFiltrer->setText(QCoreApplication::translate("UIListTransaction", "Filtrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIListTransaction: public Ui_UIListTransaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILISTTRANSACTION_H
