PORTNAME=	libxshmfence
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Shared memory 'SyncFence' synchronization primitive
WWW=		https://www.freedesktop.org/Software/xlibs

LICENSE=	MIT

USES=		xorg xorg-cat:lib
USE_XORG=	xorgproto

CONFIGURE_ARGS=	--with-shared-memory-dir=/tmp
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

.include <bsd.port.mk>
