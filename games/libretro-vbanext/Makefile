PORTNAME=	libretro-vbanext
PORTVERSION=	0.20220327
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Optimized port of VBA-M to Libretro, a Game Boy Advance emulator
WWW=		https://github.com/libretro/vba-next

LICENSE=	GPLv2

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	vba-next
GH_TAGNAME=	ebd175d

PLIST_FILES=	lib/libretro/vba_next_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/vba_next_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
