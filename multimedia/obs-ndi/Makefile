PORTNAME=	obs-ndi
DISTVERSION=	4.9.1
PORTREVISION=	3
CATEGORIES=	multimedia

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	OBS Studio Plugin: Network Device Interface
WWW=		https://github.com/Palakis/obs-ndi

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libobs.so:multimedia/obs-studio
RUN_DEPENDS=	${LOCALBASE}/lib/libndi.so:multimedia/libndi

USES=		cmake compiler:c++11-lang localbase:ldflags qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	Palakis
USE_QT=		core gui widgets buildtools:build qmake:build

BROKEN=		ERROR: NDIlib_v4_load not found in loaded library: https://code.videolan.org/jbk/libndi/-/issues/9, bug#258694

.include <bsd.port.mk>
