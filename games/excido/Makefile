PORTNAME=	excido
PORTVERSION=	0.1.5c
PORTREVISION=	17
CATEGORIES=	games
MASTER_SITES=	https://icculus.org/${PORTNAME}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Portable fast-paced 3D shooter
WWW=		https://icculus.org/excido/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libphysfs.so:devel/physfs

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USES=		compiler:c++11-lang gl gmake openal:al,alut sdl tar:bzip2
USE_GL=		gl glu
USE_SDL=	image sdl ttf

LDFLAGS_i386=	-Wl,-znotext

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/excido ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC}/data ; ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
