#include "uidashboard.h"
#include "ui_uidashboard.h"
#include <QTimer>
#include <QDebug>

UIDashboard::UIDashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIDashboard)
{
    ui->setupUi(this);
    refreshTimer = new QTimer(this);
}

UIDashboard::UIDashboard(QObject* controller) :
    ui(new Ui::UIDashboard)
{
    qDebug("Contruction/Initialisation de la fenêtre UIDashboard ...");
    ui->setupUi(this);
    refreshTimer = new QTimer(this);

    //initialize();

    connect(ui->pushButtonFermer, SIGNAL(clicked()), controller, SLOT(onFermerClicked_UIDashboard()));
    connect(ui->pushButtonActiver_2, SIGNAL(clicked()), controller, SLOT(onActiverClicked()));
    connect(ui->pushButtonDesactiver, SIGNAL(clicked()), controller, SLOT(onDesactiverClicked()));
}

UIDashboard::~UIDashboard()
{
    delete ui;
}

void UIDashboard::setModel(DashboardModel* dashboardModel)
{
    model = dashboardModel;
    if(model) {
        initialize();
    }
}

void UIDashboard::initialize()
{
    if (!model) {
        qWarning() << "Dashboard model is not set!";
        return;
    }

    loadDashboardData();
    setupConnections();
    refreshTimer->start(30000);
}


void UIDashboard::setupConnections()
{
    if (ui->tableViewAccounts->selectionModel()) {
        connect(ui->tableViewAccounts->selectionModel(), &QItemSelectionModel::currentRowChanged,
                this, &UIDashboard::onAccountSelected);
    } else {
        qWarning() << "Selection model not available when setting up connections";
    }

    connect(refreshTimer, &QTimer::timeout, this, &UIDashboard::refreshDashboard);
}

void UIDashboard::loadDashboardData()
{
    ui->labelClientsValue->setText(QString::number(model->getTotalClients()));
    ui->labelTransactionsValue->setText(QString::number(model->getTotalTransactions()));
    ui->labelBalanceValue->setText(QString::number(model->getTotalBalance(), 'f', 2));

    QSqlQueryModel *transactionsModel = model->getRecentTransactionsModel();
    ui->tableViewRecentTransactions->setModel(transactionsModel);
    ui->tableViewRecentTransactions->resizeColumnsToContents();

    QSqlQueryModel *accountsModel = model->getAccountsSummaryModel();
    ui->tableViewAccounts->setModel(accountsModel);
    ui->tableViewAccounts->resizeColumnsToContents();

    if (accountsModel->rowCount() > 0) {
        ui->tableViewAccounts->selectRow(0);
        // Force initial selection update
        QModelIndex firstIndex = accountsModel->index(0, 0);
        onAccountSelected(firstIndex);
    }
}

void UIDashboard::onAccountSelected(const QModelIndex &index)
{
    if (!index.isValid()) {
        qDebug() << "Invalid account selection";
        return;
    }

    int accountId = index.sibling(index.row(), 0).data().toInt();
    qDebug() << "Selected account ID:" << accountId;

    QSqlQueryModel *accountTransactionsModel = model->getAccountTransactionsModel(accountId);
    if (accountTransactionsModel->rowCount() == 0) {
        qDebug() << "No transactions found for account" << accountId;
    }
}

void UIDashboard::refreshDashboard()
{
    qDebug() << "Refreshing dashboard data...";
    loadDashboardData();
}


void UIDashboard::updateNotificationButtons()
{
    bool enabled = model->areNotificationsEnabled();
    ui->pushButtonActiver_2->setEnabled(!enabled);
    ui->pushButtonDesactiver->setEnabled(enabled);
}

