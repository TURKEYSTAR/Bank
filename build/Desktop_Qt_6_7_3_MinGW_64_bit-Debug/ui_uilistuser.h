/********************************************************************************
** Form generated from reading UI file 'uilistuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILISTUSER_H
#define UI_UILISTUSER_H

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

class Ui_UIListUser
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutNorth;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacerLeft;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayoutTableview;
    QTableView *tableViewUsers;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayoutButtons;
    QSpacerItem *horizontalSpacerButtons;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonClose;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIListUser)
    {
        if (UIListUser->objectName().isEmpty())
            UIListUser->setObjectName("UIListUser");
        UIListUser->resize(600, 500);
        UIListUser->setMinimumSize(QSize(600, 500));
        UIListUser->setMaximumSize(QSize(600, 500));
        centralwidget = new QWidget(UIListUser);
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

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 55, 581, 351));
        horizontalLayoutTableview = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayoutTableview->setObjectName("horizontalLayoutTableview");
        horizontalLayoutTableview->setContentsMargins(0, 0, 0, 0);
        tableViewUsers = new QTableView(horizontalLayoutWidget_3);
        tableViewUsers->setObjectName("tableViewUsers");
        tableViewUsers->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayoutTableview->addWidget(tableViewUsers);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(10, 410, 581, 41));
        horizontalLayoutButtons = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        horizontalLayoutButtons->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerButtons = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacerButtons);

        pushButtonUpdate = new QPushButton(horizontalLayoutWidget_4);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        horizontalLayoutButtons->addWidget(pushButtonUpdate);

        pushButtonDelete = new QPushButton(horizontalLayoutWidget_4);
        pushButtonDelete->setObjectName("pushButtonDelete");

        horizontalLayoutButtons->addWidget(pushButtonDelete);

        pushButtonClose = new QPushButton(horizontalLayoutWidget_4);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayoutButtons->addWidget(pushButtonClose);

        UIListUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIListUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 21));
        UIListUser->setMenuBar(menubar);
        statusbar = new QStatusBar(UIListUser);
        statusbar->setObjectName("statusbar");
        UIListUser->setStatusBar(statusbar);

        retranslateUi(UIListUser);

        QMetaObject::connectSlotsByName(UIListUser);
    } // setupUi

    void retranslateUi(QMainWindow *UIListUser)
    {
        UIListUser->setWindowTitle(QCoreApplication::translate("UIListUser", "Gestion des utilisateurs - Admin : ", nullptr));
        labelTitle->setText(QCoreApplication::translate("UIListUser", "Les utilisateurs", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("UIListUser", "Modifier", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("UIListUser", "Supprimer", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UIListUser", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIListUser: public Ui_UIListUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILISTUSER_H
