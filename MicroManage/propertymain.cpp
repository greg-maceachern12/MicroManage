#include "propertymain.h"

PropertyMain::PropertyMain(QWidget *parent) : QWidget(parent), ui(new Ui::PropertyMainForm) {
    ui->setupUi(this);

    ui->menu_button->setCheckable(true);
    ui->menu_button->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menu_button->setIconSize(QSize(25, 25));
    ui->add_button->setIcon(QIcon(":images/icons/plus_icon.png"));
    ui->add_button->setIconSize(QSize(45, 45));
    connect(ui->menu_button, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}


QToolButton* PropertyMain::getMenuButton() {
    return ui->menu_button;
}


PropertyMain::~PropertyMain() {
    delete ui;
}
