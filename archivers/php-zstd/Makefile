PORTNAME=	zstd
DISTVERSION=	0.11.0
CATEGORIES=	archivers
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	pave@FreeBSD.org
COMMENT=	Zstandard extension for PHP
WWW=		https://github.com/kjdev/php-ext-zstd

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libzstd.so:archivers/zstd

USES=		php:ext pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	kjdev
GH_PROJECT=	php-ext-zstd

CONFIGURE_ARGS=	--with-libzstd

.include <bsd.port.mk>
