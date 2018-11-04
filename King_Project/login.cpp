#include "login.h"

Login::Login(QWidget *parent) : QWidget(parent), ui(new Ui::LoginForm) {
    ui->setupUi(this);
}

Login::~Login() {
    delete ui;
}
