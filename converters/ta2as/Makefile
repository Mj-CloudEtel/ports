PORTNAME=	ta2as
PORTVERSION=	0.8.2
CATEGORIES=	converters devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TASM to AT&T asm syntax converter (GNU AS)
WWW=		https://github.com/mefistotelis/ta2as

LICENSE=	TA2AS
LICENSE_NAME=	TA2AS license
LICENSE_FILE=	${WRKSRC}/legal.txt
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

WRKSRC_SUBDIR=	ta2as

USE_GITHUB=	yes
GH_ACCOUNT=	mefistotelis

PORTDOCS=	*
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DOCS

post-extract:
	@${CP} -f ${FILESDIR}/strtolower.c ${WRKSRC}

post-patch:
	@${REINPLACE_CMD} -e \
		's|strlwr|strtolower|' ${WRKSRC}/${PORTNAME}.c

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} main.c strtolower.c ${PORTNAME}.c \
		-o ${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
