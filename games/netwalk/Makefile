PORTNAME=	netwalk
PORTVERSION=	0.4.11
PORTREVISION=	3
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Game where the object is to connect every terminal to the main server
WWW=		https://github.com/blynn/netwalk

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake gnome iconv sdl xorg
USE_GITHUB=	yes
GH_ACCOUNT=	blynn
GH_TAGNAME=	cb6b089
USE_SDL=	sdl ttf
USE_XORG=	x11 xau xdmcp

MAKE_ARGS=	PREFIX=${STAGEDIR}${PREFIX}
ALL_TARGET=

DESKTOP_ENTRIES="NetWalk" "" "${PORTNAME}" "${PORTNAME}" "Game;LogicGame;" ""

PORTDOCS=	README
OPTIONS_DEFINE=	DOCS

ICON_SIZES=	32x32 48x48 64x64 96x96 128x128

pre-build:
	@${REINPLACE_CMD} -e \
	's|CC = gcc|CC = ${CC}|; \
	 s|CFLAGS=-Wall -O2 -fomit-frame-pointer|CFLAGS+= -fomit-frame-pointer|; \
	 s|sdl-config|${SDL_CONFIG}|; \
	 s|PREFIX = /usr|PREFIX = ${PREFIX}|' \
		${WRKSRC}/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.for s in ${ICON_SIZES}
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}/apps/
	${INSTALL_DATA} ${WRKSRC}/icons/${PORTNAME}_${s}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${s}/apps/${PORTNAME}.png
.endfor
	${LN} -sf ${PREFIX}/share/icons/hicolor/48x48/apps/${PORTNAME}.png \
		${STAGEDIR}${PREFIX}/share/pixmaps/

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
