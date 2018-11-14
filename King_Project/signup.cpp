#include "signup.h"

SignUp::SignUp(QWidget *parent) : QWidget(parent), ui(new Ui::SignUpForm) {
    ui->setupUi(this); // Sets up the .ui file GUI
    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));


}

QToolButton* SignUp::getMenuButton() {
    return ui->menuButton;
}

SignUp::~SignUp() {
    delete ui;
}
