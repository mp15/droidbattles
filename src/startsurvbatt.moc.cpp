/****************************************************************************
** startsurvbatt meta object code from reading C++ file 'startsurvbatt.h'
**
** Created: Fri Oct 7 20:33:56 2005
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.4   edited Jan 21 18:14 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "startsurvbatt.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *startsurvbatt::className() const
{
    return "startsurvbatt";
}

QMetaObject *startsurvbatt::metaObj = 0;
static QMetaObjectCleanUp cleanUp_startsurvbatt( "startsurvbatt", &startsurvbatt::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString startsurvbatt::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "startsurvbatt", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString startsurvbatt::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "startsurvbatt", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* startsurvbatt::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = startsbatt::staticMetaObject();
    static const QUMethod slot_0 = {"ocl", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "ocl()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"startsurvbatt", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_startsurvbatt.setMetaObject( metaObj );
    return metaObj;
}

void* startsurvbatt::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "startsurvbatt" ) )
	return this;
    return startsbatt::qt_cast( clname );
}

bool startsurvbatt::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: ocl(); break;
    default:
	return startsbatt::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool startsurvbatt::qt_emit( int _id, QUObject* _o )
{
    return startsbatt::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool startsurvbatt::qt_property( int id, int f, QVariant* v)
{
    return startsbatt::qt_property( id, f, v);
}

bool startsurvbatt::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES