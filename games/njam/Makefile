PORTNAME=	njam
PORTVERSION=	1.25
PORTREVISION=	12
CATEGORIES=	games
MASTER_SITES=	https://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Fast paced multiplayer pac-man clone
WWW=		https://web.archive.org/web/20190405231140/http://njam.sourceforge.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		gmake localbase sdl
USE_SDL=	mixer image net sdl

PORTDOCS=	*
PORTDATA=	*

DESKTOP_ENTRIES="njam" \
		"${COMMENT}" \
		"${DATADIR}/njamicon.ico" \
		"${PORTNAME}" \
		"Game;ArcadeGame;" \
		""

OPTIONS_DEFINE=	DOCS

post-extract:
	@${RM} ${WRKSRC}/src/*.o

post-patch:
	@${REINPLACE_CMD} -e 's|/var/lib/games|/var/games|' \
		${WRKSRC}/src/njam.cpp
	@${REINPLACE_CMD} -e 's,#ifdef __linux__,#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__),; \
		s,#ifndef __linux__,#if !defined(__linux__) \&\& !defined(__FreeBSD__) \&\& !defined(__DragonFly__),' \
		${WRKSRC}/src/*.cpp ${WRKSRC}/src/*.h

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/html/* ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
