/****************************************************************************
** Meta object code from reading C++ file 'paintexam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PaintApp/C++/paintexam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintexam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PaintExam_t {
    QByteArrayData data[12];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintExam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintExam_t qt_meta_stringdata_PaintExam = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PaintExam"
QT_MOC_LITERAL(1, 10, 10), // "startPoint"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "x"
QT_MOC_LITERAL(4, 24, 1), // "y"
QT_MOC_LITERAL(5, 26, 9), // "movePoint"
QT_MOC_LITERAL(6, 36, 11), // "movingPoint"
QT_MOC_LITERAL(7, 48, 8), // "endPoint"
QT_MOC_LITERAL(8, 57, 10), // "radiusEdit"
QT_MOC_LITERAL(9, 68, 6), // "radius"
QT_MOC_LITERAL(10, 75, 5), // "color"
QT_MOC_LITERAL(11, 81, 8) // "toolMode"

    },
    "PaintExam\0startPoint\0\0x\0y\0movePoint\0"
    "movingPoint\0endPoint\0radiusEdit\0radius\0"
    "color\0toolMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintExam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x02 /* Public */,
       5,    2,   44,    2, 0x02 /* Public */,
       6,    2,   49,    2, 0x02 /* Public */,
       7,    2,   54,    2, 0x02 /* Public */,
       8,    1,   59,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::Int, 0x00095103,

       0        // eod
};

void PaintExam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaintExam *_t = static_cast<PaintExam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startPoint((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 1: _t->movePoint((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 2: _t->movingPoint((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 3: _t->endPoint((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 4: _t->radiusEdit((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PaintExam *_t = static_cast<PaintExam *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->toolMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PaintExam *_t = static_cast<PaintExam *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setToolMode(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PaintExam::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_PaintExam.data,
      qt_meta_data_PaintExam,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PaintExam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintExam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaintExam.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int PaintExam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
