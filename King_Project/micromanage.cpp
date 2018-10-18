#include "micromanage.h"

MicroManage::MicroManage(QWidget *parent) : QMainWindow(parent), ui(new Ui::MicroManage) {
    ui->setupUi(this); // Sets up the .ui file GUI

    // IMPORTANT: This initializes your Qt attributes for this class
    sideMenu = new QDockWidget("Menu", this);
    stackedWidget = new QStackedWidget;
    mainPage = new MainPage(this);
    settingsPage = new SettingsPage(this);

    sideMenu->setAllowedAreas(Qt::LeftDockWidgetArea);
    sideMenu->setFeatures(QDockWidget::NoDockWidgetFeatures);
    sideMenu->setVisible(false);
    sideMenu->toggleViewAction()->setVisible(false); // This hides the action so you don't see it when you RMB-click on the QDockWidget

    QPushButton *temp = new QPushButton;
    temp->setText("Side menu");

    sideMenu->setWidget(temp);
    addDockWidget(Qt::LeftDockWidgetArea, sideMenu);

    stackedWidget->addWidget(mainPage);
    QLineEdit *line = new QLineEdit;
    line->setText("Hello! You're on the second page, which shows the other widget. This would be your custom widget.");
    stackedWidget->addWidget(settingsPage); // Adds another page to the stack with this widget
    setCentralWidget(stackedWidget); //

}

void MicroManage::createInterface() {
    // WIP

}

void MicroManage::showSideMenu() {
    /* Toggles the side menu */
    sideMenu->setVisible(!sideMenu->isVisible()); // If it's visible, it hides it; if it's already hidden, it shows it
    repaint(); // Forces the repaint so the menu opens and closes without glitch
}

void MicroManage::changePage(){
    /* This is just rough so you get an idea of how this could work */
    stackedWidget->setCurrentIndex(1); // Should change it to the second page with the line edit
}



/*MicroManage::~MicroManage() Probably don't need this
{
    delete ui;
}*/


