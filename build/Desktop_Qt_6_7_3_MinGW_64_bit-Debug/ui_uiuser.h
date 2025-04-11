/********************************************************************************
** Form generated from reading UI file 'uiuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIUSER_H
#define UI_UIUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_UIUser
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelId;
    QLineEdit *lineEditIdentifiant;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QLabel *labelBirthdate;
    QDateEdit *dateEditBirthdate;
    QLabel *labelCountry;
    QComboBox *comboBoxCountry;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacerRight;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonFind;
    QPushButton *pushButtonList;
    QPushButton *pushButtonCreate;
    QSpacerItem *horizontalSpacer;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_credentials;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_2;
    QLabel *labelRole;
    QComboBox *comboBoxRole;
    QLabel *labelEmail;
    QLabel *labelSatut;
    QLineEdit *lineEditEmail;
    QComboBox *comboBoxStatut;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIUser)
    {
        if (UIUser->objectName().isEmpty())
            UIUser->setObjectName("UIUser");
        UIUser->resize(480, 350);
        UIUser->setMinimumSize(QSize(480, 350));
        UIUser->setMaximumSize(QSize(480, 350));
        centralwidget = new QWidget(UIUser);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 10, 401, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelId = new QLabel(formLayoutWidget);
        labelId->setObjectName("labelId");
        labelId->setMinimumSize(QSize(60, 20));
        labelId->setMaximumSize(QSize(60, 20));
        labelId->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelId);

        lineEditIdentifiant = new QLineEdit(formLayoutWidget);
        lineEditIdentifiant->setObjectName("lineEditIdentifiant");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditIdentifiant);

        labelNom = new QLabel(formLayoutWidget);
        labelNom->setObjectName("labelNom");
        labelNom->setMinimumSize(QSize(60, 20));
        labelNom->setMaximumSize(QSize(60, 20));
        labelNom->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNom);

        lineEditNom = new QLineEdit(formLayoutWidget);
        lineEditNom->setObjectName("lineEditNom");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditNom);

        labelBirthdate = new QLabel(formLayoutWidget);
        labelBirthdate->setObjectName("labelBirthdate");
        labelBirthdate->setMinimumSize(QSize(60, 20));
        labelBirthdate->setMaximumSize(QSize(60, 20));
        labelBirthdate->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelBirthdate);

        dateEditBirthdate = new QDateEdit(formLayoutWidget);
        dateEditBirthdate->setObjectName("dateEditBirthdate");

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEditBirthdate);

        labelCountry = new QLabel(formLayoutWidget);
        labelCountry->setObjectName("labelCountry");
        labelCountry->setMinimumSize(QSize(60, 20));
        labelCountry->setMaximumSize(QSize(60, 20));
        labelCountry->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelCountry);

        comboBoxCountry = new QComboBox(formLayoutWidget);
        comboBoxCountry->addItem(QString());
        comboBoxCountry->addItem(QString());
        comboBoxCountry->addItem(QString());
        comboBoxCountry->addItem(QString());
        comboBoxCountry->addItem(QString());
        comboBoxCountry->addItem(QString());
        comboBoxCountry->addItem(QString());
        comboBoxCountry->setObjectName("comboBoxCountry");

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBoxCountry);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 280, 461, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacerRight, 0, 6, 1, 1);

        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout->addWidget(pushButtonUpdate, 0, 3, 1, 1);

        pushButtonClose = new QPushButton(gridLayoutWidget);
        pushButtonClose->setObjectName("pushButtonClose");

        gridLayout->addWidget(pushButtonClose, 0, 5, 1, 1);

        pushButtonFind = new QPushButton(gridLayoutWidget);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout->addWidget(pushButtonFind, 0, 2, 1, 1);

        pushButtonList = new QPushButton(gridLayoutWidget);
        pushButtonList->setObjectName("pushButtonList");

        gridLayout->addWidget(pushButtonList, 0, 4, 1, 1);

        pushButtonCreate = new QPushButton(gridLayoutWidget);
        pushButtonCreate->setObjectName("pushButtonCreate");

        gridLayout->addWidget(pushButtonCreate, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(40, 130, 401, 51));
        formLayout_credentials = new QFormLayout(formLayoutWidget_2);
        formLayout_credentials->setObjectName("formLayout_credentials");
        formLayout_credentials->setContentsMargins(0, 0, 0, 0);
        labelLogin = new QLabel(formLayoutWidget_2);
        labelLogin->setObjectName("labelLogin");
        labelLogin->setMinimumSize(QSize(60, 20));
        labelLogin->setMaximumSize(QSize(60, 20));
        labelLogin->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_credentials->setWidget(0, QFormLayout::LabelRole, labelLogin);

        lineEditLogin = new QLineEdit(formLayoutWidget_2);
        lineEditLogin->setObjectName("lineEditLogin");

        formLayout_credentials->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        labelPassword = new QLabel(formLayoutWidget_2);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setMinimumSize(QSize(60, 20));
        labelPassword->setMaximumSize(QSize(60, 20));
        labelPassword->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_credentials->setWidget(1, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(formLayoutWidget_2);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_credentials->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        formLayoutWidget_3 = new QWidget(centralwidget);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(40, 190, 401, 81));
        formLayout_2 = new QFormLayout(formLayoutWidget_3);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        labelRole = new QLabel(formLayoutWidget_3);
        labelRole->setObjectName("labelRole");
        labelRole->setMinimumSize(QSize(60, 20));
        labelRole->setMaximumSize(QSize(60, 20));
        labelRole->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelRole);

        comboBoxRole = new QComboBox(formLayoutWidget_3);
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->addItem(QString());
        comboBoxRole->setObjectName("comboBoxRole");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBoxRole);

        labelEmail = new QLabel(formLayoutWidget_3);
        labelEmail->setObjectName("labelEmail");
        labelEmail->setMinimumSize(QSize(60, 20));
        labelEmail->setMaximumSize(QSize(60, 20));
        labelEmail->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelEmail);

        labelSatut = new QLabel(formLayoutWidget_3);
        labelSatut->setObjectName("labelSatut");
        labelSatut->setMinimumSize(QSize(60, 20));
        labelSatut->setMaximumSize(QSize(60, 20));
        labelSatut->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelSatut);

        lineEditEmail = new QLineEdit(formLayoutWidget_3);
        lineEditEmail->setObjectName("lineEditEmail");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditEmail);

        comboBoxStatut = new QComboBox(formLayoutWidget_3);
        comboBoxStatut->addItem(QString());
        comboBoxStatut->addItem(QString());
        comboBoxStatut->addItem(QString());
        comboBoxStatut->setObjectName("comboBoxStatut");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBoxStatut);

        UIUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 480, 18));
        UIUser->setMenuBar(menubar);
        statusbar = new QStatusBar(UIUser);
        statusbar->setObjectName("statusbar");
        UIUser->setStatusBar(statusbar);

        retranslateUi(UIUser);

        QMetaObject::connectSlotsByName(UIUser);
    } // setupUi

    void retranslateUi(QMainWindow *UIUser)
    {
        UIUser->setWindowTitle(QCoreApplication::translate("UIUser", "Gestion des utilisateurs - Admin : ", nullptr));
        labelId->setText(QCoreApplication::translate("UIUser", "Identifiant :", nullptr));
        labelNom->setText(QCoreApplication::translate("UIUser", "Nom :", nullptr));
        labelBirthdate->setText(QCoreApplication::translate("UIUser", "Birthdate :", nullptr));
        labelCountry->setText(QCoreApplication::translate("UIUser", "Country :", nullptr));
        comboBoxCountry->setItemText(0, QCoreApplication::translate("UIUser", "Senegal", nullptr));
        comboBoxCountry->setItemText(1, QCoreApplication::translate("UIUser", "Mali", nullptr));
        comboBoxCountry->setItemText(2, QCoreApplication::translate("UIUser", "Ivoiry Coast", nullptr));
        comboBoxCountry->setItemText(3, QCoreApplication::translate("UIUser", "Benin", nullptr));
        comboBoxCountry->setItemText(4, QCoreApplication::translate("UIUser", "South Africa", nullptr));
        comboBoxCountry->setItemText(5, QCoreApplication::translate("UIUser", "Morocco", nullptr));
        comboBoxCountry->setItemText(6, QCoreApplication::translate("UIUser", "Niger", nullptr));

        pushButtonUpdate->setText(QCoreApplication::translate("UIUser", "Modifier", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UIUser", "Fermer", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("UIUser", "Trouver", nullptr));
        pushButtonList->setText(QCoreApplication::translate("UIUser", "Lister", nullptr));
        pushButtonCreate->setText(QCoreApplication::translate("UIUser", "Cr\303\251er", nullptr));
        labelLogin->setText(QCoreApplication::translate("UIUser", "Login :", nullptr));
        labelPassword->setText(QCoreApplication::translate("UIUser", "Password :", nullptr));
        labelRole->setText(QCoreApplication::translate("UIUser", "R\303\264le :", nullptr));
        comboBoxRole->setItemText(0, QCoreApplication::translate("UIUser", "ADMINISTRATEUR", nullptr));
        comboBoxRole->setItemText(1, QCoreApplication::translate("UIUser", "CLIENT", nullptr));
        comboBoxRole->setItemText(2, QCoreApplication::translate("UIUser", "GESTIONNAIRE", nullptr));

        labelEmail->setText(QCoreApplication::translate("UIUser", "Email :", nullptr));
        labelSatut->setText(QCoreApplication::translate("UIUser", "Statut :", nullptr));
        comboBoxStatut->setItemText(0, QString());
        comboBoxStatut->setItemText(1, QCoreApplication::translate("UIUser", "ACTIF", nullptr));
        comboBoxStatut->setItemText(2, QCoreApplication::translate("UIUser", "INACTIF", nullptr));

    } // retranslateUi

};

namespace Ui {
    class UIUser: public Ui_UIUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIUSER_H
