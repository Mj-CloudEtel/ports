PORTNAME=	Horde_Crypt_Blowfish
PORTVERSION=	1.1.3
CATEGORIES=	security www pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde blowfish encryption for PHP string data
WWW=		https://pear.horde.org

USE_HORDE_RUN=	Horde_Exception \
		Horde_Support

OPTIONS_DEFINE=	MHASH OPENSSL
MHASH_DESC=	Depend on mhash PHP extension
OPENSSL_DESC=	Depend on OpenSSL PHP extension

USES=	horde cpe
MHASH_USES=	php
MHASH_USE=	PHP=hash
OPENSSL_USES=	php
OPENSSL_USE=	PHP=openssl

.include <bsd.port.mk>
