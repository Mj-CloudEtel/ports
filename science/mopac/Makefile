PORTNAME=	mopac
PORTVERSION=	7.${MOPAC_SUBVERSION}
PORTREVISION=	8
PORTEPOCH=	1
CATEGORIES=	science # chemistry
MASTER_SITES=	http://bioinformatics.org/ghemical/download/%SUBDIR%/
MASTER_SITE_SUBDIR=	release20111012 current
DISTNAME=	mopac7-${MOPAC_SUBVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Semi-empirical (MNDO, etc.) molecular orbital calculation
WWW=		https://bioinformatics.org/ghemical/

LICENSE=	GPLv2+

USES=		fortran gmake libtool pathfix
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PORTEXAMPLES=	*

OPTIONS_DEFINE=	EXAMPLES

MOPAC_SUBVERSION=	1.15

post-patch:
	@${REINPLACE_CMD} -e '/usage/s|run_||g' \
		-e 's|./src/mopac7|${PREFIX}/libexec/mopac7|g' \
		${WRKSRC}/run_${PORTNAME}7

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/run_${PORTNAME}7 \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}7
	${INSTALL_PROGRAM} ${WRKSRC}/fortran/.libs/${PORTNAME}7 \
		${STAGEDIR}${PREFIX}/libexec/${PORTNAME}7
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/test
	${INSTALL_DATA} ${WRKSRC}/tests/*.dat ${STAGEDIR}${EXAMPLESDIR}/test

.include <bsd.port.mk>
