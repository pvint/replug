/****************************************************************************
** Meta object code from reading C++ file 'savetofile.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "savetofile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savetofile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SaveToFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   11,   40,   11, 0x08,
      69,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SaveToFile[] = {
    "SaveToFile\0\0destination_chosen(QString)\0"
    "QString\0choose_destination()\0savefile()\0"
};

void SaveToFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SaveToFile *_t = static_cast<SaveToFile *>(_o);
        switch (_id) {
        case 0: _t->destination_chosen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->choose_destination();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->savefile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SaveToFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SaveToFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SaveToFile,
      qt_meta_data_SaveToFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SaveToFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SaveToFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SaveToFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SaveToFile))
        return static_cast<void*>(const_cast< SaveToFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int SaveToFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SaveToFile::destination_chosen(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
