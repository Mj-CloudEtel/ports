PORTNAME=	tsearch_extras
PORTVERSION=	0.3
PORTREVISION=	2
CATEGORIES=	databases

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Functions for getting lower-level data about full text search
WWW=		https://github.com/zulip/tsearch_extras

LICENSE=	PostgreSQL
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		gmake pgsql
LLD_UNSAFE=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	zulip

PLIST_FILES=	lib/postgresql/tsearch_extras.so \
		share/postgresql/extension/tsearch_extras--1.0.sql \
		share/postgresql/extension/tsearch_extras.control

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/tsearch_extras.so

.include <bsd.port.mk>
