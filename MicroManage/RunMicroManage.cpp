#include "micromanage.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QPixmap>
#include <QThread>



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":images/icons/micromanage_house.png"));
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":images/splash.png"));
    splash->show();
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Regular.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-MediumCn.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-MediumCnIt.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Demi.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Bold.otf");
    QFile styleFile(":css/structure.qss");

    // Keep this for testing purposes
    /*QFontDatabase db;
    for(int i=0; i<db.families().size(); i++)
    {
      qDebug() << db.families().at(i);
    }*/
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    a.setStyleSheet(styleSheet);
    MicroManage w;
    QTimer::singleShot(2500, splash, SLOT(close()));
    QTimer::singleShot(2500, &w, SLOT(show()));
    return a.exec();
}
