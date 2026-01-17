/****************************************************************************
** Meta object code from reading C++ file 'genericobjectinspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "genericobjectinspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericobjectinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__GenericObjectInspector_t {
    QByteArrayData data[20];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__GenericObjectInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__GenericObjectInspector_t qt_meta_stringdata_omnetpp__qtenv__GenericObjectInspector = {
    {
QT_MOC_LITERAL(0, 0, 38), // "omnetpp::qtenv::GenericObject..."
QT_MOC_LITERAL(1, 39, 19), // "onTreeViewActivated"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 72, 5), // "index"
QT_MOC_LITERAL(5, 78, 12), // "onDataEdited"
QT_MOC_LITERAL(6, 91, 23), // "gatherVisibleDataIfSafe"
QT_MOC_LITERAL(7, 115, 17), // "createContextMenu"
QT_MOC_LITERAL(8, 133, 3), // "pos"
QT_MOC_LITERAL(9, 137, 27), // "copySelectedLineToClipboard"
QT_MOC_LITERAL(10, 165, 19), // "onlyHighlightedPart"
QT_MOC_LITERAL(11, 185, 24), // "cycleSelectedSubtreeMode"
QT_MOC_LITERAL(12, 210, 7), // "setMode"
QT_MOC_LITERAL(13, 218, 4), // "Mode"
QT_MOC_LITERAL(14, 223, 4), // "mode"
QT_MOC_LITERAL(15, 228, 13), // "toGroupedMode"
QT_MOC_LITERAL(16, 242, 10), // "toFlatMode"
QT_MOC_LITERAL(17, 253, 17), // "toInheritanceMode"
QT_MOC_LITERAL(18, 271, 14), // "toChildrenMode"
QT_MOC_LITERAL(19, 286, 12) // "toPacketMode"

    },
    "omnetpp::qtenv::GenericObjectInspector\0"
    "onTreeViewActivated\0\0QModelIndex\0index\0"
    "onDataEdited\0gatherVisibleDataIfSafe\0"
    "createContextMenu\0pos\0copySelectedLineToClipboard\0"
    "onlyHighlightedPart\0cycleSelectedSubtreeMode\0"
    "setMode\0Mode\0mode\0toGroupedMode\0"
    "toFlatMode\0toInheritanceMode\0"
    "toChildrenMode\0toPacketMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__GenericObjectInspector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x09 /* Protected */,
       5,    0,   77,    2, 0x09 /* Protected */,
       6,    0,   78,    2, 0x09 /* Protected */,
       7,    1,   79,    2, 0x09 /* Protected */,
       9,    1,   82,    2, 0x09 /* Protected */,
      11,    0,   85,    2, 0x09 /* Protected */,
      12,    1,   86,    2, 0x09 /* Protected */,
      15,    0,   89,    2, 0x09 /* Protected */,
      16,    0,   90,    2, 0x09 /* Protected */,
      17,    0,   91,    2, 0x09 /* Protected */,
      18,    0,   92,    2, 0x09 /* Protected */,
      19,    0,   93,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::GenericObjectInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GenericObjectInspector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTreeViewActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onDataEdited(); break;
        case 2: _t->gatherVisibleDataIfSafe(); break;
        case 3: _t->createContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->copySelectedLineToClipboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->cycleSelectedSubtreeMode(); break;
        case 6: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 7: _t->toGroupedMode(); break;
        case 8: _t->toFlatMode(); break;
        case 9: _t->toInheritanceMode(); break;
        case 10: _t->toChildrenMode(); break;
        case 11: _t->toPacketMode(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omnetpp::qtenv::GenericObjectInspector::staticMetaObject = { {
    QMetaObject::SuperData::link<Inspector::staticMetaObject>(),
    qt_meta_stringdata_omnetpp__qtenv__GenericObjectInspector.data,
    qt_meta_data_omnetpp__qtenv__GenericObjectInspector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omnetpp::qtenv::GenericObjectInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::GenericObjectInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__GenericObjectInspector.stringdata0))
        return static_cast<void*>(this);
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::GenericObjectInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
