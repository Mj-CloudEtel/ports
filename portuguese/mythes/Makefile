PORTNAME=	mythes
PORTVERSION=	2006.08.17
PORTREVISION=	1
CATEGORIES=	portuguese textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
DISTNAME=	thes_pt_PT_v2-${PORTVERSION:C/\.//g}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Portuguese thesaurus
WWW=		http://openthesaurus.caixamagica.pt/

LICENSE=	GPLv2

USES=		zip
NO_ARCH=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	${DATADIR}/th_pt_BR_v2.dat \
		${DATADIR}/th_pt_BR_v2.idx \
		${DATADIR}/th_pt_PT_v2.dat \
		${DATADIR}/th_pt_PT_v2.idx

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/th_pt_PT_v2.dat ${WRKSRC}/th_pt_PT_v2.idx ${STAGEDIR}${DATADIR}/
	${LN} -s th_pt_PT_v2.dat ${STAGEDIR}${DATADIR}/th_pt_BR_v2.dat
	${LN} -s th_pt_PT_v2.idx ${STAGEDIR}${DATADIR}/th_pt_BR_v2.idx

.include <bsd.port.mk>
