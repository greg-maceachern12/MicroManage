#include "messages_page.h"

MessagesPage::MessagesPage(QWidget *parent) : QWidget(parent), ui(new Ui::MessagesPage) ()
{
    ui->setupUi(this); // Sets up the .ui file GUI
    //QWidget *window = new QWidget;








    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
}
