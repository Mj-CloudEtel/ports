PORTNAME=	olive
DISTVERSION=	0.1.2
PORTREVISION=	1
CATEGORIES=	multimedia
PKGNAMESUFFIX=	-video-editor

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	NLE (nonlinear) video editor
WWW=		https://www.olivevideoeditor.org/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	frei0r>0:graphics/frei0r
LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		libOpenColorIO.so:graphics/opencolorio
RUN_DEPENDS=	frei0r>0:graphics/frei0r

USES=		dos2unix qmake compiler:c++11-lang desktop-file-utils gl pkgconfig qt:5 shared-mime-info
USE_GITHUB=	yes
GH_ACCOUNT=	olive-editor
DOS2UNIX_FILES=	olive.pro \
		ui/graphview.cpp \
		ui/timelineheader.cpp
USE_QT=		core gui multimedia network opengl svg widgets buildtools:build linguisttools:build
USE_GL=		gl

DATADIR=	${PREFIX}/share/olive-editor

PORTSCOUT=	limit:^.*[1-9]\..* # prevent tags like 20181223

.include <bsd.port.mk>
