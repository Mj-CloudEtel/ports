PORTNAME=	MDB2_Schema
PORTVERSION=	0.8.6
CATEGORIES=	databases www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR XML based database schema manager
WWW=		https://pear.php.net/package/MDB2_Schema

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PEARDIR}/MDB2.php:databases/pear-MDB2@${PHP_FLAVOR} \
		${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/DTD.php:textproc/pear-XML_DTD@${PHP_FLAVOR} \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/MDB2.php:databases/pear-MDB2@${PHP_FLAVOR} \
		${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/DTD.php:textproc/pear-XML_DTD@${PHP_FLAVOR} \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR}

USES=	pear

.include <bsd.port.mk>
