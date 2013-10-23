/****************************************************************************
** Meta object code from reading C++ file 'imageviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/imageviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageViewer_t {
    QByteArrayData data[21];
    char stringdata[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ImageViewer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ImageViewer_t qt_meta_stringdata_ImageViewer = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 12),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 4),
QT_MOC_LITERAL(4, 31, 12),
QT_MOC_LITERAL(5, 44, 12),
QT_MOC_LITERAL(6, 57, 12),
QT_MOC_LITERAL(7, 70, 9),
QT_MOC_LITERAL(8, 80, 11),
QT_MOC_LITERAL(9, 92, 18),
QT_MOC_LITERAL(10, 111, 21),
QT_MOC_LITERAL(11, 133, 4),
QT_MOC_LITERAL(12, 138, 12),
QT_MOC_LITERAL(13, 151, 11),
QT_MOC_LITERAL(14, 163, 12),
QT_MOC_LITERAL(15, 176, 11),
QT_MOC_LITERAL(16, 188, 21),
QT_MOC_LITERAL(17, 210, 22),
QT_MOC_LITERAL(18, 233, 8),
QT_MOC_LITERAL(19, 242, 4),
QT_MOC_LITERAL(20, 247, 4)
    },
    "ImageViewer\0imageChanged\0\0PNM*\0"
    "viewerClosed\0ImageViewer*\0imageUpdated\0"
    "lockTools\0unlockTools\0destroyedHistogram\0"
    "closedHistogramWindow\0undo\0toolProgress\0"
    "toolMessage\0toolFinished\0updateImage\0"
    "transformationStarted\0transformationFinished\0"
    "fileName\0path\0zoom\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       3,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x05,
       4,    1,   87,    2, 0x05,
       6,    0,   90,    2, 0x05,
       7,    0,   91,    2, 0x05,
       8,    0,   92,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    0,   93,    2, 0x0a,
      10,    0,   94,    2, 0x0a,
      11,    0,   95,    2, 0x0a,
      12,    1,   96,    2, 0x0a,
      13,    1,   99,    2, 0x0a,
      14,    0,  102,    2, 0x0a,
      15,    1,  103,    2, 0x0a,
      16,    0,  106,    2, 0x0a,
      17,    0,  107,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095001,
      19, QMetaType::QString, 0x00095001,
      20, QMetaType::Float, 0x00095107,

       0        // eod
};

void ImageViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageViewer *_t = static_cast<ImageViewer *>(_o);
        switch (_id) {
        case 0: _t->imageChanged((*reinterpret_cast< PNM*(*)>(_a[1]))); break;
        case 1: _t->viewerClosed((*reinterpret_cast< ImageViewer*(*)>(_a[1]))); break;
        case 2: _t->imageUpdated(); break;
        case 3: _t->lockTools(); break;
        case 4: _t->unlockTools(); break;
        case 5: _t->destroyedHistogram(); break;
        case 6: _t->closedHistogramWindow(); break;
        case 7: _t->undo(); break;
        case 8: _t->toolProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toolMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->toolFinished(); break;
        case 11: _t->updateImage((*reinterpret_cast< PNM*(*)>(_a[1]))); break;
        case 12: _t->transformationStarted(); break;
        case 13: _t->transformationFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ImageViewer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageViewer::*_t)(PNM * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageViewer::imageChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ImageViewer::*_t)(ImageViewer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageViewer::viewerClosed)) {
                *result = 1;
            }
        }
        {
            typedef void (ImageViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageViewer::imageUpdated)) {
                *result = 2;
            }
        }
        {
            typedef void (ImageViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageViewer::lockTools)) {
                *result = 3;
            }
        }
        {
            typedef void (ImageViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageViewer::unlockTools)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ImageViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ImageViewer.data,
      qt_meta_data_ImageViewer,  qt_static_metacall, 0, 0}
};


const QMetaObject *ImageViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageViewer.stringdata))
        return static_cast<void*>(const_cast< ImageViewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int ImageViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = fileName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = path(); break;
        case 2: *reinterpret_cast< float*>(_v) = getZoom(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setZoom(*reinterpret_cast< float*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 2: resetZoom(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageViewer::imageChanged(PNM * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageViewer::viewerClosed(ImageViewer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ImageViewer::imageUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ImageViewer::lockTools()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ImageViewer::unlockTools()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
