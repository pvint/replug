/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,   11,   11,   11, 0x0a,
      34,   11,   11,   11, 0x0a,
      49,   11,   45,   11, 0x0a,
      79,   11,   45,   11, 0x0a,
     109,  107,   45,   11, 0x0a,
     132,   11,   45,   11, 0x0a,
     151,   11,   11,   11, 0x0a,
     168,  107,   11,   11, 0x0a,
     200,  194,   11,   11, 0x0a,
     243,   11,   11,   11, 0x0a,
     267,  258,   11,   11, 0x0a,
     285,   11,   11,   11, 0x2a,
     296,  107,   11,   11, 0x0a,
     345,   11,   11,   11, 0x0a,
     367,   11,   11,   11, 0x0a,
     385,  107,   11,   11, 0x0a,
     410,   11,   11,   11, 0x08,
     430,   11,   11,   11, 0x08,
     446,   11,   11,   11, 0x08,
     457,   11,   11,   11, 0x08,
     468,   11,   11,   11, 0x08,
     479,   11,   11,   11, 0x08,
     490,   11,   11,   11, 0x08,
     501,   11,   11,   11, 0x08,
     516,   11,   11,   11, 0x08,
     539,   11,   45,   11, 0x08,
     560,   11,   11,   11, 0x08,
     576,   11,   11,   11, 0x08,
     592,   11,   11,   11, 0x08,
     608,   11,   11,   11, 0x08,
     624,   11,   11,   11, 0x08,
     640,   11,   11,   11, 0x08,
     656,   11,   11,   11, 0x08,
     672,   11,   11,   11, 0x08,
     688,   11,   11,   11, 0x08,
     704,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0started()\0start_amp()\0"
    "stop_amp()\0int\0set_effect(fx_pedal_settings)\0"
    "set_amplifier(amp_settings)\0,\0"
    "save_on_amp(char*,int)\0load_from_amp(int)\0"
    "enable_buttons()\0change_name(int,QString*)\0"
    ",,,,,\0save_effects(int,char*,int,bool,bool,bool)\0"
    "set_index(int)\0filename\0loadfile(QString)\0"
    "loadfile()\0get_settings(amp_settings*,fx_pedal_settings[4])\0"
    "change_title(QString)\0update_firmware()\0"
    "empty_other(int,Effect*)\0check_for_updates()\0"
    "httpReadyRead()\0show_fx1()\0show_fx2()\0"
    "show_fx3()\0show_fx4()\0show_amp()\0"
    "show_library()\0show_default_effects()\0"
    "check_fx_family(int)\0load_presets0()\0"
    "load_presets1()\0load_presets2()\0"
    "load_presets3()\0load_presets4()\0"
    "load_presets5()\0load_presets6()\0"
    "load_presets7()\0load_presets8()\0"
    "load_presets9()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->start_amp(); break;
        case 2: _t->stop_amp(); break;
        case 3: { int _r = _t->set_effect((*reinterpret_cast< fx_pedal_settings(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->set_amplifier((*reinterpret_cast< amp_settings(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->save_on_amp((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->load_from_amp((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->enable_buttons(); break;
        case 8: _t->change_name((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2]))); break;
        case 9: _t->save_effects((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 10: _t->set_index((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->loadfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->loadfile(); break;
        case 13: _t->get_settings((*reinterpret_cast< amp_settings*(*)>(_a[1])),(*reinterpret_cast< fx_pedal_settings(*)[4]>(_a[2]))); break;
        case 14: _t->change_title((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->update_firmware(); break;
        case 16: _t->empty_other((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Effect*(*)>(_a[2]))); break;
        case 17: _t->check_for_updates(); break;
        case 18: _t->httpReadyRead(); break;
        case 19: _t->show_fx1(); break;
        case 20: _t->show_fx2(); break;
        case 21: _t->show_fx3(); break;
        case 22: _t->show_fx4(); break;
        case 23: _t->show_amp(); break;
        case 24: _t->show_library(); break;
        case 25: _t->show_default_effects(); break;
        case 26: { int _r = _t->check_fx_family((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: _t->load_presets0(); break;
        case 28: _t->load_presets1(); break;
        case 29: _t->load_presets2(); break;
        case 30: _t->load_presets3(); break;
        case 31: _t->load_presets4(); break;
        case 32: _t->load_presets5(); break;
        case 33: _t->load_presets6(); break;
        case 34: _t->load_presets7(); break;
        case 35: _t->load_presets8(); break;
        case 36: _t->load_presets9(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
