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
    QByteArrayData data[22];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintExam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintExam_t qt_meta_stringdata_PaintExam = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PaintExam"
QT_MOC_LITERAL(1, 10, 10), // "someSignal"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "text"
QT_MOC_LITERAL(4, 27, 12), // "colorChanged"
QT_MOC_LITERAL(5, 40, 12), // "widthChanged"
QT_MOC_LITERAL(6, 53, 13), // "heightChanged"
QT_MOC_LITERAL(7, 67, 8), // "xChanged"
QT_MOC_LITERAL(8, 76, 8), // "yChanged"
QT_MOC_LITERAL(9, 85, 15), // "toolmodeChanged"
QT_MOC_LITERAL(10, 101, 9), // "Tool_Mode"
QT_MOC_LITERAL(11, 111, 5), // "paint"
QT_MOC_LITERAL(12, 117, 9), // "QPainter*"
QT_MOC_LITERAL(13, 127, 7), // "painter"
QT_MOC_LITERAL(14, 135, 9), // "cleardraw"
QT_MOC_LITERAL(15, 145, 4), // "name"
QT_MOC_LITERAL(16, 150, 5), // "color"
QT_MOC_LITERAL(17, 156, 5), // "width"
QT_MOC_LITERAL(18, 162, 6), // "height"
QT_MOC_LITERAL(19, 169, 1), // "x"
QT_MOC_LITERAL(20, 171, 1), // "y"
QT_MOC_LITERAL(21, 173, 8) // "toolmode"

    },
    "PaintExam\0someSignal\0\0text\0colorChanged\0"
    "widthChanged\0heightChanged\0xChanged\0"
    "yChanged\0toolmodeChanged\0Tool_Mode\0"
    "paint\0QPainter*\0painter\0cleardraw\0"
    "name\0color\0width\0height\0x\0y\0toolmode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintExam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       7,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    0,   68,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,
       7,    0,   70,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,
       9,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   73,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   76,    2, 0x02 /* Public */,
      14,    0,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095103,
      16, QMetaType::QColor, 0x00095103,
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      19, QMetaType::Double, 0x00095103,
      20, QMetaType::Double, 0x00095103,
      21, QMetaType::Int, 0x00095103,

       0        // eod
};

void PaintExam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaintExam *_t = static_cast<PaintExam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->someSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->colorChanged(); break;
        case 2: _t->widthChanged(); break;
        case 3: _t->heightChanged(); break;
        case 4: _t->xChanged(); break;
        case 5: _t->yChanged(); break;
        case 6: _t->toolmodeChanged(); break;
        case 7: _t->Tool_Mode((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->paint((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 9: _t->cleardraw(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PaintExam::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::someSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PaintExam::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::colorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PaintExam::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::widthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PaintExam::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::heightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PaintExam::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::xChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PaintExam::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::yChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PaintExam::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::toolmodeChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PaintExam *_t = static_cast<PaintExam *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->x(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->y(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->toolmode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PaintExam *_t = static_cast<PaintExam *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setX(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setY(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setToolmode(*reinterpret_cast< int*>(_v)); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PaintExam::someSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PaintExam::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PaintExam::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PaintExam::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PaintExam::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PaintExam::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PaintExam::toolmodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
