/********************************************************************************
** Form generated from reading UI file 'uiprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIPROFILE_H
#define UI_UIPROFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uiprofile
{
public:
    QAction *profile;
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QLabel *labelCountry;
    QLineEdit *lineEditCountry;
    QLabel *labelBirthdate;
    QLineEdit *lineEditBirthdate;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QLabel *labelRole;
    QLineEdit *lineEditRole;
    QLabel *labelStatut;
    QLineEdit *lineEditStatut;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonFermer;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitre;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *uiprofile)
    {
        if (uiprofile->objectName().isEmpty())
            uiprofile->setObjectName("uiprofile");
        uiprofile->resize(279, 311);
        profile = new QAction(uiprofile);
        profile->setObjectName("profile");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::UserAvailable));
        profile->setIcon(icon);
        profile->setMenuRole(QAction::MenuRole::PreferencesRole);
        centralwidget = new QWidget(uiprofile);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 60, 261, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelName = new QLabel(formLayoutWidget);
        labelName->setObjectName("labelName");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        lineEditName = new QLineEdit(formLayoutWidget);
        lineEditName->setObjectName("lineEditName");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditName);

        labelLogin = new QLabel(formLayoutWidget);
        labelLogin->setObjectName("labelLogin");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelLogin);

        lineEditLogin = new QLineEdit(formLayoutWidget);
        lineEditLogin->setObjectName("lineEditLogin");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditLogin);

        labelPassword = new QLabel(formLayoutWidget);
        labelPassword->setObjectName("labelPassword");

        formLayout->setWidget(2, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(formLayoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditPassword);

        labelCountry = new QLabel(formLayoutWidget);
        labelCountry->setObjectName("labelCountry");

        formLayout->setWidget(3, QFormLayout::LabelRole, labelCountry);

        lineEditCountry = new QLineEdit(formLayoutWidget);
        lineEditCountry->setObjectName("lineEditCountry");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditCountry);

        labelBirthdate = new QLabel(formLayoutWidget);
        labelBirthdate->setObjectName("labelBirthdate");

        formLayout->setWidget(4, QFormLayout::LabelRole, labelBirthdate);

        lineEditBirthdate = new QLineEdit(formLayoutWidget);
        lineEditBirthdate->setObjectName("lineEditBirthdate");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditBirthdate);

        labelEmail = new QLabel(formLayoutWidget);
        labelEmail->setObjectName("labelEmail");

        formLayout->setWidget(5, QFormLayout::LabelRole, labelEmail);

        lineEditEmail = new QLineEdit(formLayoutWidget);
        lineEditEmail->setObjectName("lineEditEmail");

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditEmail);

        labelRole = new QLabel(formLayoutWidget);
        labelRole->setObjectName("labelRole");

        formLayout->setWidget(6, QFormLayout::LabelRole, labelRole);

        lineEditRole = new QLineEdit(formLayoutWidget);
        lineEditRole->setObjectName("lineEditRole");

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditRole);

        labelStatut = new QLabel(formLayoutWidget);
        labelStatut->setObjectName("labelStatut");

        formLayout->setWidget(7, QFormLayout::LabelRole, labelStatut);

        lineEditStatut = new QLineEdit(formLayoutWidget);
        lineEditStatut->setObjectName("lineEditStatut");

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditStatut);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 250, 261, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonFermer = new QPushButton(horizontalLayoutWidget);
        pushButtonFermer->setObjectName("pushButtonFermer");

        horizontalLayout->addWidget(pushButtonFermer);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 261, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labelTitre = new QLabel(horizontalLayoutWidget_2);
        labelTitre->setObjectName("labelTitre");
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setUnderline(false);
        labelTitre->setFont(font);

        horizontalLayout_2->addWidget(labelTitre);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        uiprofile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(uiprofile);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 279, 18));
        uiprofile->setMenuBar(menubar);
        statusbar = new QStatusBar(uiprofile);
        statusbar->setObjectName("statusbar");
        uiprofile->setStatusBar(statusbar);

        retranslateUi(uiprofile);

        QMetaObject::connectSlotsByName(uiprofile);
    } // setupUi

    void retranslateUi(QMainWindow *uiprofile)
    {
        uiprofile->setWindowTitle(QCoreApplication::translate("uiprofile", "MainWindow", nullptr));
        profile->setText(QCoreApplication::translate("uiprofile", "Client", nullptr));
        labelName->setText(QCoreApplication::translate("uiprofile", "     Nom :", nullptr));
        labelLogin->setText(QCoreApplication::translate("uiprofile", "    Login :", nullptr));
        labelPassword->setText(QCoreApplication::translate("uiprofile", "Password :", nullptr));
        labelCountry->setText(QCoreApplication::translate("uiprofile", " Country : ", nullptr));
        labelBirthdate->setText(QCoreApplication::translate("uiprofile", "Birthdate :", nullptr));
        labelEmail->setText(QCoreApplication::translate("uiprofile", "      Email :", nullptr));
        labelRole->setText(QCoreApplication::translate("uiprofile", "       Role : ", nullptr));
        labelStatut->setText(QCoreApplication::translate("uiprofile", "     Statut : ", nullptr));
        pushButtonFermer->setText(QCoreApplication::translate("uiprofile", "Fermer", nullptr));
        labelTitre->setText(QCoreApplication::translate("uiprofile", "Informations personnelles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiprofile: public Ui_uiprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIPROFILE_H
