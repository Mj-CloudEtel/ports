PORTNAME=	hunspell
PORTVERSION=	20110323
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	MOZILLA_ADDONS/addons/46617
PKGNAMEPREFIX=	tn-
DISTNAME=	tswana_spell_checker-${PORTVERSION}-tb+sm+fx+fn
EXTRACT_SUFX=	.xpi
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Tswana hunspell dictionaries
WWW=		https://addons.mozilla.org/en-US/firefox/addon/tswana-spell-checker/

NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/dictionaries

PLIST_FILES=	${DATADIR}/tn_BW.aff \
		${DATADIR}/tn_BW.dic \
		${DATADIR}/tn_ZA.aff \
		${DATADIR}/tn_ZA.dic

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/tn-ZA.aff ${STAGEDIR}${DATADIR}/tn_ZA.aff
	${INSTALL_DATA} ${WRKSRC}/tn-ZA.dic ${STAGEDIR}${DATADIR}/tn_ZA.dic
	${LN} -s tn_ZA.aff ${STAGEDIR}${DATADIR}/tn_BW.aff
	${LN} -s tn_ZA.dic ${STAGEDIR}${DATADIR}/tn_BW.dic

.include <bsd.port.mk>
