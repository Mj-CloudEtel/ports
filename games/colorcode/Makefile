PORTNAME=	colorcode
PORTVERSION=	0.8.5
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://colorcode.laebisch.com/download/
DISTNAME=	ColorCode-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Advanced MasterMind game and solver
WWW=		http://colorcode.laebisch.com/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c++11-lang qmake qt:5
USE_QT=		core gui widgets buildtools:build
WRKSRC=		${WRKDIR}/ColorCode-${PORTVERSION}

DESKTOP_ENTRIES=ColorCode \
		"" \
		colorcode \
		colorcode \
		"LogicGame;Game;Qt;" \
		true

PLIST_FILES=	bin/colorcode \
		share/pixmaps/colorcode.png

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/colorcode ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA}	${WRKSRC}/img/cc64.png	${STAGEDIR}${PREFIX}/share/pixmaps/colorcode.png

.include <bsd.port.mk>
