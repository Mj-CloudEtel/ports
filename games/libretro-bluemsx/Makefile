PORTNAME=	libretro-bluemsx
PORTVERSION=	0.20220213
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Port of blueMSX to the libretro API
WWW=		https://github.com/libretro/blueMSX-libretro

LICENSE=	GPLv3

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	blueMSX-libretro
GH_TAGNAME=	92d0c41

PLIST_FILES=	lib/libretro/bluemsx_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/bluemsx_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
