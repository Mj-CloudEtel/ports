PORTNAME=	hunspell
PORTVERSION=	20110323
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	MOZILLA_ADDONS/addons/46601
PKGNAMEPREFIX=	ve-
DISTNAME=	venda_spell_checker-${PORTVERSION}-tb+fn+fx+sm
EXTRACT_SUFX=	.xpi
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Venda hunspell dictionaries
WWW=		https://addons.mozilla.org/en-US/firefox/addon/venda-spell-checker/

NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/dictionaries

PLIST_FILES=	${DATADIR}/ve.aff \
		${DATADIR}/ve.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/ve-ZA.aff ${STAGEDIR}${DATADIR}/ve.aff
	${INSTALL_DATA} ${WRKSRC}/ve-ZA.dic ${STAGEDIR}${DATADIR}/ve.dic

.include <bsd.port.mk>
