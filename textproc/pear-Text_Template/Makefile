PORTNAME=	Text_Template
PORTVERSION=	2.0.4
CATEGORIES=	textproc www pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple template engine
WWW=		https://pear.phpunit.de/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		pear:env
USE_GITHUB=	yes
GH_ACCOUNT=	sebastianbergmann
GH_PROJECT=	php-text-template

NO_ARCH=	yes
NO_BUILD=	yes
PHP_DIR=	share/PHP
PLIST_FILES=	${PHP_DIR}/${PORTNAME}/Template.php

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${PHP_DIR}/${PORTNAME}
	${INSTALL_SCRIPT} ${WRKSRC}/src/Template.php \
		${STAGEDIR}${PREFIX}/${PHP_DIR}/${PORTNAME}

.include <bsd.port.mk>
