/****************************************************************************
** Meta object code from reading C++ file 'amp_advanced.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "amp_advanced.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amp_advanced.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Amp_Advanced[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      34,   13,   13,   13, 0x0a,
      57,   13,   13,   13, 0x0a,
      77,   13,   13,   13, 0x0a,
      92,   13,   13,   13, 0x0a,
     110,   13,   13,   13, 0x0a,
     125,   13,   13,   13, 0x0a,
     144,   13,   13,   13, 0x0a,
     158,   13,   13,   13, 0x0a,
     171,   13,   13,   13, 0x0a,
     192,   13,   13,   13, 0x0a,
     210,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Amp_Advanced[] = {
    "Amp_Advanced\0\0change_cabinet(int)\0"
    "change_noise_gate(int)\0set_master_vol(int)\0"
    "set_gain2(int)\0set_presence(int)\0"
    "set_depth(int)\0set_threshold(int)\0"
    "set_bias(int)\0set_sag(int)\0"
    "set_brightness(bool)\0set_usb_gain(int)\0"
    "activate_custom_ng(int)\0"
};

void Amp_Advanced::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Amp_Advanced *_t = static_cast<Amp_Advanced *>(_o);
        switch (_id) {
        case 0: _t->change_cabinet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->change_noise_gate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_master_vol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->set_gain2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->set_presence((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->set_depth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->set_threshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->set_bias((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->set_sag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->set_brightness((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->set_usb_gain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->activate_custom_ng((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Amp_Advanced::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Amp_Advanced::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Amp_Advanced,
      qt_meta_data_Amp_Advanced, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Amp_Advanced::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Amp_Advanced::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Amp_Advanced::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Amp_Advanced))
        return static_cast<void*>(const_cast< Amp_Advanced*>(this));
    return QDialog::qt_metacast(_clname);
}

int Amp_Advanced::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
