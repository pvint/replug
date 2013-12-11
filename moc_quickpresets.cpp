/****************************************************************************
** Meta object code from reading C++ file 'quickpresets.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "quickpresets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickpresets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QuickPresets[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      37,   13,   13,   13, 0x08,
      60,   13,   13,   13, 0x08,
      83,   13,   13,   13, 0x08,
     106,   13,   13,   13, 0x08,
     129,   13,   13,   13, 0x08,
     152,   13,   13,   13, 0x08,
     175,   13,   13,   13, 0x08,
     198,   13,   13,   13, 0x08,
     221,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QuickPresets[] = {
    "QuickPresets\0\0setDefaultPreset0(int)\0"
    "setDefaultPreset1(int)\0setDefaultPreset2(int)\0"
    "setDefaultPreset3(int)\0setDefaultPreset4(int)\0"
    "setDefaultPreset5(int)\0setDefaultPreset6(int)\0"
    "setDefaultPreset7(int)\0setDefaultPreset8(int)\0"
    "setDefaultPreset9(int)\0"
};

void QuickPresets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuickPresets *_t = static_cast<QuickPresets *>(_o);
        switch (_id) {
        case 0: _t->setDefaultPreset0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setDefaultPreset1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setDefaultPreset2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setDefaultPreset3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDefaultPreset4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setDefaultPreset5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setDefaultPreset6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setDefaultPreset7((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setDefaultPreset8((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setDefaultPreset9((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QuickPresets::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuickPresets::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QuickPresets,
      qt_meta_data_QuickPresets, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuickPresets::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuickPresets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuickPresets::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuickPresets))
        return static_cast<void*>(const_cast< QuickPresets*>(this));
    return QDialog::qt_metacast(_clname);
}

int QuickPresets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
