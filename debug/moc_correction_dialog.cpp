/****************************************************************************
** Meta object code from reading C++ file 'correction_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/dialogs/correction_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'correction_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CorrectionDialog_t {
    QByteArrayData data[10];
    char stringdata[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CorrectionDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CorrectionDialog_t qt_meta_stringdata_CorrectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 25),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 8),
QT_MOC_LITERAL(4, 53, 21),
QT_MOC_LITERAL(5, 75, 7),
QT_MOC_LITERAL(6, 83, 23),
QT_MOC_LITERAL(7, 107, 19),
QT_MOC_LITERAL(8, 127, 20),
QT_MOC_LITERAL(9, 148, 5)
    },
    "CorrectionDialog\0on_correction_sliderMoved\0"
    "\0position\0on_previewBox_toggled\0checked\0"
    "on_contrast_sliderMoved\0on_okButton_clicked\0"
    "on_gamma_sliderMoved\0image\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CorrectionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08,
       4,    1,   42,    2, 0x08,
       6,    1,   45,    2, 0x08,
       7,    0,   48,    2, 0x08,
       8,    1,   49,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       9, QMetaType::QImage, 0x00095103,

       0        // eod
};

void CorrectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CorrectionDialog *_t = static_cast<CorrectionDialog *>(_o);
        switch (_id) {
        case 0: _t->on_correction_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_previewBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_contrast_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_okButton_clicked(); break;
        case 4: _t->on_gamma_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CorrectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CorrectionDialog.data,
      qt_meta_data_CorrectionDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CorrectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorrectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CorrectionDialog.stringdata))
        return static_cast<void*>(const_cast< CorrectionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CorrectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = image(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setImage(*reinterpret_cast< QImage*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
