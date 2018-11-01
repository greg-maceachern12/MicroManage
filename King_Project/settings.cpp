#include "settings.h"

Settings::Settings(QWidget *parent) : QWidget(parent), ui(new Ui::Settings) {
    ui->setupUi(this); // Sets up the .ui file GUI
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}
