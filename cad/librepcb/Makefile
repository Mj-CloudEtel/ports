PORTNAME=	librepcb
DISTVERSION=	0.1.6
DISTVERSIONSUFFIX=	-source
PORTREVISION=	1
CATEGORIES=	cad
MASTER_SITES=	https://download.librepcb.org/releases/${DISTVERSION}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Schematic and PCB editing software
WWW=		https://librepcb.org/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		cmake compiler:c++11-lang desktop-file-utils gl qt:5 shared-mime-info zip
USE_QT=		concurrent core gui network opengl printsupport sql svg xml widgets \
		buildtools:build linguisttools:build testlib:build qmake:build
USE_GL=		gl

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}

.include <bsd.port.mk>
