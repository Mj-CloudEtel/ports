PORTNAME=	onioncat
DISTVERSION=	0.3.9
CATEGORIES=	net security
MASTER_SITES=	https://www.cypherpunk.at/ocat/download/Source/current/

MAINTAINER=	cs@FreeBSD.org
COMMENT=	IP-transparent Tor Hidden Service connector
WWW=		https://www.onioncat.org/

LICENSE=	GPLv3

RUN_DEPENDS=	tor:security/tor

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	PTHREAD_LIBS="-pthread"

USE_RC_SUBR=	${PORTNAME}
PLIST_FILES=	bin/ocat man/man1/ocat.1.gz

post-patch:
	@${REINPLACE_CMD} -e \
		'/CFLAGS=/s|-O2|$$CFLAGS|' ${WRKSRC}/configure

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/ocat ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/man/ocat.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
