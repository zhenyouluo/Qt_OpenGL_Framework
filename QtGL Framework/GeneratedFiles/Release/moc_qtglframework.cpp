/****************************************************************************
** Meta object code from reading C++ file 'qtglframework.h'
**
** Created: Wed Jul 10 21:26:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtglframework.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtglframework.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtGLFramework[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   14,   14,   14, 0x0a,
      71,   53,   14,   14, 0x0a,
     102,   14,   14,   14, 0x0a,
     121,   14,   14,   14, 0x0a,
     135,   14,   14,   14, 0x0a,
     149,   14,   14,   14, 0x0a,
     167,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QtGLFramework[] = {
    "QtGLFramework\0\0fileName\0openFile(QString)\0"
    "openFile()\0fps,nVerts,nFaces\0"
    "updateStatusBar(float,int,int)\0"
    "changeFullScreen()\0setFillMode()\0"
    "setLineMode()\0setFillWireMode()\0"
    "setFlatMode()\0"
};

void QtGLFramework::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtGLFramework *_t = static_cast<QtGLFramework *>(_o);
        switch (_id) {
        case 0: _t->openFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->openFile(); break;
        case 2: _t->updateStatusBar((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->changeFullScreen(); break;
        case 4: _t->setFillMode(); break;
        case 5: _t->setLineMode(); break;
        case 6: _t->setFillWireMode(); break;
        case 7: _t->setFlatMode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtGLFramework::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtGLFramework::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtGLFramework,
      qt_meta_data_QtGLFramework, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtGLFramework::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtGLFramework::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtGLFramework::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtGLFramework))
        return static_cast<void*>(const_cast< QtGLFramework*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtGLFramework::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QtGLFramework::openFile(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
