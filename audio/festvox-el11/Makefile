PORTNAME=	festvox-el11
PORTVERSION=	1.4.0
PORTREVISION=	2
CATEGORIES=	audio accessibility spanish
MASTER_SITES=	FESTIVAL/1.95
DISTNAME=	festvox_ellpc11k
DIST_SUBDIR=	festival

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Castilian Spanish male voice for Festival
WWW=		https://www.cstr.ed.ac.uk/projects/festival/

RUN_DEPENDS=	festival:audio/festival

WRKSRC=		${WRKDIR}/festival

CONFLICTS=	festvox-rab8

NO_BUILD=	yes

FHOME=		${PREFIX}/share/festival

do-install:
	@${MKDIR} ${STAGEDIR}${FHOME}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${FHOME}
	${RM} ${STAGEDIR}${PREFIX}/share/festival/lib/voices/spanish/el_diphone/COPYING

.include <bsd.port.mk>
