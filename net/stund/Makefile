PORTNAME=	stund
PORTVERSION=	0.96
CATEGORIES=	net
MASTER_SITES=	SF/stun/stun/${PORTVERSION}
DISTNAME=	${PORTNAME}_${PORTVERSION}_Aug13

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple STUN (RFC 3489) server and client
WWW=		http://www.vovida.org/applications/downloads/stun/

USES=		gmake tar:tgz
USE_RC_SUBR=	stund

MAKE_ENV=	"CXX=${CXX}"

post-extract:
	@${MV} ${WRKDIR}/${PORTNAME} ${WRKSRC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/server ${STAGEDIR}${PREFIX}/sbin/stund
	${INSTALL_PROGRAM} ${WRKSRC}/client ${STAGEDIR}${PREFIX}/bin/stun_client

.include <bsd.port.mk>
