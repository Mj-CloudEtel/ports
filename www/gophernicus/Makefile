PORTNAME=	gophernicus
DISTVERSION=	3.0.1
CATEGORIES=	www

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Modern full-featured and secure Gopher daemon
WWW=		https://gophernicus.org/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
MAKE_ARGS=	CC="${CC}" \
		CFLAGS="${CFLAGS}" \
		INSTALL=${INSTALL} \
		SBINDIR=${STAGEDIR}${PREFIX}/sbin
INSTALL_TARGET=	install-files
# XXX: Drop after updating to 3.1
CFLAGS+=	-fcommon
SUB_FILES=	pkg-message

PLIST_FILES=	sbin/gophernicus
PORTDOCS=	README.Gophermap README.md changelog gophermap gophertag

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && \
		${INSTALL_MAN} ${PORTDOCS} \
		${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
