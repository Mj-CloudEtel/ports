PORTNAME=	guetzli
PORTVERSION=	1.0.1
PORTREVISION=	5
DISTVERSIONPREFIX=	v
CATEGORIES=	graphics

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Perceptual JPEG encoder
WWW=		https://github.com/google/guetzli

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpng.so:graphics/png

USE_GITHUB=	yes
GH_ACCOUNT=	google

USES=		compiler:c++11-lib gmake pkgconfig
PLIST_FILES=	bin/guetzli
MAKE_FLAGS=	verbose=1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/Release/guetzli ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
