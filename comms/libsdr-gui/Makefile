PORTNAME=	libsdr-gui
PORTVERSION=	0.1.0
PORTREVISION=	4
DISTVERSIONPREFIX=	v
CATEGORIES=	comms hamradio

MAINTAINER=	jeff@baitis.net
COMMENT=	GUI functions (e.g. waterfall) for libsdr library
WWW=		https://github.com/hmatuschek/libsdr-gui

LICENSE=	GPLv2

LIB_DEPENDS=	libfftw3.so:math/fftw3 \
		libfftw3f.so:math/fftw3-float \
		libsdr.so:comms/libsdr

USE_GITHUB=	yes
GH_ACCOUNT=	hmatuschek

USE_QT=		core buildtools:build qmake widgets
USES=		cmake compiler:c++11-lang pkgconfig qt:5
USE_LDCONFIG=	yes

.include <bsd.port.mk>
