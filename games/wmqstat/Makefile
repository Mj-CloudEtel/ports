PORTNAME=	wmqstat
PORTVERSION=	0.0.4
PORTREVISION=	2
CATEGORIES=	games windowmaker
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/wmQStat%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockapp for monitoring of various Internet game servers
WWW=		http://wmqstat.sourceforge.net/

LICENSE=	GPLv2

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: display
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: display

RUN_DEPENDS=	qstat:games/qstat

USES=		xorg
USE_XORG=	xpm x11 xext

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

# Unbreak the build against Clang
post-patch:
	@${REINPLACE_CMD} -e 's, inline,,' ${WRKSRC}/wmgeneral/list.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
