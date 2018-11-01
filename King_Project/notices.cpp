#include "notices.h"

Notices::Notices(QWidget *parent) : QWidget(parent), ui(new Ui::NoticesForm)
{
    ui->setupUi(this);
}

Notices::~Notices()
{
    delete ui;
}
