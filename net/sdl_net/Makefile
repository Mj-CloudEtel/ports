PORTNAME=	sdl_net
PORTVERSION=	1.2.8
PORTREVISION=	3
CATEGORIES=	net
MASTER_SITES=	https://www.libsdl.org/projects/SDL_net/release/
DISTNAME=	SDL_net-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Small sample cross-platform networking library
WWW=		https://www.libsdl.org/projects/SDL_net/

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gmake libtool pathfix pkgconfig sdl
USE_LDCONFIG=	yes
USE_SDL=	sdl

CONFIGURE_ARGS=	--disable-gui

.include <bsd.port.mk>
