PORTNAME=	griels-quest
PORTVERSION=	git20150512
PORTREVISION=	1
CATEGORIES=	games

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Griel's Quest for the Sangraal
WWW=		https://github.com/nevat/griels-quest

LICENSE=	GPLv3

USES=		sdl
USE_GITHUB=	yes
GH_ACCOUNT=	nevat
GH_TAGNAME=	0282e6a2e3

PORTSCOUT=	skipv:1.00,v1.00  # git repo contains required portability fixes after 1.00

USE_SDL=	sdl mixer image ttf gfx

DATADIR=	${PREFIX}/share/griels

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/griels

.include <bsd.port.mk>
