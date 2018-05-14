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
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintExam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintExam_t qt_meta_stringdata_PaintExam = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PaintExam"
QT_MOC_LITERAL(1, 10, 11), // "drawCleared"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "someSignal"
QT_MOC_LITERAL(4, 34, 4), // "text"
QT_MOC_LITERAL(5, 39, 9), // "Tool_Mode"
QT_MOC_LITERAL(6, 49, 18), // "on_btnLine_clicked"
QT_MOC_LITERAL(7, 68, 18), // "on_btnRect_clicked"
QT_MOC_LITERAL(8, 87, 5), // "paint"
QT_MOC_LITERAL(9, 93, 9), // "QPainter*"
QT_MOC_LITERAL(10, 103, 7), // "painter"
QT_MOC_LITERAL(11, 111, 9), // "cleardraw"
QT_MOC_LITERAL(12, 121, 4), // "test"
QT_MOC_LITERAL(13, 126, 10), // "mousePress"
QT_MOC_LITERAL(14, 137, 1), // "x"
QT_MOC_LITERAL(15, 139, 1), // "y"
QT_MOC_LITERAL(16, 141, 12), // "mouseRelease"
QT_MOC_LITERAL(17, 154, 10), // "paintEvent"
QT_MOC_LITERAL(18, 165, 12), // "QPaintEvent*"
QT_MOC_LITERAL(19, 178, 5), // "event"
QT_MOC_LITERAL(20, 184, 4), // "name"
QT_MOC_LITERAL(21, 189, 5) // "color"

    },
    "PaintExam\0drawCleared\0\0someSignal\0"
    "text\0Tool_Mode\0on_btnLine_clicked\0"
    "on_btnRect_clicked\0paint\0QPainter*\0"
    "painter\0cleardraw\0test\0mousePress\0x\0"
    "y\0mouseRelease\0paintEvent\0QPaintEvent*\0"
    "event\0name\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintExam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   73,    2, 0x0a /* Public */,
       6,    0,   76,    2, 0x0a /* Public */,
       7,    0,   77,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   78,    2, 0x02 /* Public */,
      11,    0,   81,    2, 0x02 /* Public */,
      12,    0,   82,    2, 0x02 /* Public */,
      13,    2,   83,    2, 0x02 /* Public */,
      16,    2,   88,    2, 0x02 /* Public */,
      17,    1,   93,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   14,   15,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   14,   15,
    QMetaType::Void, 0x80000000 | 18,   19,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00095103,
      21, QMetaType::QColor, 0x00095103,

       0        // eod
};

void PaintExam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaintExam *_t = static_cast<PaintExam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->drawCleared(); break;
        case 1: _t->someSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->Tool_Mode((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->on_btnLine_clicked(); break;
        case 4: _t->on_btnRect_clicked(); break;
        case 5: _t->paint((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 6: _t->cleardraw(); break;
        case 7: _t->test(); break;
        case 8: _t->mousePress((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->mouseRelease((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PaintExam::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::drawCleared)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PaintExam::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintExam::someSignal)) {
                *result = 1;
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
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PaintExam *_t = static_cast<PaintExam *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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

// SIGNAL 0
void PaintExam::drawCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PaintExam::someSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
