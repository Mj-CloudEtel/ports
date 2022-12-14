PORTNAME=	cinnamon-session
PORTVERSION=	4.8.0
PORTREVISION=	2
CATEGORIES=	x11 gnome
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Session component for the cinnamon desktop
WWW=		http://cinnamon.linuxmint.com/

LICENSE=	GPLv2

LIB_DEPENDS=	libdbus-1.so:devel/dbus \
		libdbus-glib-1.so:devel/dbus-glib \
		libxapp.so:x11/xapp \
		libcanberra.so:audio/libcanberra
RUN_DEPENDS=	console-kit-daemon:sysutils/consolekit2

USES=		gl gnome meson pkgconfig python:3.5+,build shebangfix xorg

USE_GITHUB=	yes
GH_ACCOUNT=	linuxmint

CONFIGURE_ARGS=	-Dgconf=false

SHEBANG_FILES=	data/meson_install_schemas.py

USE_GNOME=	cairo gdkpixbuf2 gtk30
USE_XORG=	ice sm x11 xau xcomposite xext xrender xtrans xtst
USE_GL=		gl

GLIB_SCHEMAS=	org.cinnamon.SessionManager.gschema.xml

OPTIONS_DEFINE=	DOCS IPV6
OPTIONS_DEFAULT=	IPV6

DOCS_BUILD_DEPENDS=	xmlto:textproc/xmlto
DOCS_MESON_TRUE=	docbook

IPV6_MESON_TRUE=	ipv6

.include <bsd.port.mk>
