PORTNAME=	dhrystone
PORTVERSION=	2.1
PORTREVISION=	2
CATEGORIES=	benchmarks
MASTER_SITES=	NETLIB/benchmark
DISTNAME=	dhry-c
EXTRACT_SUFX=

MAINTAINER=	hsn@sendmail.cz
COMMENT=	Computing benchmark for integer operations
WWW=		https://www.netlib.org/benchmark/

LICENSE=	BSD2CLAUSE

EXTRACT_CMD=	${SH}
NO_WRKSUBDIR=	yes
MAKEFILE=	${FILESDIR}/Makefile

PLIST_FILES=	bin/dhry
PORTDOCS=	RATIONALE submit.frm README_C VARIATIONS

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dhry ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
