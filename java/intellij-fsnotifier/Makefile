PORTNAME=	intellij-fsnotifier
PORTVERSION=	20160221
PORTREVISION=	6
CATEGORIES=	java devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Replacement for IntelliJ's fsnotifier
WWW=		https://github.com/t6/fsnotifier

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libinotify.so:devel/libinotify

USE_GITHUB=	yes
GH_ACCOUNT=	t6
GH_PROJECT=	fsnotifier
GH_TAGNAME=	a04fbff6e21d58fea7a3ed2a6a21e53cbef4b7af

USES=	compiler:c11

.include "${.CURDIR}/../intellij/common.mk"

PLIST_FILES=	${IDEA_HOME}/bin/fsnotifier

do-install:
	${MKDIR} ${STAGEDIR}${IDEA_HOME}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/fsnotifier ${STAGEDIR}${IDEA_HOME}/bin

.include <bsd.port.mk>
