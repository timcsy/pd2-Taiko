/****************************************************************************
** Meta object code from reading C++ file 'drumset.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../drumset.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drumset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DrumSet_t {
    QByteArrayData data[9];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrumSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrumSet_t qt_meta_stringdata_DrumSet = {
    {
QT_MOC_LITERAL(0, 0, 7), // "DrumSet"
QT_MOC_LITERAL(1, 8, 5), // "start"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "next"
QT_MOC_LITERAL(4, 20, 9), // "nextFront"
QT_MOC_LITERAL(5, 30, 13), // "keyPressEvent"
QT_MOC_LITERAL(6, 44, 10), // "QKeyEvent*"
QT_MOC_LITERAL(7, 55, 1), // "e"
QT_MOC_LITERAL(8, 57, 10) // "changeTime"

    },
    "DrumSet\0start\0\0next\0nextFront\0"
    "keyPressEvent\0QKeyEvent*\0e\0changeTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrumSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       8,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void DrumSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrumSet *_t = static_cast<DrumSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->next(); break;
        case 2: _t->nextFront(); break;
        case 3: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 4: _t->changeTime(); break;
        default: ;
        }
    }
}

const QMetaObject DrumSet::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DrumSet.data,
      qt_meta_data_DrumSet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DrumSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrumSet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DrumSet.stringdata0))
        return static_cast<void*>(const_cast< DrumSet*>(this));
    return QWidget::qt_metacast(_clname);
}

int DrumSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
