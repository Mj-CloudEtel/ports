PORTNAME=	icingaweb2-module-vspheredb
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4.0
CATEGORIES=	net-mgmt www
PKGNAMESUFFIX=	${PHP_PKGNAMESUFFIX}

MAINTAINER=	gettoknowmi@yahoo.com
COMMENT= 	Easily Monitor Vsphere with Icinga
WWW=		https://github.com/Icinga/icingaweb2-module-vspheredb

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	icingaweb2${PHP_PKGNAMESUFFIX}>=2.5.0:net-mgmt/icingaweb2@${PHP_FLAVOR} \
		icingaweb2-module-reactbundle${PHP_PKGNAMESUFFIX}>0:net-mgmt/icingaweb2-module-reactbundle@${PHP_FLAVOR} \
		icingaweb2-module-incubator${PHP_PKGNAMESUFFIX}>0:net-mgmt/icingaweb2-module-incubator@${PHP_FLAVOR} \
		icingaweb2-module-ipl${PHP_PKGNAMESUFFIX}>0:net-mgmt/icingaweb2-module-ipl@${PHP_FLAVOR}

USES=		php:web,flavors mysql

USE_GITHUB=	yes
GH_ACCOUNT=	icinga

NO_BUILD=	yes
NO_ARCH=	yes

WWWDIR?=	${PREFIX}/www/icingaweb2/modules/${PORTNAME:C/^.*-//}

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	(cd ${WRKSRC} && \
		${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR})

.include <bsd.port.mk>
