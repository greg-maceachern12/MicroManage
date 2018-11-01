#include "mainpage.h"

MainPage::MainPage(QWidget *parent, QString user_name, int user_role) : QWidget(parent), ui(new Ui::MainPageForm) {
    ui->setupUi(this); // Sets up the .ui file GUI


    userName = user_name;
    userRole = user_role;

    ui->menuButton->setCheckable(true);
    ui->menuButton->setText("Menu");
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

    // Set welcome message
    ui->welcomeLabel->setText(ui->welcomeLabel->text() + userName);

    // Set up buttons with icons and texts in grid layout
    QToolButton *profile_button = new QToolButton();
    profile_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    profile_button->setText("My Profile");
    //profile_button->setIcon()
    //connect(profile_button, SIGNAL(clicked()), parent, SLOT(changePage(5)));
    //int i(1);
    connect(profile_button, &QToolButton::clicked, [this] { handleButtonClick(1);} );


    QToolButton *second_button = new QToolButton();
    second_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    if (userRole == 0) {
        second_button->setText("My Properties");
        //connect(second_button, SIGNAL(clicked()), parent, SLOT(changePage(6)));
    }
    else if (userRole == 1) {
        second_button->setText("My Landlord");
        //connect(second_button, SIGNAL(clicked()), parent, SLOT(changePage(6)));
    }

    QToolButton *notices_button = new QToolButton();
    notices_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    notices_button->setText("Notices");
    //connect(notices_button, SIGNAL(clicked()), parent, SLOT(changePage(7)));

    QToolButton *maintenance_button = new QToolButton();
    maintenance_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    maintenance_button->setText("Maintenance");
    //connect(maintenance_button, SIGNAL(clicked()), parent, SLOT(changePage(8)));

    QToolButton *messages_button = new QToolButton();
    messages_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    messages_button->setText("Messages");
    //connect(messages_button, SIGNAL(clicked()), parent, SLOT(changePage(9)));

    QToolButton *settings_button = new QToolButton();
    settings_button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    settings_button->setText("Settings");
    //connect(settings_button, SIGNAL(clicked()), parent, SLOT(changePage(10)));


    ui->gridLayout->addWidget(profile_button, 0, 0);
    ui->gridLayout->addWidget(second_button, 0, 1);
    ui->gridLayout->addWidget(notices_button, 0, 2);
    ui->gridLayout->addWidget(maintenance_button, 1, 0);
    ui->gridLayout->addWidget(messages_button, 1, 1);
    ui->gridLayout->addWidget(settings_button, 1, 2);
}


void MainPage::handleButtonClick(int index) {
    //this->parentWidget()->changePage(index);
}
