/****************************************************************************
** Meta object code from reading C++ file 'effect.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "effect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Effect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      27,    7,    7,    7, 0x0a,
      42,    7,    7,    7, 0x0a,
      57,    7,    7,    7, 0x0a,
      72,    7,    7,    7, 0x0a,
      87,    7,    7,    7, 0x0a,
     102,    7,    7,    7, 0x0a,
     117,    7,    7,    7, 0x0a,
     132,    7,    7,    7, 0x0a,
     149,    7,    7,    7, 0x0a,
     173,    7,    7,    7, 0x0a,
     183,    7,    7,    7, 0x0a,
     207,    7,    7,    7, 0x0a,
     240,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Effect[] = {
    "Effect\0\0set_post_amp(bool)\0set_knob1(int)\0"
    "set_knob2(int)\0set_knob3(int)\0"
    "set_knob4(int)\0set_knob5(int)\0"
    "set_knob6(int)\0choose_fx(int)\0"
    "off_switch(bool)\0enable_set_button(bool)\0"
    "send_fx()\0load(fx_pedal_settings)\0"
    "get_settings(fx_pedal_settings&)\0"
    "load_default_fx()\0"
};

void Effect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Effect *_t = static_cast<Effect *>(_o);
        switch (_id) {
        case 0: _t->set_post_amp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->set_knob1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_knob2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->set_knob3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->set_knob4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->set_knob5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->set_knob6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->choose_fx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->off_switch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->enable_set_button((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->send_fx(); break;
        case 11: _t->load((*reinterpret_cast< fx_pedal_settings(*)>(_a[1]))); break;
        case 12: _t->get_settings((*reinterpret_cast< fx_pedal_settings(*)>(_a[1]))); break;
        case 13: _t->load_default_fx(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Effect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Effect::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Effect,
      qt_meta_data_Effect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Effect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Effect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Effect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Effect))
        return static_cast<void*>(const_cast< Effect*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Effect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
