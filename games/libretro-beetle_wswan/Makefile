PORTNAME=	libretro-beetle_wswan
PORTVERSION=	0.20220221
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Standalone port of Mednafen WonderSwan to libretro
WWW=		https://github.com/libretro/beetle-wswan-libretro

LICENSE=	GPLv2

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	beetle-wswan-libretro
GH_TAGNAME=	8f9fc6b

PLIST_FILES=	lib/libretro/mednafen_wswan_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/mednafen_wswan_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
