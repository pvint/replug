/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Settings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      52,    9,    9,    9, 0x08,
      72,    9,    9,    9, 0x08,
      94,    9,    9,    9, 0x08,
     120,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Settings[] = {
    "Settings\0\0change_updates(bool)\0"
    "change_connect(bool)\0change_oneset(bool)\0"
    "change_keepopen(bool)\0change_popupwindows(bool)\0"
    "change_effectvalues(bool)\0"
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->change_updates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->change_connect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->change_oneset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->change_keepopen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->change_popupwindows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->change_effectvalues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Settings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Settings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Settings,
      qt_meta_data_Settings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Settings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Settings))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QDialog::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
