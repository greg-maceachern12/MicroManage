#include "settings.h"

Settings::Settings(QWidget *parent) : QWidget(parent), ui(new Ui::SettingsForm) {
    ui->setupUi(this); // Sets up the .ui file GUI
    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}

QToolButton* Settings::getMenuButton() {
    return ui->menuButton;
}

Settings::~Settings() {
    delete ui;
}
