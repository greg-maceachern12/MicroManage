#include "help.h"

Help::Help(QWidget *parent) : QWidget(parent), ui(new Ui::HelpForm)
{
    ui->setupUi(this);
}

Help::~Help()
{
    delete ui;
}
