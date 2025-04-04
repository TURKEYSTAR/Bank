/********************************************************************************
** Form generated from reading UI file 'uiaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIACCOUNT_H
#define UI_UIACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIAccount
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelId;
    QLineEdit *lineEditAccountId;
    QLabel *labelIdClient;
    QLineEdit *lineEditIdClient;
    QLabel *labelAccountNumber;
    QLineEdit *lineEditAccountNumber;
    QLabel *labelType;
    QComboBox *comboBoxType;
    QLabel *labelBalance;
    QLineEdit *lineEditBalance;
    QComboBox *comboBoxStatut;
    QLabel *labelStatut;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonCreate;
    QSpacerItem *horizontalSpacerRight;
    QPushButton *pushButtonClose;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonUpdate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIAccount)
    {
        if (UIAccount->objectName().isEmpty())
            UIAccount->setObjectName("UIAccount");
        UIAccount->resize(450, 225);
        UIAccount->setMinimumSize(QSize(450, 225));
        UIAccount->setMaximumSize(QSize(450, 225));
        centralwidget = new QWidget(UIAccount);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(100, 10, 251, 165));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelId = new QLabel(formLayoutWidget);
        labelId->setObjectName("labelId");
        labelId->setMinimumSize(QSize(100, 20));
        labelId->setMaximumSize(QSize(100, 20));
        labelId->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelId);

        lineEditAccountId = new QLineEdit(formLayoutWidget);
        lineEditAccountId->setObjectName("lineEditAccountId");
        lineEditAccountId->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditAccountId);

        labelIdClient = new QLabel(formLayoutWidget);
        labelIdClient->setObjectName("labelIdClient");
        labelIdClient->setMinimumSize(QSize(100, 20));
        labelIdClient->setMaximumSize(QSize(100, 20));
        labelIdClient->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelIdClient);

        lineEditIdClient = new QLineEdit(formLayoutWidget);
        lineEditIdClient->setObjectName("lineEditIdClient");
        lineEditIdClient->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditIdClient);

        labelAccountNumber = new QLabel(formLayoutWidget);
        labelAccountNumber->setObjectName("labelAccountNumber");
        labelAccountNumber->setMinimumSize(QSize(100, 20));
        labelAccountNumber->setMaximumSize(QSize(100, 20));
        labelAccountNumber->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelAccountNumber);

        lineEditAccountNumber = new QLineEdit(formLayoutWidget);
        lineEditAccountNumber->setObjectName("lineEditAccountNumber");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditAccountNumber);

        labelType = new QLabel(formLayoutWidget);
        labelType->setObjectName("labelType");
        labelType->setMinimumSize(QSize(100, 20));
        labelType->setMaximumSize(QSize(100, 20));
        labelType->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelType);

        comboBoxType = new QComboBox(formLayoutWidget);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName("comboBoxType");

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBoxType);

        labelBalance = new QLabel(formLayoutWidget);
        labelBalance->setObjectName("labelBalance");
        labelBalance->setMinimumSize(QSize(100, 20));
        labelBalance->setMaximumSize(QSize(100, 20));
        labelBalance->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelBalance);

        lineEditBalance = new QLineEdit(formLayoutWidget);
        lineEditBalance->setObjectName("lineEditBalance");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditBalance);

        comboBoxStatut = new QComboBox(formLayoutWidget);
        comboBoxStatut->addItem(QString());
        comboBoxStatut->addItem(QString());
        comboBoxStatut->setObjectName("comboBoxStatut");

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBoxStatut);

        labelStatut = new QLabel(formLayoutWidget);
        labelStatut->setObjectName("labelStatut");

        formLayout->setWidget(5, QFormLayout::LabelRole, labelStatut);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 170, 361, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCreate = new QPushButton(gridLayoutWidget);
        pushButtonCreate->setObjectName("pushButtonCreate");

        gridLayout->addWidget(pushButtonCreate, 0, 2, 1, 1);

        horizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacerRight, 0, 6, 1, 1);

        pushButtonClose = new QPushButton(gridLayoutWidget);
        pushButtonClose->setObjectName("pushButtonClose");

        gridLayout->addWidget(pushButtonClose, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout->addWidget(pushButtonUpdate, 0, 3, 1, 1);

        UIAccount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIAccount);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 450, 18));
        UIAccount->setMenuBar(menubar);
        statusbar = new QStatusBar(UIAccount);
        statusbar->setObjectName("statusbar");
        UIAccount->setStatusBar(statusbar);

        retranslateUi(UIAccount);

        QMetaObject::connectSlotsByName(UIAccount);
    } // setupUi

    void retranslateUi(QMainWindow *UIAccount)
    {
        UIAccount->setWindowTitle(QCoreApplication::translate("UIAccount", "Client : ", nullptr));
        labelId->setText(QCoreApplication::translate("UIAccount", "Identifiant :", nullptr));
        labelIdClient->setText(QCoreApplication::translate("UIAccount", "Id client :", nullptr));
        labelAccountNumber->setText(QCoreApplication::translate("UIAccount", "Account number :", nullptr));
        labelType->setText(QCoreApplication::translate("UIAccount", "Account Type :", nullptr));
        comboBoxType->setItemText(0, QCoreApplication::translate("UIAccount", "COURANT", nullptr));
        comboBoxType->setItemText(1, QCoreApplication::translate("UIAccount", "EPARGNE", nullptr));

        labelBalance->setText(QCoreApplication::translate("UIAccount", "Balance :", nullptr));
        comboBoxStatut->setItemText(0, QCoreApplication::translate("UIAccount", "ACTIF", nullptr));
        comboBoxStatut->setItemText(1, QCoreApplication::translate("UIAccount", "GELER", nullptr));

        labelStatut->setText(QCoreApplication::translate("UIAccount", "                             Statut :", nullptr));
        pushButtonCreate->setText(QCoreApplication::translate("UIAccount", "Create", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UIAccount", "Close", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("UIAccount", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIAccount: public Ui_UIAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIACCOUNT_H
