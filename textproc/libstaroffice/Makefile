PORTNAME=	libstaroffice
PORTVERSION=	0.0.7
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	LODEV
MASTER_SITE_SUBDIR=	#

MAINTAINER=	office@FreeBSD.org
COMMENT=	Library to build a filter for old StarOffice's documents
WWW=		https://github.com/fosnola/libstaroffice

LICENSE=	LGPL21+ MPL20
LICENSE_COMB=	dual

BUILD_DEPENDS=	${LOCALBASE}/include/boost/shared_ptr.hpp:devel/boost-libs
LIB_DEPENDS=	librevenge-0.0.so:textproc/librevenge

USES=		compiler:c++11-lib cpe libtool pathfix pkgconfig tar:xz
CPE_VENDOR=	${PORTNAME}_project
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--without-docs
CPPFLAGS+=	-I${LOCALBASE}/include

LIBVERSION=	${PORTVERSION}
PLIST_SUB+=	LIBVERSION=${LIBVERSION}

.include <bsd.port.mk>
