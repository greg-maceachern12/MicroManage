#include "welcome.h"

Welcome::Welcome(QWidget *parent) : QWidget(parent), ui(new Ui::WelcomeForm) {
    ui->setupUi(this);

    ui->logo_label->setPixmap(QPixmap(":images/icons/micromanage_house.png"));
    ui->logo_label->setScaledContents(true);

    ui->micromanage_label->setPixmap(QPixmap(":images/icons/micromanage_name.png"));
    ui->micromanage_label->setScaledContents(true);

    connect(ui->loginButton, SIGNAL(clicked()), parent, SLOT(openLogin()));
    connect(ui->landlordButton, SIGNAL(clicked()), parent, SLOT(openSignUpLandlord()));
    connect(ui->tenantButton, SIGNAL(clicked()), parent, SLOT(openSignUpTenant()));

}


Welcome::~Welcome() {
    delete ui;
}
