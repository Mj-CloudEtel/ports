PORTNAME=		cryptlib
PORTVERSION=		3.4.3
CATEGORIES=		security
MASTER_SITES=		ftp://ftp.franken.de/pub/crypt/cryptlib/
DISTNAME=		cl${PORTVERSION:S/.//g}

MAINTAINER=		ale@FreeBSD.org
COMMENT=		Powerful security programming toolkit
WWW=		http://www.cs.auckland.ac.nz/~pgut001/cryptlib/

ONLY_FOR_ARCHS=		amd64 armv6 armv7 i386 powerpc powerpc64 powerpc64le

OPTIONS_DEFINE=		DOCS

USES=			cpe zip:infozip
EXTRACT_BEFORE_ARGS=	-aq
NO_WRKSUBDIR=		yes
MAKEFILE=		makefile
ALL_TARGET=		default FreeBSD shared
USE_LDCONFIG=		yes
MAKE_JOBS_UNSAFE=	yes
CFLAGS+=		-DUSE_PKCS11

PLIST_FILES=		include/cryptlib.h \
			lib/libcl.a lib/libcl.so \
			lib/libcl.so.3 lib/libcl.so.${PORTVERSION}

PORTDOCS=		README

post-patch:
	@${REINPLACE_CMD} -e 's/%%CFLAGS%%/${CFLAGS}/' ${WRKSRC}/makefile

do-install:
	${INSTALL_DATA} ${WRKSRC}/libcl.a ${WRKSRC}/libcl.so.${PORTVERSION} \
		${STAGEDIR}${PREFIX}/lib
	${LN} -sf libcl.so.${PORTVERSION} ${STAGEDIR}${PREFIX}/lib/libcl.so.3
	${LN} -sf libcl.so.3 ${STAGEDIR}${PREFIX}/lib/libcl.so
	${INSTALL_DATA} ${WRKSRC}/cryptlib.h ${STAGEDIR}${PREFIX}/include

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
