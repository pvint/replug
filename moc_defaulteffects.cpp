/****************************************************************************
** Meta object code from reading C++ file 'defaulteffects.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "defaulteffects.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'defaulteffects.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DefaultEffects[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      31,   15,   15,   15, 0x08,
      46,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DefaultEffects[] = {
    "DefaultEffects\0\0choose_fx(int)\0"
    "get_settings()\0save_default_effects()\0"
};

void DefaultEffects::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DefaultEffects *_t = static_cast<DefaultEffects *>(_o);
        switch (_id) {
        case 0: _t->choose_fx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->get_settings(); break;
        case 2: _t->save_default_effects(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DefaultEffects::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DefaultEffects::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DefaultEffects,
      qt_meta_data_DefaultEffects, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DefaultEffects::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DefaultEffects::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DefaultEffects::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DefaultEffects))
        return static_cast<void*>(const_cast< DefaultEffects*>(this));
    return QDialog::qt_metacast(_clname);
}

int DefaultEffects::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
