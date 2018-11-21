#include "settings_page.h"

SettingsPage::SettingsPage(QWidget *parent) : QWidget(parent), ui(new Ui::SettingsPage) {
    ui->setupUi(this); // Sets up the .ui file GUI
    //QWidget *window = new QWidget;








    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}


void SettingsPage::changeText() {

}
