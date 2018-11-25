#include "help.h"

Help::Help(QWidget *parent) : QWidget(parent), ui(new Ui::HelpForm) {
    ui->setupUi(this);

    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    ui->menuButton->setShortcut(QKeySequence("M"));
}


QToolButton* Help::getMenuButton() {
    return ui->menuButton;
}


Help::~Help() {
    delete ui;
}
