PORTNAME=	usbtop
DISTVERSIONPREFIX=	release-
DISTVERSION=	1.0
PORTREVISION=	7
CATEGORIES=	sysutils

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Utility that shows an estimated instantaneous USB bandwidth
WWW=		https://github.com/aguinet/usbtop

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	boost-libs>0:devel/boost-libs

USES=		cmake compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	aguinet
CMAKE_ON=	Boost_USE_STATIC_LIBS

PLIST_FILES=	sbin/usbtop

.include <bsd.port.mk>
