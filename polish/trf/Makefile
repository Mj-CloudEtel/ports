PORTNAME=	trf
PORTVERSION=	0.4
CATEGORIES=	polish finance
MASTER_SITES=	http://korzen.org/soft/trf/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Billing software for traffic counting working with most Polish ISPs
WWW=		https://korzen.org/soft/trf/

LICENSE=	GPLv2+

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in README CHANGELOG
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
