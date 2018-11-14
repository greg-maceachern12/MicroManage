#include "welcome.h"

Welcome::Welcome(QWidget *parent) : QWidget(parent), ui(new Ui::WelcomeForm) {
    ui->setupUi(this);

    connect(ui->loginButton, SIGNAL(clicked()), parent, SLOT(openLogin()));
    connect(ui->landlordButton, SIGNAL(clicked()), parent, SLOT(openSignUp()));
    connect(ui->tenantButton, SIGNAL(clicked()), parent, SLOT(openSignUp()));

}


Welcome::~Welcome() {
    delete ui;
}
