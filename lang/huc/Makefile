PORTNAME=	huc
PORTVERSION=	3.21
DISTVERSIONSUFFIX=	-src
CATEGORIES=	lang emulators
MASTER_SITES=	http://www.zeograd.com/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PC Engine C compiler which can create ROMs (hucard) or CD images
WWW=		https://www.zeograd.com/

NO_WRKSUBDIR=	yes

USES=		gmake zip

MAKE_ARGS=	CC="${CC}" LD="${CC}" CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}"

OPTIONS_DEFINE=	DOCS

do-install:
.for file in huc isolink nesasm pceas pcxtool
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${file} ${STAGEDIR}${PREFIX}/bin
.endfor
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/${PORTNAME}
	(cd ${WRKSRC}/include \
		&& ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/include/${PORTNAME})

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/doc \
		&& ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
