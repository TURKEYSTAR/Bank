/********************************************************************************
** Form generated from reading UI file 'uidashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIDASHBOARD_H
#define UI_UIDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIDashboard
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabOverview;
    QVBoxLayout *verticalLayout_2;
    QFrame *frameMetrics;
    QHBoxLayout *horizontalLayout;
    QFrame *frameClients;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelClientsTitle;
    QLabel *labelClientsValue;
    QFrame *frameTransactions;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTransactionsTitle;
    QLabel *labelTransactionsValue;
    QFrame *frameBalance;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelBalanceTitle;
    QLabel *labelBalanceValue;
    QFrame *frameNotificationStatus;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNotificationStatus;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonActiver_2;
    QPushButton *pushButtonDesactiver;
    QLabel *labelRecentTransactions;
    QTableView *tableViewRecentTransactions;
    QWidget *tabDetails;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableViewAccounts;
    QGridLayout *gridLayout;
    QPushButton *pushButtonActiver;
    QPushButton *pushButtonLimiter;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIDashboard)
    {
        if (UIDashboard->objectName().isEmpty())
            UIDashboard->setObjectName("UIDashboard");
        UIDashboard->resize(542, 550);
        centralwidget = new QWidget(UIDashboard);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabOverview = new QWidget();
        tabOverview->setObjectName("tabOverview");
        verticalLayout_2 = new QVBoxLayout(tabOverview);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frameMetrics = new QFrame(tabOverview);
        frameMetrics->setObjectName("frameMetrics");
        frameMetrics->setFrameShape(QFrame::Shape::StyledPanel);
        horizontalLayout = new QHBoxLayout(frameMetrics);
        horizontalLayout->setObjectName("horizontalLayout");
        frameClients = new QFrame(frameMetrics);
        frameClients->setObjectName("frameClients");
        frameClients->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_3 = new QVBoxLayout(frameClients);
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelClientsTitle = new QLabel(frameClients);
        labelClientsTitle->setObjectName("labelClientsTitle");
        labelClientsTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelClientsTitle);

        labelClientsValue = new QLabel(frameClients);
        labelClientsValue->setObjectName("labelClientsValue");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        labelClientsValue->setFont(font);
        labelClientsValue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelClientsValue);


        horizontalLayout->addWidget(frameClients);

        frameTransactions = new QFrame(frameMetrics);
        frameTransactions->setObjectName("frameTransactions");
        frameTransactions->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_4 = new QVBoxLayout(frameTransactions);
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelTransactionsTitle = new QLabel(frameTransactions);
        labelTransactionsTitle->setObjectName("labelTransactionsTitle");
        labelTransactionsTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelTransactionsTitle);

        labelTransactionsValue = new QLabel(frameTransactions);
        labelTransactionsValue->setObjectName("labelTransactionsValue");
        labelTransactionsValue->setFont(font);
        labelTransactionsValue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelTransactionsValue);


        horizontalLayout->addWidget(frameTransactions);

        frameBalance = new QFrame(frameMetrics);
        frameBalance->setObjectName("frameBalance");
        frameBalance->setFrameShape(QFrame::Shape::StyledPanel);
        verticalLayout_5 = new QVBoxLayout(frameBalance);
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelBalanceTitle = new QLabel(frameBalance);
        labelBalanceTitle->setObjectName("labelBalanceTitle");
        labelBalanceTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelBalanceTitle);

        labelBalanceValue = new QLabel(frameBalance);
        labelBalanceValue->setObjectName("labelBalanceValue");
        labelBalanceValue->setFont(font);
        labelBalanceValue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelBalanceValue);


        horizontalLayout->addWidget(frameBalance);


        verticalLayout_2->addWidget(frameMetrics);

        frameNotificationStatus = new QFrame(tabOverview);
        frameNotificationStatus->setObjectName("frameNotificationStatus");
        frameNotificationStatus->setFrameShape(QFrame::Shape::StyledPanel);
        horizontalLayout_2 = new QHBoxLayout(frameNotificationStatus);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelNotificationStatus = new QLabel(frameNotificationStatus);
        labelNotificationStatus->setObjectName("labelNotificationStatus");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        labelNotificationStatus->setFont(font1);

        horizontalLayout_2->addWidget(labelNotificationStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonActiver_2 = new QPushButton(frameNotificationStatus);
        pushButtonActiver_2->setObjectName("pushButtonActiver_2");

        horizontalLayout_2->addWidget(pushButtonActiver_2);

        pushButtonDesactiver = new QPushButton(frameNotificationStatus);
        pushButtonDesactiver->setObjectName("pushButtonDesactiver");

        horizontalLayout_2->addWidget(pushButtonDesactiver);


        verticalLayout_2->addWidget(frameNotificationStatus);

        labelRecentTransactions = new QLabel(tabOverview);
        labelRecentTransactions->setObjectName("labelRecentTransactions");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        labelRecentTransactions->setFont(font2);
        labelRecentTransactions->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(labelRecentTransactions);

        tableViewRecentTransactions = new QTableView(tabOverview);
        tableViewRecentTransactions->setObjectName("tableViewRecentTransactions");
        tableViewRecentTransactions->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        verticalLayout_2->addWidget(tableViewRecentTransactions);

        tabWidget->addTab(tabOverview, QString());
        tabDetails = new QWidget();
        tabDetails->setObjectName("tabDetails");
        verticalLayout_6 = new QVBoxLayout(tabDetails);
        verticalLayout_6->setObjectName("verticalLayout_6");
        tableViewAccounts = new QTableView(tabDetails);
        tableViewAccounts->setObjectName("tableViewAccounts");
        tableViewAccounts->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        verticalLayout_6->addWidget(tableViewAccounts);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButtonActiver = new QPushButton(tabDetails);
        pushButtonActiver->setObjectName("pushButtonActiver");

        gridLayout->addWidget(pushButtonActiver, 0, 1, 1, 1);

        pushButtonLimiter = new QPushButton(tabDetails);
        pushButtonLimiter->setObjectName("pushButtonLimiter");

        gridLayout->addWidget(pushButtonLimiter, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        tabWidget->addTab(tabDetails, QString());

        verticalLayout->addWidget(tabWidget);

        UIDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 542, 18));
        UIDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(UIDashboard);
        statusbar->setObjectName("statusbar");
        UIDashboard->setStatusBar(statusbar);

        retranslateUi(UIDashboard);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UIDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *UIDashboard)
    {
        UIDashboard->setWindowTitle(QCoreApplication::translate("UIDashboard", "Admin Dashboard", nullptr));
        labelClientsTitle->setText(QCoreApplication::translate("UIDashboard", "Total Clients", nullptr));
        labelClientsValue->setText(QCoreApplication::translate("UIDashboard", "0", nullptr));
        labelTransactionsTitle->setText(QCoreApplication::translate("UIDashboard", "Total Transactions", nullptr));
        labelTransactionsValue->setText(QCoreApplication::translate("UIDashboard", "0", nullptr));
        labelBalanceTitle->setText(QCoreApplication::translate("UIDashboard", "Total Balance", nullptr));
        labelBalanceValue->setText(QCoreApplication::translate("UIDashboard", "0.00", nullptr));
        labelNotificationStatus->setText(QCoreApplication::translate("UIDashboard", "Notifications statut:", nullptr));
        pushButtonActiver_2->setText(QCoreApplication::translate("UIDashboard", "Activer", nullptr));
        pushButtonDesactiver->setText(QCoreApplication::translate("UIDashboard", "D\303\251sactiver", nullptr));
        labelRecentTransactions->setText(QCoreApplication::translate("UIDashboard", "Transactions R\303\251centes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabOverview), QCoreApplication::translate("UIDashboard", "Aper\303\247u", nullptr));
        pushButtonActiver->setText(QCoreApplication::translate("UIDashboard", "Activer", nullptr));
        pushButtonLimiter->setText(QCoreApplication::translate("UIDashboard", "Limiter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDetails), QCoreApplication::translate("UIDashboard", "Informations comptes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIDashboard: public Ui_UIDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIDASHBOARD_H
