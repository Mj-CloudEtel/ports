PORTNAME=	seqan
PORTVERSION=	1.3.1
PORTREVISION=	4
CATEGORIES=	biology
MASTER_SITES=	http://ftp.seqan.de/releases/
PKGNAMESUFFIX=	1

MAINTAINER=	h2+fbsdports@fsfe.org
COMMENT=	C++ Sequence Analysis Library
WWW=		https://www.seqan.de/

LICENSE=	BSD3CLAUSE
LICENSE_FILE_BSD3CLAUSE=	${WRKSRC}/seqan/LICENSE

USES=		zip
NO_BUILD=	yes

CONFLICTS_INSTALL=	seqan # include/seqan/align.h

OPTIONS_DEFINE=	DOCS

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/include/${PORTNAME}
	cd ${WRKSRC} && ${COPYTREE_SHARE} ./${PORTNAME} ${STAGEDIR}/${PREFIX}/include
	cd ${WRKSRC} && ${INSTALL_DATA} ./${PORTNAME}.h ${STAGEDIR}/${PREFIX}/include

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} ./ ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
