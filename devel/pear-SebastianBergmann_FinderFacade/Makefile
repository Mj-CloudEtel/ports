PORTNAME=	FinderFacade
PORTVERSION=	1.2.3
CATEGORIES=	devel pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}SebastianBergmann_

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Convenience wrapper for Symfony Finder component
WWW=		https://github.com/sebastianbergmann/finder-facade

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PEAR_PKGNAMEPREFIX}TheSeer_fDOMDocument>=1.6.6:devel/pear-TheSeer_fDOMDocument@${PHP_FLAVOR} \
		${PEAR_PKGNAMEPREFIX}Symfony_Component_Finder>=2.3.4:devel/pear-Symfony_Component_Finder@${PHP_FLAVOR} \

RUN_DEPENDS=	${PEAR_PKGNAMEPREFIX}TheSeer_fDOMDocument>=1.6.6:devel/pear-TheSeer_fDOMDocument@${PHP_FLAVOR} \
		${PEAR_PKGNAMEPREFIX}Symfony_Component_Finder>=2.3.4:devel/pear-Symfony_Component_Finder@${PHP_FLAVOR} \

NO_ARCH=	yes

USES=		pear:env
USE_GITHUB=	yes
GH_ACCOUNT=	sebastianbergmann
GH_PROJECT=	finder-facade

NO_BUILD=	yes

PHP_DIR=	share/PHP

PLIST_FILES=	${PHP_DIR}/${PORTNAME}/FinderFacade.php

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${PHP_DIR}/${PORTNAME}
	${INSTALL_SCRIPT} ${WRKSRC}/src/FinderFacade.php \
		${STAGEDIR}${PREFIX}/${PHP_DIR}/${PORTNAME}

.include <bsd.port.mk>
