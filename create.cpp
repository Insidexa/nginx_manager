#include "create.h"
#include "ui_create.h"

create::create(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::create)
{
    ui->setupUi(this);
}

create::~create()
{
    delete ui;
}
