PORTNAME=	bredbandskollen
PORTVERSION=	0.20190705
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Command line tool to check internet connection speed
WWW=		https://github.com/dotse/bbk

LICENSE=	GPLv2

USES=		compiler:c++11-lang gmake

USE_GITHUB=	yes
GH_ACCOUNT=	dotse
GH_PROJECT=	bbk
GH_TAGNAME=	7b810a6

BUILD_WRKSRC=	${WRKSRC}/src/cli

PLIST_FILES=	bin/bbk_cli \
		bin/bredbandskollen

OPTIONS_DEFINE=	GNUTLS

GNUTLS_LIB_DEPENDS=	libgnutls.so:security/gnutls
GNUTLS_MAKE_ARGS=	GNUTLS=1

post-patch:
	${REINPLACE_CMD} -e 's/CXX = c++/CXX ?= c++/g' \
	${WRKSRC}/src/framework/mk.inc

do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/cli ${STAGEDIR}/${PREFIX}/bin/bbk_cli
	${LN} -sf bbk_cli ${STAGEDIR}/${PREFIX}/bin/bredbandskollen

.include <bsd.port.mk>
