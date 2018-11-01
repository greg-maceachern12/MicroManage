#include "maintenance.h"

Maintenance::Maintenance(QWidget *parent) : QWidget(parent), ui(new Ui::MaintenanceForm) {
    ui->setupUi(this);

}


Maintenance::~Maintenance() {
    delete ui;
}
