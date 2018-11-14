#include "welcome.h"

Welcome::Welcome(QWidget *parent) : QWidget(parent), ui(new Ui::WelcomeForm) {
    ui->setupUi(this);

    connect(ui->loginButton, SIGNAL(clicked()), parent, SLOT(openLogin()));

}


Welcome::~Welcome() {
    delete ui;
}
