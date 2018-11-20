#include "notices.h"

Notices::Notices(QWidget *parent) : QWidget(parent), ui(new Ui::NoticesForm) {
    ui->setupUi(this);

    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

    ui->addButton->setIcon(QIcon(":images/icons/plus_icon.png"));
    ui->addButton->setIconSize(QSize(45, 45));

}


QToolButton* Notices::getMenuButton() {
    return ui->menuButton;
}


Notices::~Notices() {
    delete ui;
}
