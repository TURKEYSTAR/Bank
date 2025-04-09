/********************************************************************************
** Form generated from reading UI file 'uiclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UICLIENT_H
#define UI_UICLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIClient
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutNorth;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacerRight;
    QPushButton *pushButtonNotification;
    QPushButton *pushButtonProfile;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayoutCenter;
    QTableView *tableViewAccounts;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayoutSouthButtonsComptes;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOuvrir;
    QPushButton *pushButtonClose;
    QLabel *labelTransaction;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayoutSouthButtonsTransactions;
    QPushButton *pushButtonVirement;
    QPushButton *pushButtonRetrait;
    QPushButton *pushButtonVersement;
    QPushButton *pushButtonHistorique;
    QSpacerItem *horizontalSpacer_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayoutCurrentTransation;
    QLabel *labelCurrentTransaction;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout;
    QLabel *labelMontant;
    QLineEdit *lineEditMontant;
    QLabel *labelNumeroBeneficiaire;
    QLineEdit *lineEditNumeroBeneficiaire;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIClient)
    {
        if (UIClient->objectName().isEmpty())
            UIClient->setObjectName("UIClient");
        UIClient->resize(600, 465);
        UIClient->setMinimumSize(QSize(600, 465));
        UIClient->setMaximumSize(QSize(600, 465));
        centralwidget = new QWidget(UIClient);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 581, 35));
        horizontalLayoutNorth = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutNorth->setObjectName("horizontalLayoutNorth");
        horizontalLayoutNorth->setContentsMargins(0, 0, 0, 0);
        labelTitle = new QLabel(horizontalLayoutWidget);
        labelTitle->setObjectName("labelTitle");
        QFont font;
        font.setPointSize(16);
        labelTitle->setFont(font);

        horizontalLayoutNorth->addWidget(labelTitle);

        horizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutNorth->addItem(horizontalSpacerRight);

        pushButtonNotification = new QPushButton(horizontalLayoutWidget);
        pushButtonNotification->setObjectName("pushButtonNotification");

        horizontalLayoutNorth->addWidget(pushButtonNotification);

        pushButtonProfile = new QPushButton(horizontalLayoutWidget);
        pushButtonProfile->setObjectName("pushButtonProfile");

        horizontalLayoutNorth->addWidget(pushButtonProfile);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 48, 581, 221));
        horizontalLayoutCenter = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayoutCenter->setObjectName("horizontalLayoutCenter");
        horizontalLayoutCenter->setContentsMargins(0, 0, 0, 0);
        tableViewAccounts = new QTableView(horizontalLayoutWidget_2);
        tableViewAccounts->setObjectName("tableViewAccounts");
        tableViewAccounts->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableViewAccounts->setSortingEnabled(true);

        horizontalLayoutCenter->addWidget(tableViewAccounts);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 274, 581, 31));
        horizontalLayoutSouthButtonsComptes = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayoutSouthButtonsComptes->setObjectName("horizontalLayoutSouthButtonsComptes");
        horizontalLayoutSouthButtonsComptes->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutSouthButtonsComptes->addItem(horizontalSpacer);

        pushButtonOuvrir = new QPushButton(horizontalLayoutWidget_3);
        pushButtonOuvrir->setObjectName("pushButtonOuvrir");

        horizontalLayoutSouthButtonsComptes->addWidget(pushButtonOuvrir);

        pushButtonClose = new QPushButton(horizontalLayoutWidget_3);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayoutSouthButtonsComptes->addWidget(pushButtonClose);

        labelTransaction = new QLabel(centralwidget);
        labelTransaction->setObjectName("labelTransaction");
        labelTransaction->setGeometry(QRect(10, 311, 91, 16));
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(10, 328, 581, 31));
        horizontalLayoutSouthButtonsTransactions = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayoutSouthButtonsTransactions->setObjectName("horizontalLayoutSouthButtonsTransactions");
        horizontalLayoutSouthButtonsTransactions->setContentsMargins(0, 0, 0, 0);
        pushButtonVirement = new QPushButton(horizontalLayoutWidget_4);
        pushButtonVirement->setObjectName("pushButtonVirement");

        horizontalLayoutSouthButtonsTransactions->addWidget(pushButtonVirement);

        pushButtonRetrait = new QPushButton(horizontalLayoutWidget_4);
        pushButtonRetrait->setObjectName("pushButtonRetrait");

        horizontalLayoutSouthButtonsTransactions->addWidget(pushButtonRetrait);

        pushButtonVersement = new QPushButton(horizontalLayoutWidget_4);
        pushButtonVersement->setObjectName("pushButtonVersement");

        horizontalLayoutSouthButtonsTransactions->addWidget(pushButtonVersement);

        pushButtonHistorique = new QPushButton(horizontalLayoutWidget_4);
        pushButtonHistorique->setObjectName("pushButtonHistorique");

        horizontalLayoutSouthButtonsTransactions->addWidget(pushButtonHistorique);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutSouthButtonsTransactions->addItem(horizontalSpacer_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(510, 391, 77, 50));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonOK = new QPushButton(verticalLayoutWidget);
        pushButtonOK->setObjectName("pushButtonOK");

        verticalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(verticalLayoutWidget);
        pushButtonCancel->setObjectName("pushButtonCancel");

        verticalLayout->addWidget(pushButtonCancel);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(183, 369, 321, 20));
        verticalLayoutCurrentTransation = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayoutCurrentTransation->setObjectName("verticalLayoutCurrentTransation");
        verticalLayoutCurrentTransation->setContentsMargins(0, 0, 0, 0);
        labelCurrentTransaction = new QLabel(verticalLayoutWidget_2);
        labelCurrentTransaction->setObjectName("labelCurrentTransaction");
        labelCurrentTransaction->setMinimumSize(QSize(250, 0));
        labelCurrentTransaction->setMaximumSize(QSize(250, 20));
        labelCurrentTransaction->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayoutCurrentTransation->addWidget(labelCurrentTransaction);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(185, 392, 321, 50));
        formLayout = new QFormLayout(formLayoutWidget_2);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelMontant = new QLabel(formLayoutWidget_2);
        labelMontant->setObjectName("labelMontant");
        labelMontant->setMinimumSize(QSize(120, 0));
        labelMontant->setMaximumSize(QSize(120, 20));
        labelMontant->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelMontant);

        lineEditMontant = new QLineEdit(formLayoutWidget_2);
        lineEditMontant->setObjectName("lineEditMontant");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditMontant);

        labelNumeroBeneficiaire = new QLabel(formLayoutWidget_2);
        labelNumeroBeneficiaire->setObjectName("labelNumeroBeneficiaire");
        labelNumeroBeneficiaire->setMaximumSize(QSize(120, 20));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNumeroBeneficiaire);

        lineEditNumeroBeneficiaire = new QLineEdit(formLayoutWidget_2);
        lineEditNumeroBeneficiaire->setObjectName("lineEditNumeroBeneficiaire");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditNumeroBeneficiaire);

        UIClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIClient);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 18));
        UIClient->setMenuBar(menubar);
        statusbar = new QStatusBar(UIClient);
        statusbar->setObjectName("statusbar");
        UIClient->setStatusBar(statusbar);

        retranslateUi(UIClient);

        QMetaObject::connectSlotsByName(UIClient);
    } // setupUi

    void retranslateUi(QMainWindow *UIClient)
    {
        UIClient->setWindowTitle(QCoreApplication::translate("UIClient", "Gestion des comptes bancaires - Client : ", nullptr));
        labelTitle->setText(QCoreApplication::translate("UIClient", " Vos comptes", nullptr));
        pushButtonNotification->setText(QCoreApplication::translate("UIClient", "Notifications", nullptr));
        pushButtonProfile->setText(QCoreApplication::translate("UIClient", "Profile", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonOuvrir->setToolTip(QCoreApplication::translate("UIClient", "Voir les transactions du compte s\303\251lectionn\303\251 ...", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonOuvrir->setText(QCoreApplication::translate("UIClient", "Ouvrir", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UIClient", "Fermer", nullptr));
        labelTransaction->setText(QCoreApplication::translate("UIClient", "Quick Transaction", nullptr));
        pushButtonVirement->setText(QCoreApplication::translate("UIClient", "Virement", nullptr));
        pushButtonRetrait->setText(QCoreApplication::translate("UIClient", "Retrait", nullptr));
        pushButtonVersement->setText(QCoreApplication::translate("UIClient", "Versement", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonHistorique->setToolTip(QCoreApplication::translate("UIClient", "Historique de toutes vos transactions ...", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonHistorique->setText(QCoreApplication::translate("UIClient", "Historique", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("UIClient", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("UIClient", "Cancel", nullptr));
        labelCurrentTransaction->setText(QString());
        labelMontant->setText(QCoreApplication::translate("UIClient", "Montant : ", nullptr));
        labelNumeroBeneficiaire->setText(QCoreApplication::translate("UIClient", "Num\303\251ro du b\303\251n\303\251ficiaire : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIClient: public Ui_UIClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UICLIENT_H
