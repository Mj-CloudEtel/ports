PORTNAME=	ipv6calc
PORTVERSION=	3.2.0
CATEGORIES=	net-mgmt
MASTER_SITES=	ftp://ftp.bieringer.de/pub/linux/IPv6/ipv6calc/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert, change, and calculate with IPv6 addresses
WWW=		https://www.deepspace6.net/projects/ipv6calc.html

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash>0:shells/bash

USES=		gmake perl5 shebangfix ssl

GNU_CONFIGURE=	yes

SHEBANG_FILES=	tools/*.pl tools/*.sh.in

CFLAGS+=	-Wno-unknown-warning-option

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/*

.include <bsd.port.mk>
