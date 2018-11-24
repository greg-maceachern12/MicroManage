#include "settings.h"
#include <QDesktopServices>
#include <QUrl>


Settings::Settings(QWidget *parent) : QWidget(parent), ui(new Ui::SettingsForm) {
    ui->setupUi(this); // Sets up the .ui file GUI
    ui->menu_button->setCheckable(true);
    ui->menu_button->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menu_button->setIconSize(QSize(25, 25));
    connect(ui->menu_button, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->question_button, SIGNAL(clicked()), this, SLOT(emailLink()));
}


QToolButton* Settings::getMenuButton() {
    return ui->menu_button;
}


void Settings::emailLink(){
    QDesktopServices::openUrl(QUrl("mailto:15xc16@queensu.ca"));
}


Settings::~Settings() {
    delete ui;
}
