#include "welcome.h"

Welcome::Welcome(QWidget *parent) : QWidget(parent), ui(new Ui::WelcomeForm) {
    ui->setupUi(this);

    ui->logoLabel->setPixmap(QPixmap(":images/icons/micromanage_logo.png"));
    ui->logoLabel->setScaledContents(true);

    connect(ui->loginButton, SIGNAL(clicked()), parent, SLOT(openLogin()));
    connect(ui->landlordButton, SIGNAL(clicked()), parent, SLOT(openSignUpLandlord()));
    connect(ui->tenantButton, SIGNAL(clicked()), parent, SLOT(openSignUpTenant()));

}


Welcome::~Welcome() {
    delete ui;
}
