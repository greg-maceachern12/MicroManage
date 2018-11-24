#include "help.h"

Help::Help(QWidget *parent) : QWidget(parent), ui(new Ui::HelpForm) {
    ui->setupUi(this);

    ui->menu_button->setCheckable(true);
    ui->menu_button->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menu_button->setIconSize(QSize(25, 25));
    connect(ui->menu_button, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}


QToolButton* Help::getMenuButton() {
    return ui->menu_button;
}


Help::~Help() {
    delete ui;
}
