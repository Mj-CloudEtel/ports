PORTNAME=	ebsynth
PORTVERSION=	0.0.0.20190510
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	FreeBSD@ShaneWare.biz
COMMENT=	Example-based Image Synthesis and Style Transfer
WWW=		https://ebsynth.com

LICENSE=	PD

USE_GITHUB=	yes
GH_ACCOUNT=	jamriska
GH_TAGNAME=	2f5c97c0c21a

PLIST_FILES=	bin/ebsynth

.if !exists(/usr/include/omp.h)
USES=		compiler:gcc-c++11-lib
.else
USES=		compiler:c++11-lang
.endif

do-build:
	@(cd ${BUILD_WRKSRC} && ${CXX} src/ebsynth.cpp \
		src/ebsynth_cpu.cpp src/ebsynth_nocuda.cpp \
		-DNDEBUG -O3 -fopenmp -Iinclude -I${LOCALBASE}/include \
		-L${LOCALBASE}/lib -std=c++11 -o ebsynth)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ebsynth ${STAGEDIR}${LOCALBASE}/bin

.include <bsd.port.mk>
