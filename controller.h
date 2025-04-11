#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QInputDialog>
#include <QDir>

#include "service.h"
#include "uiloginin.h"
#include "uiuser.h"
#include "uilistuser.h"
#include "uilistclient.h"
#include "uilistaccount.h"
#include "ui_uilisttransaction.h"
#include "uilisttransaction.h"
#include "uiclient.h"
#include "uilistnotif.h"
#include "uiaccount.h"
#include "uidashboard.h"

class Controller : public QObject
{
    Q_OBJECT

private:
    UILoginIn uiLoginIn {this};
    UIUser uiUser {this};
    UIListUser uiListUser {this};
    UIListClient uiListClient {this};
    UIListAccount uiListAccount {this};
    UIClient uiClient {this};
    UIListTransaction uiListTransaction {this};
    UIAccount uiAccount {this};
    UIListNotif uiListNotif {this};
    UIDashboard uiDashboard {this};


    Role connectedUserType;
    User connectedUser;

    UserModel* userModel = new UserModel;
    AccountModel* accountModel = new AccountModel;
    TransactionModel* transactionModel = new TransactionModel;
    NotificationModel* notificationModel = new NotificationModel;
    DashboardModel* dashboardModel = new DashboardModel;

    Service service {userModel, accountModel, transactionModel};

public:
    explicit Controller(QObject* parent = nullptr);
    ~Controller();
    void execute();

private slots:
    /* Les slots de la fenêtre UIListUser
     *
     */
    void onUpdate_UIListUser();
    void onDelete_UIListUser();
    void onClose_UIListUser();
    void onComboBoxRoleChanged_UIUser();
    void onDashboard_UIUser();

    /*
     * Les slots de la fenêtre UIDashboard
     */
    void onActiverClicked();
    void onDesactiverClicked();

    /*
     * Les slots de la fenêtre UIUser
     */
    void onCreate_UIUser();
    void onFind_UIUser();
    void onUpdate_UIUser();
    void onList_UIUser();
    void onClose_UIUser();

    /*
     * Les slots de la fenêtre UILoginIn
     */
    void onSubmit_UILoginIn();
    void onExit_UILoginIn();

    /*
     * Les slots de la fenêtre UIClient
     */
    void onClose_UIClient();
    void onOuvrir_UIClient();
    void onVirement_UIClient();
    void onRetrait_UIClient();
    void onVersement_UIClient();
    void onHistorique_UIClient();
    void onOK_UIClient();
    void onCancel_UIClient();
    void onProfile_UIClient();
    void onNotif_UIClient();

    /*
     * Les slots de la fenêtre UIListClient
     */
    void onClose_UIListClient();
    void onOuvrir_UIListClient();

    /*
     * Les slots de la fenêtre UIListAccount
     */
    void onNouveau_UIListAccount();
    void onModifier_UIListAccount();
    void onOuvrir_UIListAccount();
    void onClose_UIListAccount();
    void onGeler_UIListAccount();
    void onActiver_UIListAccount();

    /*
     * Les slots de la fenêtre UIListTransaction
     */
    void onClose_UIListTransaction();
    void onFiltrerClicked();
    void onValiderClicked();
    void onRejeterClicked();

    /*
     * Les slots de la fenêtre UIListNotif
     */
    void onClose_UIListNotif();
    void onOuvrir_UIListNotif();

    /*
     * Les slots de la fenêtre UIAccount
     */
    void onCreate_UIAccount();
    void onUpdate_UIAccount();
    void onClose_UIAccount();
};
#endif // CONTROLLER_H

