PORTNAME=	qt-maybe
PORTVERSION=	0.0.20151227
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Implementation of sum/option types using QVariant
WWW=		https://github.com/robertknight/qt-maybe

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	robertknight
GH_TAGNAME=	52b21af

USE_QT=		core
NO_BUILD=	yes

PLIST_FILES=	include/Either.h include/Maybe.h

do-install:
	(cd ${WRKSRC} && ${INSTALL_DATA} Either.h Maybe.h \
		${STAGEDIR}${PREFIX}/include)

.include <bsd.port.mk>
