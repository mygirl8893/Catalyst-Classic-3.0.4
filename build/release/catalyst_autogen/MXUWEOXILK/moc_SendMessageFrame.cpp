/****************************************************************************
** Meta object code from reading C++ file 'SendMessageFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/SendMessageFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SendMessageFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGui__SendMessageFrame_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__SendMessageFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__SendMessageFrame_t qt_meta_stringdata_WalletGui__SendMessageFrame = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGui::SendMessageFrame"
QT_MOC_LITERAL(1, 28, 18), // "addressBookClicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 13), // "addressEdited"
QT_MOC_LITERAL(4, 62, 5), // "_text"
QT_MOC_LITERAL(5, 68, 17), // "mixinValueChanged"
QT_MOC_LITERAL(6, 86, 6), // "_value"
QT_MOC_LITERAL(7, 93, 12), // "pasteClicked"
QT_MOC_LITERAL(8, 106, 11) // "sendClicked"

    },
    "WalletGui::SendMessageFrame\0"
    "addressBookClicked\0\0addressEdited\0"
    "_text\0mixinValueChanged\0_value\0"
    "pasteClicked\0sendClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__SendMessageFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGui::SendMessageFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendMessageFrame *_t = static_cast<SendMessageFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressBookClicked(); break;
        case 1: _t->addressEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mixinValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->pasteClicked(); break;
        case 4: _t->sendClicked(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::SendMessageFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__SendMessageFrame.data,
      qt_meta_data_WalletGui__SendMessageFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGui::SendMessageFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::SendMessageFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__SendMessageFrame.stringdata0))
        return static_cast<void*>(const_cast< SendMessageFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGui::SendMessageFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE