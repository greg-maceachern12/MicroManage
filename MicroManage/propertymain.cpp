#include "propertymain.h"

PropertyMain::PropertyMain(QWidget *parent) : QWidget(parent), ui(new Ui::PropertyMainForm) {
    ui->setupUi(this);

    ui->menuButton->setCheckable(true);
    ui->menuButton->setShortcut(QKeySequence("M"));
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    ui->addButton->setIcon(QIcon(":images/icons/plus_icon.png"));
    ui->addButton->setIconSize(QSize(35, 35));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}


QToolButton* PropertyMain::getMenuButton() {
    return ui->menuButton;
}


PropertyMain::~PropertyMain() {
    delete ui;
}
