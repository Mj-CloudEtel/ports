PORTNAME=	octomap
DISTVERSIONPREFIX=	v
DISTVERSION=	1.9.8
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Efficient probabilistic 3D mapping framework based on octrees
WWW=		https://octomap.github.io/

LICENSE=	BSD3CLAUSE GPLv2
LICENSE_COMB=	dual
LICENSE_FILE_BSD3CLAUSE=	${WRKSRC}/octomap/LICENSE.txt
LICENSE_FILE_GPLv2=	${WRKSRC}/octovis/LICENSE.txt

LIB_DEPENDS=	libQGLViewer-qt5.so:graphics/libQGLViewer

USES=		cmake:testing compiler:c++11-lang localbase:ldflags gl qt:5
USE_QT=		core gui opengl xml widgets buildtools:build qmake:build
USE_GL=		gl glu
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	OctoMap

# Viewer is broken: https://github.com/OctoMap/octomap/issues/224, and libQGLViewer detection is broken: https://github.com/OctoMap/octomap/issues/225
#CMAKE_ON=	OCTOVIS_QT5
CMAKE_ARGS=	-DQGLVIEWER_BASE_DIR:PATH=${LOCALBASE}/include/QGLViewer #-DQGLViewer_LIBRARY_DIR_OTHER:PATH=${LOCALBASE}/lib

.include <bsd.port.mk>
