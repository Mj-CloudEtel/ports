PORTNAME=	PHPCPD
DISTVERSION=	2.0.0
CATEGORIES=	devel pear
PKGNAMEPREFIX=	${PEAR_PKGNAMEPREFIX}SebastianBergmann_

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Copy/Paste Detector (CPD) for PHP code
WWW=		https://github.com/sebastianbergmann/phpcpd

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PEAR_PKGNAMEPREFIX}ezc_ConsoleTools>=1.6.1:devel/pear-ezc_ConsoleTools@${PHP_FLAVOR} \
		${PEAR_PKGNAMEPREFIX}SebastianBergmann_FinderFacade>=1.2.2:devel/pear-SebastianBergmann_FinderFacade@${PHP_FLAVOR} \
		${PEAR_PKGNAMEPREFIX}PHP_Timer>=1.0.9:devel/pear-PHP_Timer@${PHP_FLAVOR}
RUN_DEPENDS=	${PEAR_PKGNAMEPREFIX}ezc_ConsoleTools>=1.6.1:devel/pear-ezc_ConsoleTools@${PHP_FLAVOR} \
		${PEAR_PKGNAMEPREFIX}SebastianBergmann_FinderFacade>=1.2.2:devel/pear-SebastianBergmann_FinderFacade@${PHP_FLAVOR} \
		${PEAR_PKGNAMEPREFIX}PHP_Timer>=1.0.9:devel/pear-PHP_Timer@${PHP_FLAVOR}

USES=	php pear:env
USE_GITHUB=	yes
GH_ACCOUNT=	sebastianbergmann
GH_PROJECT=	${PORTNAME:tl}
USE_PHP=	tokenizer

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${DATADIR}/phpcpd.php

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/phpcpd.php ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
