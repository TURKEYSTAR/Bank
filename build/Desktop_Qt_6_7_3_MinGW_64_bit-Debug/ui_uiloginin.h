/********************************************************************************
** Form generated from reading UI file 'uiloginin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILOGININ_H
#define UI_UILOGININ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_UILoginIn
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSubmit;
    QPushButton *pushButtonExit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *imageLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UILoginIn)
    {
        if (UILoginIn->objectName().isEmpty())
            UILoginIn->setObjectName("UILoginIn");
        UILoginIn->resize(380, 150);
        UILoginIn->setMinimumSize(QSize(380, 150));
        UILoginIn->setMaximumSize(QSize(380, 150));
        centralwidget = new QWidget(UILoginIn);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(100, 10, 251, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelLogin = new QLabel(formLayoutWidget);
        labelLogin->setObjectName("labelLogin");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelLogin);

        lineEditLogin = new QLineEdit(formLayoutWidget);
        lineEditLogin->setObjectName("lineEditLogin");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        labelPassword = new QLabel(formLayoutWidget);
        labelPassword->setObjectName("labelPassword");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(formLayoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(100, 60, 251, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButtonSubmit = new QPushButton(gridLayoutWidget);
        pushButtonSubmit->setObjectName("pushButtonSubmit");

        gridLayout->addWidget(pushButtonSubmit, 0, 1, 1, 1);

        pushButtonExit = new QPushButton(gridLayoutWidget);
        pushButtonExit->setObjectName("pushButtonExit");

        gridLayout->addWidget(pushButtonExit, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(20, 20, 61, 61));
        imageLabel->setPixmap(QPixmap(QString::fromUtf8("cadenas_1.png")));
        UILoginIn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UILoginIn);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 380, 21));
        UILoginIn->setMenuBar(menubar);
        statusbar = new QStatusBar(UILoginIn);
        statusbar->setObjectName("statusbar");
        UILoginIn->setStatusBar(statusbar);

        retranslateUi(UILoginIn);

        QMetaObject::connectSlotsByName(UILoginIn);
    } // setupUi

    void retranslateUi(QMainWindow *UILoginIn)
    {
        UILoginIn->setWindowTitle(QCoreApplication::translate("UILoginIn", "Sign In", nullptr));
        labelLogin->setText(QCoreApplication::translate("UILoginIn", "Login :", nullptr));
        labelPassword->setText(QCoreApplication::translate("UILoginIn", "Password :", nullptr));
        pushButtonSubmit->setText(QCoreApplication::translate("UILoginIn", "Submit", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("UILoginIn", "Exit", nullptr));
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UILoginIn: public Ui_UILoginIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILOGININ_H
