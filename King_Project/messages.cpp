#include "messages.h"

Messages::Messages(QWidget *parent) : QWidget(parent), ui(new Ui::Messages) ()
{
    ui->setupUi(this);
    ui->category->addItem("Sent");
    ui->category->addItem("Received");
}
