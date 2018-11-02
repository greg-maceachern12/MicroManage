#include "profile.h"

Profile::Profile(QWidget *parent) :QWidget(parent),ui(new Ui::ProfileForm) {
    ui->setupUi(this);
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}


Profile::~Profile()
{
    delete ui;
}
