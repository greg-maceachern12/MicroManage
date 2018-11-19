#include "micromanage.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Regular.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-MediumCn.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-MediumCnIt.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Demi.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Bold.otf");
    QFile styleFile(":css/structure.qss");

    /*QFontDatabase db;
    for(int i=0; i<db.families().size(); i++)
    {
      qDebug() << db.families().at(i);
    }*/
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    a.setStyleSheet(styleSheet);
    MicroManage w;
    w.show();

    return a.exec();
}
