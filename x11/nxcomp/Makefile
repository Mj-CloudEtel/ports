PORTNAME=	nxcomp
PORTVERSION=	3.5.0.32
PORTREVISION=	2
MASTER_SITES=	https://code.x2go.org/releases/source/nx-libs/
CATEGORIES=	x11 devel
DISTNAME=	nx-libs-${PORTVERSION}-lite

MAINTAINER=	ports@FreeBSD.org
COMMENT=	NX X11 protocol compression libraries
WWW=		https://wiki.x2go.org/doku.php

WRKSRC=		${WRKDIR}/nx-libs-${PORTVERSION}/${PORTNAME}

USES=		autoreconf gmake jpeg xorg
USE_XORG=	xorgproto
GNU_CONFIGURE=	yes
LIB_DEPENDS=	libpng.so:graphics/png

post-patch:
	@${REINPLACE_CMD} -e "s,libdir}/nx,libdir},g" ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e "s|/usr/NX/bin:/opt/NX/bin:/usr/local/NX|${PREFIX}|" \
		${WRKSRC}/Children.cpp

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libXcomp.so.3.5*

.include <bsd.port.mk>
