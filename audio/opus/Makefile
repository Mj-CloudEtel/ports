PORTNAME=	opus
PORTVERSION=	1.3.1
CATEGORIES=	audio
MASTER_SITES=	MOZILLA/opus

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	IETF audio codec
WWW=		https://opus-codec.org/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe gmake libtool pathfix
CPE_VENDOR=	opus-codec
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-custom-modes \
		--disable-doc   # requires doxygen
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

.include <bsd.port.options.mk>

.if ${ARCH} == "arm"
CONFIGURE_ARGS+=--enable-fixed-point
.endif

.include <bsd.port.mk>
