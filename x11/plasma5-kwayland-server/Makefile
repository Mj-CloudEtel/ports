PORTNAME=	kwayland-server
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	x11 kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Wayland Server Components built on KDE Frameworks
WWW=		https://github.com/kde/plasma-wayland-protocols

LICENSE=	LGPL21

LIB_DEPENDS=	libwayland-server.so:graphics/wayland
BUILD_DEPENDS=	plasma-wayland-protocols>=0:x11/plasma-wayland-protocols \
		wayland-protocols>=1.14:graphics/wayland-protocols \
		${LOCALBASE}/include/linux/input.h:devel/evdev-proto
RUN_DEPENDS=	plasma-wayland-protocols>=0:x11/plasma-wayland-protocols

USES=		cmake compiler:c++11-lang gl kde:5 pkgconfig qt:5 tar:xz
USE_GL=		egl
USE_KDE=	ecm wayland
USE_QT=		concurrent core gui wayland \
		buildtools:build qmake:build

.include <bsd.port.mk>
