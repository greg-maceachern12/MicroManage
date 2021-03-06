#ifndef DBMODEL_H_
#define DBMODEL_H_

#pragma once
#include <QtWidgets>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileInfo>
#include <QDebug>
namespace dbmodel {
    static QSqlDatabase myDb;
    extern QString username;
}

#endif
