PORTNAME=	hpenc
PORTVERSION=	3.0
PORTREVISION=	2
CATEGORIES=	security

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Fast authenticated encryption CLI tool
WWW=		https://github.com/vstakhov/hpenc/

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libsodium.so:security/libsodium

USES=		cmake compiler:c++11-lib ssl
USE_GITHUB=	yes
GH_ACCOUNT=	vstakhov

PLIST_FILES=	bin/hpenc bin/hpenc-${PORTVERSION} man/man1/hpenc.1.gz

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/hpenc.1 ${STAGEDIR}${MANPREFIX}/man/man1
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/hpenc

.include <bsd.port.mk>
