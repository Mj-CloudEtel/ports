PORTNAME=	jigzo
PORTVERSION=	0.6.1
PORTREVISION=	12
CATEGORIES=	games
MASTER_SITES=	https://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	OpenGL jigsaw puzzle game
WWW=		https://web.archive.org/web/20110102231249/http://www.resorama.com/jigzo

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/GPL.txt

LIB_DEPENDS=	libpng.so:graphics/png

USES=		gl gmake jpeg sdl tar:tgz
USE_SDL=	sdl mixer
USE_GL=		gl
MAKE_ARGS=	CXX=${CXX}

PLIST_FILES=	bin/${PORTNAME}
PORTDATA=	*
PORTDOCS=	*

DESKTOP_ENTRIES="Jigzo" \
		"An OpenGL jigsaw puzzle game" \
		"" \
		"jigzo" \
		"Game;LogicGame;KidsGame;" \
		false

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e "s|int_p_NULL|NULL|g" \
		${WRKSRC}/src/Loader.cxx
.for i in font image puzzles sound
	@${REINPLACE_CMD} -e "s|${i}/|${DATADIR}/${i}/|g" \
	    ${WRKSRC}/src/main.cxx
.endfor
	@${FIND} ${WRKSRC} -name .thumbnails | ${XARGS} ${RM} -r

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	cd ${WRKSRC} && ${COPYTREE_SHARE} "font image puzzles sound" \
		${STAGEDIR}${DATADIR}/
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
