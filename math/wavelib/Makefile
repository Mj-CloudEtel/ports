PORTNAME=	wavelib
DISTVERSION=	g20200528
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Wavelet Transform (DWT, SWT and MODWT)
WWW=		https://github.com/rafat/wavelib

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		cmake dos2unix
DOS2UNIX_FILES=	auxiliary/CMakeLists.txt
USE_GITHUB=	yes
GH_ACCOUNT=	rafat
GH_TAGNAME=	f104d084be91cc7e59dc3253bedceb11ece77136
USE_LDCONFIG=	yes

CMAKE_OFF=	BUILD_UT

.include <bsd.port.mk>
