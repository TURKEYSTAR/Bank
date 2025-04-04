#include "uilisttransaction.h"
#include "ui_uilisttransaction.h"
#include <QDate>
#include <QDateEdit>
#include <QInputDialog>
#include <QMessageBox>

UIListTransaction::UIListTransaction(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIListTransaction)
{
    ui->setupUi(this);
}

UIListTransaction::UIListTransaction(QObject* controller) :
    ui(new Ui::UIListTransaction)
{
    qDebug("Contruction/Initialisation de la fenêtre UIListTransaction ...");
    ui->setupUi(this);

    connect(ui->pushButtonClose, SIGNAL(clicked()), controller, SLOT(onClose_UIListTransaction()));
    connect(ui->pushButtonFiltrer, SIGNAL(clicked()), this, SLOT(onFiltrerClicked()));




}

void UIListTransaction::setTableViewModel(TransactionModel* transactionModel)
{
    ui->tableViewTransactions->setModel(dynamic_cast<QAbstractItemModel*> (transactionModel));
    ui->tableViewTransactions->setSelectionModel(transactionModel->getSelectionModel());

    ui->tableViewTransactions->show();
}

void UIListTransaction::top()
{
    ui->tableViewTransactions->setCurrentIndex(ui->tableViewTransactions->model()->index(0, 0));
}

void UIListTransaction::updateTitle(QString suite)
{
    this->setWindowTitle("Historique des transactions de : " + suite);
}

void UIListTransaction::updateTitle(QString suite, QString transactionTitle)
{
    updateTitle(suite);
    ui->labelTitle->setText(transactionTitle);
}

void UIListTransaction::onFiltrerClicked()
{
    QString selectedFilter = ui->comboBoxType->currentText(); // "Type", "Date", or "Balance"

    TransactionModel* model = dynamic_cast<TransactionModel*>(ui->tableViewTransactions->model());
    if (!model) return;

    if (selectedFilter == "Type") {
        QString transactionType = QInputDialog::getItem(
            this,
            "Filter by Type",
            "Select transaction type:",
            QStringList() << "Versement" << "Retrait" << "Virement",
            0,
            false
            );
        if (!transactionType.isEmpty()) {
            model->filtrerTransactions(transactionType, "", false);
        }
    }
    else if (selectedFilter == "Date") {
        // Use QDateEdit or a simple QInputDialog with text validation
        bool ok;
        QString dateStr = QInputDialog::getText(
            this,
            "Filter by Date",
            "Enter date (YYYY-MM-DD):",
            QLineEdit::Normal,
            QDate::currentDate().toString("yyyy-MM-dd"),
            &ok
            );

        if (ok && !dateStr.isEmpty()) {
            QDate date = QDate::fromString(dateStr, "yyyy-MM-dd");
            if (date.isValid()) {
                model->filtrerTransactions("Tous", dateStr, false);
            } else {
                QMessageBox::warning(this, "Invalid Date", "Please enter a valid date in YYYY-MM-DD format.");
            }
        }
    }
    else if (selectedFilter == "Balance") {
        model->filtrerTransactions("Tous", "", true); // Sort by balance ascending
    }
}
UIListTransaction::~UIListTransaction()
{
    delete ui;
}
