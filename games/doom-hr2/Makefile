PORTNAME=	hr2
PORTVERSION=	1.0
CATEGORIES=	games
MASTER_SITES=	http://www.doomworld.com/hr2/
PKGNAMEPREFIX=	${DMPKGNAMEPREFIX}
DISTNAME=	hr2final

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Hell Revealed II is a megawad, a 32-level replacement for DooM II
WWW=		https://www.doomworld.com/hr2/

USES=		zip
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

DATADIR=	${DMDIR}/${PORTNAME}

PLIST_FILES=	%%DATADIR%%/hr2final.wad
PLIST_DIRS=	%%DATADIR%%
PORTDOCS=	hr2final.txt

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/hr2final.wad ${STAGEDIR}${DATADIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/hr2final.txt ${STAGEDIR}${DOCSDIR}

.include "${.CURDIR}/../doom-data/Makefile.include"

.include <bsd.port.mk>
