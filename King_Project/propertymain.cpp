#include "propertymain.h"

PropertyMain::PropertyMain(QWidget *parent) : QWidget(parent), ui(new Ui::PropertyMainForm) {
    ui->setupUi(this);
}


PropertyMain::~PropertyMain() {
    delete ui;
}
