PORTNAME=	trivial-gray-streams
PORTVERSION=	2008.11.02
PORTREVISION=	1
CATEGORIES=	devel lisp
MASTER_SITES=	LOCAL/olgeni
PKGNAMEPREFIX=	cl-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Thin compatibility layer for Gray streams
WWW=		https://www.cliki.net/trivial-gray-streams

NO_BUILD=	yes

USE_ASDF=	yes

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${ASDF_PATHNAME} ${STAGEDIR}${ASDF_REGISTRY}
	@${INSTALL_DATA} ${WRKSRC}/*.lisp ${STAGEDIR}${ASDF_PATHNAME}
	@${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.asd ${STAGEDIR}${ASDF_PATHNAME}
	@${LN} -sf ${ASDF_PATHNAME}/${PORTNAME}.asd ${STAGEDIR}${ASDF_REGISTRY}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
