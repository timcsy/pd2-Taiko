/****************************************************************************
** Meta object code from reading C++ file 'drum.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../drum.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drum.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Drum_t {
    QByteArrayData data[8];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Drum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Drum_t qt_meta_stringdata_Drum = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Drum"
QT_MOC_LITERAL(1, 5, 4), // "next"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 8), // "keyPress"
QT_MOC_LITERAL(4, 20, 10), // "QKeyEvent*"
QT_MOC_LITERAL(5, 31, 1), // "e"
QT_MOC_LITERAL(6, 33, 12), // "deleteResult"
QT_MOC_LITERAL(7, 46, 8) // "nextDrum"

    },
    "Drum\0next\0\0keyPress\0QKeyEvent*\0e\0"
    "deleteResult\0nextDrum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Drum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       6,    0,   38,    2, 0x0a /* Public */,
       7,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Drum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Drum *_t = static_cast<Drum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->next(); break;
        case 1: { int _r = _t->keyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->deleteResult(); break;
        case 3: _t->nextDrum(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Drum::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Drum::next)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Drum::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Drum.data,
      qt_meta_data_Drum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Drum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Drum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Drum.stringdata0))
        return static_cast<void*>(const_cast< Drum*>(this));
    return QWidget::qt_metacast(_clname);
}

int Drum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Drum::next()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_RedSmallDrum_t {
    QByteArrayData data[5];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RedSmallDrum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RedSmallDrum_t qt_meta_stringdata_RedSmallDrum = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RedSmallDrum"
QT_MOC_LITERAL(1, 13, 8), // "keyPress"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 34, 1) // "e"

    },
    "RedSmallDrum\0keyPress\0\0QKeyEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RedSmallDrum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    4,

       0        // eod
};

void RedSmallDrum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RedSmallDrum *_t = static_cast<RedSmallDrum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->keyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject RedSmallDrum::staticMetaObject = {
    { &Drum::staticMetaObject, qt_meta_stringdata_RedSmallDrum.data,
      qt_meta_data_RedSmallDrum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RedSmallDrum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedSmallDrum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RedSmallDrum.stringdata0))
        return static_cast<void*>(const_cast< RedSmallDrum*>(this));
    return Drum::qt_metacast(_clname);
}

int RedSmallDrum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Drum::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BlueSmallDrum_t {
    QByteArrayData data[5];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlueSmallDrum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlueSmallDrum_t qt_meta_stringdata_BlueSmallDrum = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BlueSmallDrum"
QT_MOC_LITERAL(1, 14, 8), // "keyPress"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 35, 1) // "e"

    },
    "BlueSmallDrum\0keyPress\0\0QKeyEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlueSmallDrum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    4,

       0        // eod
};

void BlueSmallDrum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlueSmallDrum *_t = static_cast<BlueSmallDrum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->keyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject BlueSmallDrum::staticMetaObject = {
    { &Drum::staticMetaObject, qt_meta_stringdata_BlueSmallDrum.data,
      qt_meta_data_BlueSmallDrum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BlueSmallDrum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlueSmallDrum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BlueSmallDrum.stringdata0))
        return static_cast<void*>(const_cast< BlueSmallDrum*>(this));
    return Drum::qt_metacast(_clname);
}

int BlueSmallDrum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Drum::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_RedBigDrum_t {
    QByteArrayData data[5];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RedBigDrum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RedBigDrum_t qt_meta_stringdata_RedBigDrum = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RedBigDrum"
QT_MOC_LITERAL(1, 11, 8), // "keyPress"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 32, 1) // "e"

    },
    "RedBigDrum\0keyPress\0\0QKeyEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RedBigDrum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    4,

       0        // eod
};

void RedBigDrum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RedBigDrum *_t = static_cast<RedBigDrum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->keyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject RedBigDrum::staticMetaObject = {
    { &Drum::staticMetaObject, qt_meta_stringdata_RedBigDrum.data,
      qt_meta_data_RedBigDrum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RedBigDrum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedBigDrum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RedBigDrum.stringdata0))
        return static_cast<void*>(const_cast< RedBigDrum*>(this));
    return Drum::qt_metacast(_clname);
}

int RedBigDrum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Drum::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BlueBigDrum_t {
    QByteArrayData data[5];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlueBigDrum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlueBigDrum_t qt_meta_stringdata_BlueBigDrum = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BlueBigDrum"
QT_MOC_LITERAL(1, 12, 8), // "keyPress"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 33, 1) // "e"

    },
    "BlueBigDrum\0keyPress\0\0QKeyEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlueBigDrum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    4,

       0        // eod
};

void BlueBigDrum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlueBigDrum *_t = static_cast<BlueBigDrum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->keyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject BlueBigDrum::staticMetaObject = {
    { &Drum::staticMetaObject, qt_meta_stringdata_BlueBigDrum.data,
      qt_meta_data_BlueBigDrum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BlueBigDrum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlueBigDrum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BlueBigDrum.stringdata0))
        return static_cast<void*>(const_cast< BlueBigDrum*>(this));
    return Drum::qt_metacast(_clname);
}

int BlueBigDrum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Drum::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
