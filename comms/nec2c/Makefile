PORTNAME=	nec2c
DISTVERSION=	1.3
CATEGORIES=	comms hamradio
MASTER_SITES=	https://www.qsl.net/5b4az/pkg/nec2/nec2c/

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Used to calculate antenna patterns useful to ham radio
WWW=		https://www.qsl.net/5b4az/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libccm.so:math/ccmath

USES=		dos2unix tar:bz2

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/nec2c

.include <bsd.port.mk>
