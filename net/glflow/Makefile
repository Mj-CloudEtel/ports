PORTNAME=	glFlow
PORTVERSION=	0.1.4
PORTEPOCH=	1
CATEGORIES=	net security
MASTER_SITES=	SF
DISTNAME=	glFlow-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	NetFlow tool for detecting DoS attacks
WWW=		http://freshmeat.net/projects/glflow/

USES=		ssl tar:tgz
PLIST_FILES=	bin/glflow
PORTDOCS=	README
WRKSRC=		${WRKDIR}/${PORTNAME}-0.1

OPTIONS_DEFINE=	DOCS

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-debug --with-hash=md4

CPPFLAGS+=	-I${OPENSSLINC}
CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/glflow ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
