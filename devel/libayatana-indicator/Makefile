PORTNAME=	libayatana-indicator
PORTVERSION=	0.9.1
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	jgh@FreeBSD.org
COMMENT=	Ayatana Indicators Shared Library
WWW=		https://github.com/AyatanaIndicators/libayatana-indicator

LICENSE=	GPLv3

BUILD_DEPENDS=	lcov>=0:devel/lcov

USES=	cmake localbase:ldflags gnome pkgconfig vala:build

LIB_DEPENDS=	libharfbuzz.so:print/harfbuzz \
		libgtest.so:devel/googletest \
		libayatana-ido3-0.4.so:devel/ayatana-ido

USE_GNOME=	introspection glib20 gtk30 pango atk cairo gdkpixbuf2

USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	AyatanaIndicators

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libayatana-indicator3.so*
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/libexec/libayatana-indicator/ayatana-indicator-loader3

.include <bsd.port.mk>
