#include "uimessages.h"
#include "ui_uimessages.h"

Uimessages::Uimessages(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Uimessages)
{
    ui->setupUi(this);
}

Uimessages::~Uimessages()
{
    delete ui;
}
