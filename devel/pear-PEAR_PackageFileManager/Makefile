PORTNAME=	PEAR_PackageFileManager
PORTVERSION=	1.7.2
CATEGORIES=	devel www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR class to maintain PEAR packages
WWW=		https://pear.php.net/package/PEAR_PackageFileManager

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		pear

NO_ARCH=	yes

OPTIONS_DEFINE=	PEAR_PHP_COMPATINFO PEAR_XML_TREE
PEAR_PHP_COMPATINFO_DESC=	PEAR::PHP_CompatInfo support
PEAR_XML_TREE_DESC=	PEAR::XML_Tree support

PEAR_PHP_COMPATINFO_RUN_DEPENDS=	${PEARDIR}/PHP/CompatInfo.php:devel/pear-PHP_CompatInfo@${PHP_FLAVOR}
PEAR_XML_TREE_RUN_DEPENDS=	${PEARDIR}/XML/Tree.php:devel/pear-XML_Tree@${PHP_FLAVOR}

.include <bsd.port.mk>
