PORTNAME=	sqtop
DISTVERSIONPREFIX=	v
DISTVERSION=	2015-02-08
CATEGORIES=	net

MAINTAINER=	coco@executive-computing.de
COMMENT=	Console-based display of Squid proxy connections
WWW=		https://github.com/paleg/sqtop/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	paleg

PLIST_FILES=	bin/sqtop \
		man/man1/sqtop.1.gz

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		NCURSES
OPTIONS_DEFAULT=	NCURSES

NCURSES_CONFIGURE_ENABLE=	ui
NCURSES_USES=	ncurses

.include <bsd.port.mk>
