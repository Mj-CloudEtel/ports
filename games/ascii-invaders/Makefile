PORTNAME=	ascii-invaders
PORTVERSION=	1.0.1
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	games

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	ASCII-art game like Space Invaders using Curses
WWW=		https://github.com/macdice/ascii-invaders

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	macdice

USES=		ncurses

CFLAGS+=	-isystem${LOCALBASE}/include -isystem${NCURSESINC}
LDFLAGS+=	-L${NCURSESLIB} -ltinfo

PLIST_FILES=	bin/ascii_invaders

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ascii_invaders ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
