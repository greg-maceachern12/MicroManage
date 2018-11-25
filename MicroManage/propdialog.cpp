#include "propdialog.h"
#include "ui_propdialogform.h"
#include "propertymain.h"

propDialog::propDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::propDialog)
{
    ui->setupUi(this);

    connect(ui->ok, SIGNAL(clicked()), this, SLOT(notifyParent()));
    connect(ui->ok, SIGNAL(clicked()), this, SLOT(onOKClicked()));
    connect(ui->cancel, SIGNAL(clicked()), this, SLOT(onCancelClicked()));
}


void propDialog::onCancelClicked(){
    propDialog::reject();
}

void propDialog::onOKClicked(){
    propDialog::reject();
}

void propDialog::notifyParent(){
    emit setUp(ui->addEdit->toPlainText(), ui->numEdit->toPlainText());
}

propDialog::~propDialog()
{
    delete ui;
}
