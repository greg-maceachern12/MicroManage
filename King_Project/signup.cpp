#include "signup.h"

SignUp::SignUp(QWidget *parent) : QWidget(parent), ui(new Ui::SignUp) {
    ui->setupUi(this); // Sets up the .ui file GUI
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

}
