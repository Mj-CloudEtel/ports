PORTNAME=	xdino
PORTVERSION=	5.5.2
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	XCONTRIB/games/xpuzzles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dino puzzle game for X11
WWW=		http://www.tux.org/~bagleyd/puzzles.html

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		imake xorg
USE_XORG=	x11 xext xt sm ice

PLIST_FILES=	bin/xdino \
		man/man1/xdino.1.gz \
		lib/X11/app-defaults/Dino

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xdino ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/Dino.ad ${STAGEDIR}${PREFIX}/lib/X11/app-defaults/Dino
	${INSTALL_MAN} ${WRKSRC}/xdino.man ${STAGEDIR}${MANPREFIX}/man/man1/xdino.1

.include <bsd.port.mk>
