PORTNAME=	tarantool-c
PORTVERSION=	1.0.1
PORTREVISION=	5
CATEGORIES=	databases

MAINTAINER=	balaev@tarantool.org
COMMENT=	C client for Tarantool 1.6+
WWW=		https://github.com/tarantool/tarantool-c

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libmsgpuck.so:devel/msgpuck

USES=		cmake compiler:c11

CMAKE_OFF=	ENABLE_BUNDLED_DOCS ENABLE_BUNDLED_MSGPUCK

USE_GITHUB=	yes
GH_ACCOUNT=	tarantool
GH_TAGNAME=	2aa7937

CONFLICTS_INSTALL=	nosqlbench # include/tarantool/tarantool.h

.include <bsd.port.mk>
