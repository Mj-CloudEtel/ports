PORTNAME=	knightcap
PORTVERSION=	3.6
PORTREVISION=	9
CATEGORIES=	games
MASTER_SITES=	http://ftp.samba.org/pub/KnightCap/ \
		ftp://ftp.samba.org/pub/KnightCap/
DISTNAME=	KnightCap-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Chess program with 3D interface for X Window System
WWW=		https://samba.anu.edu.au/KnightCap/

WRKSRC=		${WRKDIR}/Export

USES=		gl xorg
USE_XORG=	xmu xt xext x11 xi
USE_GL=		glut
ALL_TARGET=	KnightCap

OPTIONS_DEFINE=	DOCS

DOCSDIR=	${PREFIX}/share/doc/KnightCap
PORTDOCS=	README
PLIST_FILES=	bin/KnightCap

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/KnightCap ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
