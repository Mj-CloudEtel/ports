PORTNAME=	rundeck
DISTVERSION=	2.11.14
CATEGORIES=	sysutils java
MASTER_SITES=	http://dl.bintray.com/rundeck/rundeck-maven/
PKGNAMESUFFIX=	2
DISTNAME=	rundeck-launcher-${PORTVERSION}
EXTRACT_SUFX=	.jar

MAINTAINER=	daniel.tihanyi@tetragir.com
COMMENT=	Web-console for dispatching commands and scripts to your nodes
WWW=		https://rundeck.org

LICENSE=	APACHE20

USE_JAVA=	yes
JAVA_VERSION=	1.8+

CONFLICTS_INSTALL=	rundeck3

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_SUB=	RUNDECK_USER=${RUNDECK_USER} RUNDECK_GROUP=${RUNDECK_GROUP}

USES=		cpe
CPE_VENDOR=	pagerduty
USE_RC_SUBR=	rundeck

RUNDECK_HOME=	${PREFIX}/rundeck
RUNDECK_USER?=	rundeck
RUNDECK_GROUP?=	rundeck
RUNDECK_LOG_FILE?=	/var/log/rundeck.log

.if ${RUNDECK_USER} == "rundeck"
USERS=	rundeck
.endif
.if ${RUNDECK_GROUP} == "rundeck"
GROUPS=	rundeck
.endif

SUB_LIST+=	RUNDECK_HOME=${RUNDECK_HOME} RUNDECK_USER=${RUNDECK_USER} \
		RUNDECK_GROUP=${RUNDECK_GROUP} JAVA_HOME=${JAVA_HOME} \
		RUNDECK_LOG_FILE=${RUNDECK_LOG_FILE}

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR} ${STAGEDIR}${RUNDECK_HOME}/server/lib
	${INSTALL_DATA} ${DISTDIR}/${DIST_SUBDIR}/${DISTNAME}${EXTRACT_SUFX} \
		${STAGEDIR}${DATADIR}/rundeck-launcher${EXTRACT_SUFX}

.include <bsd.port.mk>
