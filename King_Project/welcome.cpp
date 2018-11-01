#include "welcome.h"

Welcome::Welcome(QWidget *parent) : QWidget(parent), ui(new Ui::WelcomeForm) {
    ui->setupUi(this);

}


Welcome::~Welcome() {
    delete ui;
}
