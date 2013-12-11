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
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      25,   10,   10,   10, 0x0a,
      41,   10,   10,   10, 0x0a,
      57,   10,   10,   10, 0x0a,
      73,   10,   10,   10, 0x0a,
      87,   10,   10,   10, 0x0a,
     103,   10,   10,   10, 0x0a,
     120,   10,   10,   10, 0x0a,
     140,   10,   10,   10, 0x0a,
     158,   10,   10,   10, 0x0a,
     173,   10,   10,   10, 0x0a,
     193,   10,   10,   10, 0x0a,
     212,   10,   10,   10, 0x0a,
     227,   10,   10,   10, 0x0a,
     241,   10,   10,   10, 0x0a,
     254,   10,   10,   10, 0x0a,
     275,   10,   10,   10, 0x0a,
     293,   10,   10,   10, 0x0a,
     304,   10,   10,   10, 0x0a,
     323,   10,   10,   10, 0x0a,
     351,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Amplifier[] = {
    "Amplifier\0\0set_gain(int)\0set_volume(int)\0"
    "set_treble(int)\0set_middle(int)\0"
    "set_bass(int)\0choose_amp(int)\0"
    "set_cabinet(int)\0set_noise_gate(int)\0"
    "set_presence(int)\0set_gain2(int)\0"
    "set_master_vol(int)\0set_threshold(int)\0"
    "set_depth(int)\0set_bias(int)\0set_sag(int)\0"
    "set_brightness(bool)\0set_usb_gain(int)\0"
    "send_amp()\0load(amp_settings)\0"
    "get_settings(amp_settings*)\0"
    "enable_set_button(bool)\0"
};

void Amplifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Amplifier *_t = static_cast<Amplifier *>(_o);
        switch (_id) {
        case 0: _t->set_gain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->set_volume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_treble((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->set_middle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->set_bass((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->choose_amp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->set_cabinet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->set_noise_gate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->set_presence((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->set_gain2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->set_master_vol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->set_threshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->set_depth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->set_bias((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->set_sag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->set_brightness((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->set_usb_gain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->send_amp(); break;
        case 18: _t->load((*reinterpret_cast< amp_settings(*)>(_a[1]))); break;
        case 19: _t->get_settings((*reinterpret_cast< amp_settings*(*)>(_a[1]))); break;
        case 20: _t->enable_set_button((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
