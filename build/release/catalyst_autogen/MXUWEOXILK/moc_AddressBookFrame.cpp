/****************************************************************************
** Meta object code from reading C++ file 'AddressBookFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/AddressBookFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressBookFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGui__AddressBookFrame_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__AddressBookFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__AddressBookFrame_t qt_meta_stringdata_WalletGui__AddressBookFrame = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGui::AddressBookFrame"
QT_MOC_LITERAL(1, 28, 11), // "payToSignal"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "_index"
QT_MOC_LITERAL(4, 48, 10), // "addClicked"
QT_MOC_LITERAL(5, 59, 11), // "copyClicked"
QT_MOC_LITERAL(6, 71, 13), // "deleteClicked"
QT_MOC_LITERAL(7, 85, 21), // "currentAddressChanged"
QT_MOC_LITERAL(8, 107, 20) // "addressDoubleClicked"

    },
    "WalletGui::AddressBookFrame\0payToSignal\0"
    "\0_index\0addClicked\0copyClicked\0"
    "deleteClicked\0currentAddressChanged\0"
    "addressDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__AddressBookFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,

       0        // eod
};

void WalletGui::AddressBookFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookFrame *_t = static_cast<AddressBookFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->payToSignal((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->addClicked(); break;
        case 2: _t->copyClicked(); break;
        case 3: _t->deleteClicked(); break;
        case 4: _t->currentAddressChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->addressDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddressBookFrame::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookFrame::payToSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::AddressBookFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__AddressBookFrame.data,
      qt_meta_data_WalletGui__AddressBookFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGui::AddressBookFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::AddressBookFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__AddressBookFrame.stringdata0))
        return static_cast<void*>(const_cast< AddressBookFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGui::AddressBookFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::AddressBookFrame::payToSignal(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
