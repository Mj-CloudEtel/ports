PORTNAME=	gdma
DISTVERSIONPREFIX=	v
DISTVERSION=	2.2.6
PORTREVISION=	5
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Anthony Stone's Gaussian Distributed Multipole Analysis
WWW=		https://github.com/psi4/gdma

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake fortran
USE_GITHUB=	yes
GH_ACCOUNT=	psi4
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBUILD_SHARED_LIBS:BOOL=ON \
		-DENABLE_XHOST:BOOL=OFF \
		-DENABLE_OPENMP:BOOL=ON

.include <bsd.port.mk>
