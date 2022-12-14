PORTNAME=	ilias
PORTVERSION=	6.18
DISTVERSIONPREFIX=	v
CATEGORIES=	www education
PKGNAMESUFFIX=	6${PHP_PKGNAMESUFFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Powerful, dynamic, PHP and MySQL based e-learning platform
WWW=		https://www.ilias.de

LICENSE=	GPLv2

CONFLICTS=	ilias-7.[0-9]*

DEPRECATED=	Requires php 7.4 which is set to expire on 2022-11-29
EXPIRATION_DATE=2022-11-28

RUN_DEPENDS=	composer:devel/php-composer \
		zip:archivers/zip \
		${UNZIP_CMD}:archivers/unzip \
		${LOCALBASE}/share/pear/PEAR.php:devel/pear@${PHP_FLAVOR} \
		${LOCALBASE}/share/pear/Auth/Auth.php:security/pear-Auth@${PHP_FLAVOR} \
		${LOCALBASE}/share/pear/MDB2.php:databases/pear-MDB2@${PHP_FLAVOR} \
		${LOCALBASE}/share/pear/HTML/Template/IT.php:devel/pear-HTML_Template_IT@${PHP_FLAVOR}
LIB_DEPENDS=	libpng.so:graphics/png

USE_GITHUB=	yes
GH_ACCOUNT=	ILIAS-eLearning
GH_PROJECT=	ILIAS

USES=		cpe jpeg magick:6,run php
IGNORE_WITH_PHP=	80 81 82

NO_BUILD=	yes
PLIST=		${WRKDIR}/plist
USE_PHP=	curl dom fileinfo gd iconv ldap pdo_mysql \
		pdf pcre session simplexml \
		soap tokenizer xmlrpc xmlreader xmlwriter xsl zlib
ILIASDIR=	www/ilias
ILIASDATADIR=	www/iliasdata
PLIST_SUB=	ILIASDATADIR=${ILIASDATADIR}
SUB_FILES=	pkg-message
SUB_LIST=	ILIASDATADIR=${ILIASDATADIR}

OPTIONS_DEFINE=		SCORM2004 CHECKER MAIL
SCORM2004_USE=		php=json
CHECKER_RUN_DEPENDS=	${LOCALBASE}/share/pear/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}
MAIL_RUN_DEPENDS=	${LOCALBASE}/share/pear/Mail.php:mail/pear-Mail@${PHP_FLAVOR}

EXTRA_FILES=	%%WWWDIR%%/Modules/Chatroom/chat/node_modules/.bin/mime \
		%%WWWDIR%%/Modules/Chatroom/chat/node_modules/.bin/uuid

pre-install:
	@${ECHO_CMD} "@owner ${WWWOWN}" >> ${PLIST}
	@${ECHO_CMD} "@group ${WWWGRP}" >> ${PLIST}
	@${ECHO_CMD} "@mode 755" >> ${PLIST}
	@${FIND} -s -d ${WRKSRC} -type f | ${SED} "s?${WRKSRC}?${ILIASDIR}?g" >> ${PLIST}
.for i in ${EXTRA_FILES}
	@${ECHO_CMD} ${i} >> ${PLIST}
.endfor
	@${ECHO} @dir ${ILIASDIR} >> ${PLIST}
	@${ECHO} @dir ${ILIASDATADIR} >> ${PLIST}
	@${ECHO_CMD} "@mode" >> ${PLIST}
	@${ECHO_CMD} "@group" >> ${PLIST}
	@${ECHO_CMD} "@owner" >> ${PLIST}

do-install:
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}
	@${INSTALL} -d ${STAGEDIR}${PREFIX}/${ILIASDATADIR}

.include <bsd.port.mk>
