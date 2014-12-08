/****************************************************************************
** Meta object code from reading C++ file 'amplifier.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "amplifier.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amplifier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Amplifier[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      25,   10,   10,   10, 0x0a,
      42,   10,   10,   10, 0x0a,
      58,   10,   10,   10, 0x0a,
      74,   10,   10,   10, 0x0a,
      90,   10,   10,   10, 0x0a,
     104,   10,   10,   10, 0x0a,
     120,   10,   10,   10, 0x0a,
     137,   10,   10,   10, 0x0a,
     157,   10,   10,   10, 0x0a,
     175,   10,   10,   10, 0x0a,
     190,   10,   10,   10, 0x0a,
     210,   10,   10,   10, 0x0a,
     229,   10,   10,   10, 0x0a,
     244,   10,   10,   10, 0x0a,
     258,   10,   10,   10, 0x0a,
     271,   10,   10,   10, 0x0a,
     292,   10,   10,   10, 0x0a,
     310,   10,   10,   10, 0x0a,
     321,   10,   10,   10, 0x0a,
     340,   10,   10,   10, 0x0a,
     368,   10,   10,   10, 0x0a,
     392,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Amplifier[] = {
    "Amplifier\0\0set_gain(int)\0update_gain(int)\0"
    "set_volume(int)\0set_treble(int)\0"
    "set_middle(int)\0set_bass(int)\0"
    "choose_amp(int)\0set_cabinet(int)\0"
    "set_noise_gate(int)\0set_presence(int)\0"
    "set_gain2(int)\0set_master_vol(int)\0"
    "set_threshold(int)\0set_depth(int)\0"
    "set_bias(int)\0set_sag(int)\0"
    "set_brightness(bool)\0set_usb_gain(int)\0"
    "send_amp()\0load(amp_settings)\0"
    "get_settings(amp_settings*)\0"
    "enable_set_button(bool)\0get_amp_hid()\0"
};

void Amplifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Amplifier *_t = static_cast<Amplifier *>(_o);
        switch (_id) {
        case 0: _t->set_gain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->update_gain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_volume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->set_treble((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->set_middle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->set_bass((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->choose_amp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->set_cabinet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->set_noise_gate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->set_presence((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->set_gain2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->set_master_vol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->set_threshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->set_depth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->set_bias((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->set_sag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->set_brightness((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->set_usb_gain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->send_amp(); break;
        case 19: _t->load((*reinterpret_cast< amp_settings(*)>(_a[1]))); break;
        case 20: _t->get_settings((*reinterpret_cast< amp_settings*(*)>(_a[1]))); break;
        case 21: _t->enable_set_button((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->get_amp_hid(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Amplifier::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Amplifier::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Amplifier,
      qt_meta_data_Amplifier, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Amplifier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Amplifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Amplifier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Amplifier))
        return static_cast<void*>(const_cast< Amplifier*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Amplifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
