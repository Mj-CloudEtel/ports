PORTNAME=	libquotient
DISTVERSION=	0.6.11
CATEGORIES=	net-im

MAINTAINER=	adridg@FreeBSD.org
COMMENT=	Matrix IM support library using Qt technologies
WWW=		https://github.com/quotient-im/libQuotient

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS=	libqmatrixclient\*

USES=	cmake compiler:c++14-lang qt:5 tar:xz
USE_QT=	core gui multimedia network \
	buildtools:build qmake:build testlib:build

USE_GITHUB=	yes
GH_ACCOUNT=	quotient-im
GH_PROJECT=	libQuotient

CMAKE_ARGS=	-DQuotient_INSTALL_TESTS=OFF

.include <bsd.port.mk>
