PORTNAME=	artwiz-ru
PORTVERSION=	20041031
PORTREVISION=	4
CATEGORIES=	russian x11-fonts
MASTER_SITES=	http://dev.gentoo.org/~sergey/ \
		LOCAL/novel
DISTNAME=	artwiz_ru

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Russian Artwiz fonts
WWW=		http://dev.gentoo.org/~sergey/artwiz.html

USES=		fonts tar:bzip2
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/fonts
SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.pcf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
