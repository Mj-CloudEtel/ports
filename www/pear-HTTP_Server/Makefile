PORTNAME=	HTTP_Server
PORTVERSION=	0.4.1
CATEGORIES=	www devel pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTTP server class
WWW=		https://pear.php.net/package/HTTP_Server

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:www/pear-HTTP@${PHP_FLAVOR} \
		${PEARDIR}/Net/Server.php:net/pear-Net_Server@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/HTTP.php:www/pear-HTTP@${PHP_FLAVOR} \
		${PEARDIR}/Net/Server.php:net/pear-Net_Server@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
