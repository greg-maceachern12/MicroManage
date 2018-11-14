#include "maintenance.h"

Maintenance::Maintenance(QWidget *parent) : QWidget(parent), ui(new Ui::MaintenanceForm) {
    ui->setupUi(this);

    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

}

QToolButton* Maintenance::getMenuButton() {
    return ui->menuButton;
}

Maintenance::~Maintenance() {
    delete ui;
}
