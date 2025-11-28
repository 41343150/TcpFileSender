#include "topfilesender.h"
#include "ui_topfilesender.h"

TopFileSender::TopFileSender(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TopFileSender)
{
    ui->setupUi(this);
}

TopFileSender::~TopFileSender()
{
    delete ui;
}
