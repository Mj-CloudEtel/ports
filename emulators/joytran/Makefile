PORTNAME=	joytran
PORTVERSION=	0.9.5.2
PORTREVISION=	1
CATEGORIES=	emulators
MASTER_SITES=	http://sourceforge.net/projects/${PORTNAME}/files/

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Joystick to keyboard/mouse events translator written in C
WWW=		http://chiselapp.com/user/beyert/repository/joytran/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		cmake:insource pkgconfig sdl tar:bzip2 xorg
USE_SDL=	sdl2
USE_XORG=	x11 xtst
CMAKE_ARGS=	-DLOCALBASE:PATH="${LOCALBASE}"

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
