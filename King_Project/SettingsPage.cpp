#include "settings_page.h"

SettingsPage::SettingsPage(QWidget *parent) : QWidget(parent), ui(new Ui::SettingsPage) {
    ui->setupUi(this); // Sets up the .ui file GUI

    ui->pushButton->setText("Change page");
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->pushButton, SIGNAL(clicked()), parent, SLOT(changePage()));
    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(changeText()));
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}


void SettingsPage::changeText() {
    ui->pushButton->setText("YES");
}
