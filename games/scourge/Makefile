PORTNAME=	scourge
PORTVERSION=	0.21.1
PORTREVISION=	14
CATEGORIES=	games
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION:S/$/.src/}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Rogue-like game
WWW=		http://scourge.sourceforge.net/

LIB_DEPENDS=	libfreetype.so:print/freetype2
RUN_DEPENDS=	${LOCALBASE}/${DATADIR_REL}/config/scourge.cfg:games/scourge-data

USES=		autoreconf compiler gettext gl gmake localbase pkgconfig sdl
GNU_CONFIGURE=	yes
USE_GL=		gl
USE_SDL=	sdl image mixer net ttf

CXXFLAGS+=	${CXXFLAGS_${CHOSEN_COMPILER_TYPE}}
CXXFLAGS_clang=	-Wno-c++11-narrowing

CONFIGURE_ARGS=	--with-data-dir=${DATADIR}

SUB_FILES=	pkg-message
PLIST_FILES=	bin/${PORTNAME}
WRKSRC=		${WRKDIR}/${PORTNAME}

OPTIONS_DEFINE=	DEBUG
DEBUG_CONFIGURE_ENABLE=	debug

BINARY_ALIAS=	freetype-config=true

post-patch:
	@${REINPLACE_CMD} -e 's|GLvoid|void|g' ${WRKSRC}/src/sdlhandler.cpp ${WRKSRC}/src/sdlhandler.h
	@${REINPLACE_CMD} -e 's|\([^a-z_]\)type(|\1squirrel_type(|g' ${WRKSRC}/src/squirrel/*.cpp ${WRKSRC}/src/squirrel/*.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
