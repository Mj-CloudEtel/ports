PORTNAME=	wayland-protocols
PORTVERSION=	1.26
CATEGORIES=	graphics wayland
MASTER_SITES=	https://wayland.freedesktop.org/releases/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Wayland protocols
WWW=		https://wayland.freedesktop.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	wayland-scanner:graphics/wayland

USES=		meson pkgconfig tar:xz
MESON_ARGS=	-Dtests=false
NO_ARCH=	yes

.include <bsd.port.mk>
