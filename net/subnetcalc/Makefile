PORTNAME=	subnetcalc
PORTVERSION=	2.4.18
CATEGORIES=	net
MASTER_SITES=	https://www.uni-due.de/~be0001/subnetcalc/download/

MAINTAINER=	dreibh@iem.uni-due.de
COMMENT=	IPv4/IPv6 Subnet Calculator
WWW=		https://www.uni-due.de/~be0001/subnetcalc/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:xz cmake
CMAKE_ARGS+=	-DCMAKE_INSTALL_MANDIR=${MANPREFIX}/man

PLIST_FILES=	bin/subnetcalc \
		man/man1/subnetcalc.1.gz

.include <bsd.port.mk>
