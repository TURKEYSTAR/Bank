/********************************************************************************
** Form generated from reading UI file 'uilistnotif.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILISTNOTIF_H
#define UI_UILISTNOTIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIListNotif
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutTitle;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayoutListview;
    QListView *listViewNotifs;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayoutSouth;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonOpen;
    QPushButton *pushButtonClose;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIListNotif)
    {
        if (UIListNotif->objectName().isEmpty())
            UIListNotif->setObjectName("UIListNotif");
        UIListNotif->resize(582, 453);
        centralwidget = new QWidget(UIListNotif);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 561, 51));
        horizontalLayoutTitle = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutTitle->setObjectName("horizontalLayoutTitle");
        horizontalLayoutTitle->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutTitle->addItem(horizontalSpacer);

        labelTitle = new QLabel(horizontalLayoutWidget);
        labelTitle->setObjectName("labelTitle");
        QFont font;
        font.setPointSize(16);
        labelTitle->setFont(font);

        horizontalLayoutTitle->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutTitle->addItem(horizontalSpacer_2);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 49, 561, 321));
        verticalLayoutListview = new QVBoxLayout(verticalLayoutWidget);
        verticalLayoutListview->setObjectName("verticalLayoutListview");
        verticalLayoutListview->setContentsMargins(0, 0, 0, 0);
        listViewNotifs = new QListView(verticalLayoutWidget);
        listViewNotifs->setObjectName("listViewNotifs");

        verticalLayoutListview->addWidget(listViewNotifs);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 370, 561, 51));
        horizontalLayoutSouth = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayoutSouth->setObjectName("horizontalLayoutSouth");
        horizontalLayoutSouth->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutSouth->addItem(horizontalSpacer_3);

        pushButtonOpen = new QPushButton(horizontalLayoutWidget_2);
        pushButtonOpen->setObjectName("pushButtonOpen");

        horizontalLayoutSouth->addWidget(pushButtonOpen);

        pushButtonClose = new QPushButton(horizontalLayoutWidget_2);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayoutSouth->addWidget(pushButtonClose);

        UIListNotif->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIListNotif);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 582, 26));
        UIListNotif->setMenuBar(menubar);
        statusbar = new QStatusBar(UIListNotif);
        statusbar->setObjectName("statusbar");
        UIListNotif->setStatusBar(statusbar);

        retranslateUi(UIListNotif);

        QMetaObject::connectSlotsByName(UIListNotif);
    } // setupUi

    void retranslateUi(QMainWindow *UIListNotif)
    {
        UIListNotif->setWindowTitle(QCoreApplication::translate("UIListNotif", "MainWindow", nullptr));
        labelTitle->setText(QCoreApplication::translate("UIListNotif", "Notifications", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("UIListNotif", "Ouvrir", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("UIListNotif", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIListNotif: public Ui_UIListNotif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILISTNOTIF_H
