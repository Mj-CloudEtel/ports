PORTNAME=	LiveUser_Admin
PORTVERSION=	0.4.0
PORTREVISION=	1
CATEGORIES=	security www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PEAR user authentication and permission management framework
WWW=		https://pear.php.net/package/LiveUser_Admin

BUILD_DEPENDS=	${PEARDIR}/LiveUser.php:security/pear-LiveUser@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/LiveUser.php:security/pear-LiveUser@${PHP_FLAVOR}

OPTIONS_DEFINE=	PEAR_DB PEAR_MDB PEAR_MDB2 PEAR_LOG PEAR_XML_TREE PEAR_CRYPT_RC4

PEAR_DB_DESC=	PEAR::DB support
PEAR_MDB_DESC=	PEAR::MDB support
PEAR_MDB2_DESC=	PEAR::MDB2 support
PEAR_LOG_DESC=	PEAR::Log support
PEAR_XML_TREE_DESC=	PEAR::XML_Tree support
PEAR_CRYPT_RC4_DESC=	PEAR::Crypt_RC4 support

USES=		pear

PEAR_DB_RUN_DEPENDS=	${PEARDIR}/DB.php:databases/pear-DB@${PHP_FLAVOR}
PEAR_MDB_RUN_DEPENDS=	${PEARDIR}/MDB.php:databases/pear-MDB@${PHP_FLAVOR}
PEAR_MDB2_RUN_DEPENDS=	${PEARDIR}/MDB2.php:databases/pear-MDB2@${PHP_FLAVOR}
PEAR_LOG_RUN_DEPENDS=	${PEARDIR}/Log.php:sysutils/pear-Log@${PHP_FLAVOR}
PEAR_XML_TREE_RUN_DEPENDS=	${PEARDIR}/XML/Tree.php:devel/pear-XML_Tree@${PHP_FLAVOR}
PEAR_CRYPT_RC4_RUN_DEPENDS=	${PEARDIR}/Crypt/Rc4.php:security/pear-Crypt_RC4@${PHP_FLAVOR}

.include <bsd.port.mk>
