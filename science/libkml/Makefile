PORTNAME=	libkml
PORTVERSION=	1.3.0
PORTREVISION=	25
CATEGORIES=	science

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Reference implementation of OGC KML 2.2
WWW=		https://github.com/libkml/libkml

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	boost-libs>=1.44.0:devel/boost-libs
LIB_DEPENDS=	libboost_thread.so:devel/boost-libs \
		libexpat.so:textproc/expat2 \
		liburiparser.so:net/uriparser

USES=		cmake compiler:c11 minizip pathfix

CMAKE_OFF=	BUILD_TESTING WITH_JAVA WITH_PYTHON WITH_SWIG
CMAKE_ON=	BUILD_SHARED_LIBS
USE_CXXSTD=	gnu++98
USE_LDCONFIG=	yes

USE_GITHUB=	yes

OPTIONS_DEFINE=	EXAMPLES

EXAMPLES_CMAKE_BOOL=	BUILD_EXAMPLES INSTALL_EXAMPLES
EXAMPLES_CMAKE_ON=	-DKML_EXAMPLES_DIR=${EXAMPLESDIR}
EXAMPLES_LIB_DEPENDS=	libcurl.so:ftp/curl

.include <bsd.port.mk>
