PORTNAME=	opencsg
PORTVERSION=	1.4.2
PORTREVISION=	7
CATEGORIES=	graphics
MASTER_SITES=	http://www.opencsg.org/
DISTNAME=	OpenCSG-${PORTVERSION}

MAINTAINER=	mr@FreeBSD.org
COMMENT=	Constructive Solid Geometry rendering library
WWW=		https://www.opencsg.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/../license.txt

USES=		compiler:c++11-lang gl qmake qt:5
USE_GL=		gl glesv2 glew
USE_QT=		opengl qmake:build
WRKSRC=		${WRKDIR}/${DISTNAME}/src
PLIST_SUB=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
