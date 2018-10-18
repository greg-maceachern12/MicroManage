#include "settings_page.h"

SettingsPage::SettingsPage(QWidget *parent) : QWidget(parent), ui(new Ui::SettingsPage) {
    ui->setupUi(this); // Sets up the .ui file GUI
    //QWidget *window = new QWidget;
    QPushButton *button1 = new QPushButton("One");
        QPushButton *button2 = new QPushButton("Two");
        QPushButton *button3 = new QPushButton("Three");
        QPushButton *button4 = new QPushButton("Four");
        QPushButton *button5 = new QPushButton("Five");


        ui->verticalLayout->addWidget(button1);
        ui->verticalLayout->addWidget(button2);
        ui->verticalLayout->addWidget(button3);
        ui->verticalLayout->addWidget(button4);
        ui->verticalLayout->addWidget(button5);







    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}


void SettingsPage::changeText() {

}
