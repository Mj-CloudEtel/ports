PORTNAME=	xf86-input-libinput
PORTVERSION=	1.2.0
PORTREVISION=	1
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org libinput input driver
WWW=		https://www.x.org/

LICENSE=	MIT # various styles
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto
LIB_DEPENDS=	libinput.so:x11/libinput

USES=		pathfix xorg-cat:driver

.include <bsd.port.mk>
