PORTNAME=	sgwi
PORTVERSION=	1.1.8
PORTREVISION=	1
CATEGORIES=	mail www
MASTER_SITES=	http://www.vanheusden.com/sgwi/ \
		https://www.freebsd.systems/files/
DISTNAME=	sqlgreywebinterface-${PORTVERSION}

MAINTAINER=	lukasz@wasikowski.net
COMMENT=	PHP web interface to SQLGrey
WWW=		http://www.vanheusden.com/sgwi/

LICENSE=	GPLv2

USES=		tar:tgz php:web
NO_BUILD=	yes
SUB_FILES+=	pkg-message pkg-install
SUB_LIST=	WWWOWN=${WWWOWN} WWWGRP=${WWWGRP}

OPTIONS_SINGLE=	BACKEND
OPTIONS_SINGLE_BACKEND=	MYSQL PGSQL SQLITE3

MYSQL_DESC=	MySQL back-end (use mysql PHP extension)
PGSQL_DESC=	PostgreSQL back-end (use pgsql PHP extension)
SQLITE3_DESC=	SQLite3 back-end (use pgsql PHP extension)

OPTIONS_DEFAULT=MYSQL

MYSQL_USE=	PHP=mysqli
PGSQL_USE=	PHP=pgsql
SQLITE3_USE=	PHP=sqlite3

post-patch:
		${FIND} ${WRKSRC} -name '*.orig' -delete

do-install:
		@${MV} ${WRKSRC}/includes/config.inc.php ${WRKSRC}/includes/config.inc.php.sample
		@${MKDIR} ${STAGEDIR}${WWWDIR}
		@${MKDIR} ${STAGEDIR}${WWWDIR}/includes
		${INSTALL_DATA} ${WRKSRC}/*.php ${STAGEDIR}${WWWDIR}
		${INSTALL_DATA} ${WRKSRC}/*.txt ${STAGEDIR}${WWWDIR}
		${INSTALL_DATA} ${WRKSRC}/*.css ${STAGEDIR}${WWWDIR}
		${INSTALL_DATA} ${WRKSRC}/.ht* ${STAGEDIR}${WWWDIR}
		${INSTALL_DATA} ${WRKSRC}/includes/*.sample ${STAGEDIR}${WWWDIR}/includes/
		${INSTALL_DATA} ${WRKSRC}/includes/*.php ${STAGEDIR}${WWWDIR}/includes/

.include <bsd.port.mk>
