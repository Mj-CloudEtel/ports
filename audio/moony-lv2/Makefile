PORTNAME=	moony
DISTVERSION=	0.36.0
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	https://gitlab.com/OpenMusicKontrollers/moony.lv2/repository/archive.tar.gz?ref=${PORTVERSION}&dummy=/
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Realtime Lua as programmable glue in LV2
WWW=		https://open-music-kontrollers.ch/lv2/moony

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	lv2>0:audio/lv2

USES=		compiler:c++11-lang gl meson pkgconfig xorg
USE_XORG=	x11 xext
USE_GL=		gl glew glu

post-extract:
	@${MV} ${WRKDIR}/moony* ${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
