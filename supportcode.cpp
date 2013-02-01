#include "supportcode.h"
#include "ui_supportcode.h"

SupportCode::SupportCode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SupportCode)
{
    ui->setupUi(this);
}

SupportCode::~SupportCode()
{
    delete ui;
}
