PORTNAME=	popt
PORTVERSION=	1.18
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://ftp.rpm.org/popt/releases/popt-1.x/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Getopt(3) like library with a number of enhancements, from Redhat
WWW=		http://freshmeat.net/projects/popt/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe iconv libtool pathfix

CPE_VENDOR=	popt_project

TEST_TARGET=	check

OPTIONS_DEFINE=	NLS

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=	gettext-runtime localbase
OPTIONS_SUB=	yes

.include <bsd.port.mk>
