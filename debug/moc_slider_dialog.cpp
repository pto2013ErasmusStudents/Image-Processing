/****************************************************************************
** Meta object code from reading C++ file 'slider_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/dialogs/slider_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slider_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SliderDialog_t {
    QByteArrayData data[11];
    char stringdata[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SliderDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SliderDialog_t qt_meta_stringdata_SliderDialog = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 8),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 8),
QT_MOC_LITERAL(4, 32, 11),
QT_MOC_LITERAL(5, 44, 15),
QT_MOC_LITERAL(6, 60, 13),
QT_MOC_LITERAL(7, 74, 21),
QT_MOC_LITERAL(8, 96, 21),
QT_MOC_LITERAL(9, 118, 5),
QT_MOC_LITERAL(10, 124, 5)
    },
    "SliderDialog\0setValue\0\0setRange\0"
    "setupDialog\0initSliderValue\0updatePreview\0"
    "on_previevBox_toggled\0on_slider_sliderMoved\0"
    "image\0value\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SliderDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a,
       3,    2,   52,    2, 0x0a,
       4,    0,   57,    2, 0x0a,
       5,    1,   58,    2, 0x0a,
       6,    0,   61,    2, 0x0a,
       7,    1,   62,    2, 0x08,
       8,    1,   65,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
       9, QMetaType::QImage, 0x00095103,
      10, QMetaType::Int, 0x00095103,

       0        // eod
};

void SliderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SliderDialog *_t = static_cast<SliderDialog *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setupDialog(); break;
        case 3: _t->initSliderValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updatePreview(); break;
        case 5: _t->on_previevBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_slider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SliderDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SliderDialog.data,
      qt_meta_data_SliderDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SliderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SliderDialog.stringdata))
        return static_cast<void*>(const_cast< SliderDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SliderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = image(); break;
        case 1: *reinterpret_cast< int*>(_v) = value(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setImage(*reinterpret_cast< QImage*>(_v)); break;
        case 1: setValue(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
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
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
