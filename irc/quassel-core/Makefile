MASTERDIR=	${.CURDIR}/../quassel

PORTREVISION=	1
PKGNAMESUFFIX=	-core

COMMENT=	Qt 5 based distributed IRC client (core/server only)

CMAKE_OFF=	ENABLE_SHARED

OPTIONS_EXCLUDE=CLIENT KDE MONO SPELL NLS
OPTIONS_SLAVE=	CORE

.include "${MASTERDIR}/Makefile"
