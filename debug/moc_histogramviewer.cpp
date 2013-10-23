/****************************************************************************
** Meta object code from reading C++ file 'histogramviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/histogramviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'histogramviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HistogramViewer_t {
    QByteArrayData data[12];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_HistogramViewer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_HistogramViewer_t qt_meta_stringdata_HistogramViewer = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 7),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 12),
QT_MOC_LITERAL(4, 38, 15),
QT_MOC_LITERAL(5, 54, 4),
QT_MOC_LITERAL(6, 59, 10),
QT_MOC_LITERAL(7, 70, 13),
QT_MOC_LITERAL(8, 84, 20),
QT_MOC_LITERAL(9, 105, 22),
QT_MOC_LITERAL(10, 128, 21),
QT_MOC_LITERAL(11, 150, 21)
    },
    "HistogramViewer\0closing\0\0imageChanged\0"
    "updateHistogram\0PNM*\0Histogram*\0"
    "drawHistogram\0on_toggleRed_clicked\0"
    "on_toggleGreen_clicked\0on_toggleBlue_clicked\0"
    "on_toggleGray_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistogramViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x05,
       3,    0,   60,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    1,   61,    2, 0x0a,
       4,    1,   64,    2, 0x0a,
       7,    0,   67,    2, 0x0a,
       8,    0,   68,    2, 0x08,
       9,    0,   69,    2, 0x08,
      10,    0,   70,    2, 0x08,
      11,    0,   71,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HistogramViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HistogramViewer *_t = static_cast<HistogramViewer *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->imageChanged(); break;
        case 2: _t->updateHistogram((*reinterpret_cast< PNM*(*)>(_a[1]))); break;
        case 3: _t->updateHistogram((*reinterpret_cast< Histogram*(*)>(_a[1]))); break;
        case 4: _t->drawHistogram(); break;
        case 5: _t->on_toggleRed_clicked(); break;
        case 6: _t->on_toggleGreen_clicked(); break;
        case 7: _t->on_toggleBlue_clicked(); break;
        case 8: _t->on_toggleGray_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HistogramViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistogramViewer::closing)) {
                *result = 0;
            }
        }
        {
            typedef void (HistogramViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HistogramViewer::imageChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject HistogramViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HistogramViewer.data,
      qt_meta_data_HistogramViewer,  qt_static_metacall, 0, 0}
};


const QMetaObject *HistogramViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistogramViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HistogramViewer.stringdata))
        return static_cast<void*>(const_cast< HistogramViewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int HistogramViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void HistogramViewer::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HistogramViewer::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
