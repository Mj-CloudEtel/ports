PORTNAME=	timed
PORTVERSION=	8.1
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	se@FreeBSD.org
COMMENT=	Old time synchronisation service superseded by more modern protocols
WWW=		https://github.com/freebsd/timed

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	freebsd

post-build:
		${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' ${WRKSRC}/rc.d/timed

do-install:
.for f in timed timedc
		${INSTALL_PROGRAM} ${WRKSRC}/${f}/${f} \
			${STAGEDIR}${PREFIX}/sbin
		${INSTALL_MAN} ${WRKSRC}/${f}/${f}.8 \
			${STAGEDIR}${MAN8PREFIX}/man/man8/
.endfor
		${INSTALL_SCRIPT} ${WRKSRC}/rc.d/timed \
			${STAGEDIR}${PREFIX}/etc/rc.d/

.include <bsd.port.mk>
