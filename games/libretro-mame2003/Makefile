PORTNAME=	libretro-mame2003
PORTVERSION=	0.20220206
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MAME 0.78 for libretro
WWW=		https://github.com/libretro/mame2003-libretro

LICENSE=	GPLv2

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	mame2003-libretro
GH_TAGNAME=	3eb27d5

PLIST_FILES=	lib/libretro/mame2003_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/mame2003_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
