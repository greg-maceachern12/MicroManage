/****************************************************************************
** Meta object code from reading C++ file 'micromanage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MicroManage/micromanage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'micromanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MicroManage_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MicroManage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MicroManage_t qt_meta_stringdata_MicroManage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MicroManage"
QT_MOC_LITERAL(1, 12, 9), // "checkPage"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "showSideMenu"
QT_MOC_LITERAL(4, 36, 11), // "openWelcome"
QT_MOC_LITERAL(5, 48, 12), // "openMainPage"
QT_MOC_LITERAL(6, 61, 12), // "openSettings"
QT_MOC_LITERAL(7, 74, 18), // "openSignUpLandlord"
QT_MOC_LITERAL(8, 93, 16), // "openSignUpTenant"
QT_MOC_LITERAL(9, 110, 12), // "openMessages"
QT_MOC_LITERAL(10, 123, 11), // "openProfile"
QT_MOC_LITERAL(11, 135, 14), // "openProperties"
QT_MOC_LITERAL(12, 150, 9), // "openLogin"
QT_MOC_LITERAL(13, 160, 15), // "openMaintenance"
QT_MOC_LITERAL(14, 176, 11), // "openNotices"
QT_MOC_LITERAL(15, 188, 8) // "openHelp"

    },
    "MicroManage\0checkPage\0\0showSideMenu\0"
    "openWelcome\0openMainPage\0openSettings\0"
    "openSignUpLandlord\0openSignUpTenant\0"
    "openMessages\0openProfile\0openProperties\0"
    "openLogin\0openMaintenance\0openNotices\0"
    "openHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MicroManage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       3,    0,   87,    2, 0x0a /* Public */,
       4,    0,   88,    2, 0x0a /* Public */,
       5,    0,   89,    2, 0x0a /* Public */,
       6,    0,   90,    2, 0x0a /* Public */,
       7,    0,   91,    2, 0x0a /* Public */,
       8,    0,   92,    2, 0x0a /* Public */,
       9,    0,   93,    2, 0x0a /* Public */,
      10,    0,   94,    2, 0x0a /* Public */,
      11,    0,   95,    2, 0x0a /* Public */,
      12,    0,   96,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x0a /* Public */,
      14,    0,   98,    2, 0x0a /* Public */,
      15,    0,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MicroManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MicroManage *_t = static_cast<MicroManage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->showSideMenu(); break;
        case 2: _t->openWelcome(); break;
        case 3: _t->openMainPage(); break;
        case 4: _t->openSettings(); break;
        case 5: _t->openSignUpLandlord(); break;
        case 6: _t->openSignUpTenant(); break;
        case 7: _t->openMessages(); break;
        case 8: _t->openProfile(); break;
        case 9: _t->openProperties(); break;
        case 10: _t->openLogin(); break;
        case 11: _t->openMaintenance(); break;
        case 12: _t->openNotices(); break;
        case 13: _t->openHelp(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MicroManage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MicroManage.data,
      qt_meta_data_MicroManage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MicroManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MicroManage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MicroManage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MicroManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
