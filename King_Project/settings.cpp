#include "settings.h"
#include <QDesktopServices>
#include <QUrl>


Settings::Settings(QWidget *parent) : QWidget(parent), ui(new Ui::SettingsForm) {
    ui->setupUi(this); // Sets up the .ui file GUI
    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->questionButton, SIGNAL(clicked()), this, SLOT(emailLink()));
}

QToolButton* Settings::getMenuButton() {
    return ui->menuButton;
}

void Settings::emailLink(){
    QDesktopServices::openUrl(QUrl("mailto:15xc16@queensu.ca"));
}

Settings::~Settings() {
    delete ui;
}
