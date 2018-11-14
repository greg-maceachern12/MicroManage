#include "messages.h"

Messages::Messages(QWidget *parent) : QWidget(parent), ui(new Ui::MessagesForm) {
    ui->setupUi(this);
    ui->category->addItem("Sent");
    ui->category->addItem("Received");
    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));


}

QToolButton* Messages::getMenuButton() {
    return ui->menuButton;
}

Messages::~Messages() {
    delete ui;
}
