PORTNAME=	pidof
PORTVERSION=	20050501
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/novel
DISTNAME=	${PORTNAME}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Tool which prints PID of given process name
WWW=		https://people.freebsd.org/~novel/pidof.html

LICENSE=	BSD2CLAUSE

CONFLICTS=	psmisc-1*

PLIST_FILES=	bin/pidof

post-patch:
	@${REINPLACE_CMD} 's/NOMAN.*/MAN=/ ; /LINKS/d' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pidof ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
