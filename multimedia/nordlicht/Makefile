PORTNAME=	nordlicht
PORTVERSION=	0.4.5
DISTVERSIONPREFIX=	v
PORTREVISION=	5
CATEGORIES=	multimedia

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create moodbars from video files
WWW=		https://nordlicht.github.io/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	help2man:misc/help2man
LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		libpopt.so:devel/popt \
		libpng.so:graphics/png

USE_GITHUB=	yes

USES=		cmake pkgconfig shebangfix
USE_LDCONFIG=	yes

PLIST_SUB=	PORTVERSION=${PORTVERSION}

SHEBANG_FILES=	utils/mpv-nordlicht

OPTIONS_DEFINE=	EXAMPLES

post-patch:
	@${REINPLACE_CMD} \
		-e 's|$${CMAKE_INSTALL_LIBDIR}/pkgconfig|libdata/pkgconfig|' \
		-e 's|share/man/man1|man/man1|' ${WRKSRC}/CMakeLists.txt

post-install:
	@cd ${WRKSRC}/utils && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
