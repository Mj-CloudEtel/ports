PORTNAME=	sic
PORTVERSION=	0.23a
CATEGORIES=	irc
MASTER_SITES=	ftp://ftp.funet.fi/pub/unix/irc/sic/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Another 'Internet Relay Chat' Client

LICENSE=	GPLv2

USES=		ncurses tar:tgz
GNU_CONFIGURE=	yes
PLIST_SUB=	VERSION="${PORTVERSION}"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
