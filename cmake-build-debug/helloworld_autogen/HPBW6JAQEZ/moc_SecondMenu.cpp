/****************************************************************************
** Meta object code from reading C++ file 'SecondMenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Second_Menu/SecondMenu.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SecondMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SecondMenu_t {
    const uint offsetsAndSize[18];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SecondMenu_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SecondMenu_t qt_meta_stringdata_SecondMenu = {
    {
QT_MOC_LITERAL(0, 10), // "SecondMenu"
QT_MOC_LITERAL(11, 24), // "start_html_administrator"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 15), // "start_html_user"
QT_MOC_LITERAL(53, 23), // "start_csv_administrator"
QT_MOC_LITERAL(77, 14), // "start_csv_user"
QT_MOC_LITERAL(92, 13), // "delete_widget"
QT_MOC_LITERAL(106, 8), // "QWidget*"
QT_MOC_LITERAL(115, 6) // "widget"

    },
    "SecondMenu\0start_html_administrator\0"
    "\0start_html_user\0start_csv_administrator\0"
    "start_csv_user\0delete_widget\0QWidget*\0"
    "widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecondMenu[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    0 /* Public */,
       3,    0,   45,    2, 0x0a,    1 /* Public */,
       4,    0,   46,    2, 0x0a,    2 /* Public */,
       5,    0,   47,    2, 0x0a,    3 /* Public */,
       6,    1,   48,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void SecondMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecondMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start_html_administrator(); break;
        case 1: _t->start_html_user(); break;
        case 2: _t->start_csv_administrator(); break;
        case 3: _t->start_csv_user(); break;
        case 4: _t->delete_widget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject SecondMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SecondMenu.offsetsAndSize,
    qt_meta_data_SecondMenu,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SecondMenu_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>


>,
    nullptr
} };


const QMetaObject *SecondMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecondMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecondMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SecondMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
