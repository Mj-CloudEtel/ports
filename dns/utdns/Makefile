PORTNAME=	utdns
PORTVERSION=	1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	dns

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Proxy UDP/DNS to TCP/DNS
WWW=		https://www.cypherpunk.at/2013/04/dnsudp-to-tcp-translator/

LICENSE=	GPLv3

USES=		autoreconf
USE_GITHUB=	yes
GNU_CONFIGURE=	yes
USE_RC_SUBR=	${PORTNAME}
SUB_LIST=	PORTNAME=${PORTNAME}

GH_ACCOUNT=	rahra

CFLAGS+=	-DSOCK_NONBLOCK=1

PLIST_FILES=	bin/utdns

.include <bsd.port.mk>
