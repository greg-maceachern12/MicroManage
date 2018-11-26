#include "propdialog.h"
#include "ui_propdialogform.h"
#include "propertymain.h"

propDialog::propDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::propDialog)
{
    ui->setupUi(this);
    setWindowTitle("Add Property");

    connect(ui->ok, SIGNAL(clicked()), this, SLOT(notifyParent()));
    connect(ui->ok, SIGNAL(clicked()), this, SLOT(onOKClicked()));
    connect(ui->cancel, SIGNAL(clicked()), this, SLOT(onCancelClicked()));
    ui->numEdit->setValidator(new QIntValidator(0, 1000, this));
    ui->addEdit->setPlaceholderText("Address\nCity\nPostal Code");
}


void propDialog::onCancelClicked(){
    propDialog::reject();
}

void propDialog::onOKClicked(){
    propDialog::reject();
}

void propDialog::notifyParent(){
    emit setUp(ui->addEdit->toPlainText(), ui->numEdit->text());
}

propDialog::~propDialog()
{
    delete ui;
}
