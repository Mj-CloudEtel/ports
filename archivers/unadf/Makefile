PORTNAME=	unadf
PORTVERSION=	0.7.12
PORTREVISION=	2
CATEGORIES=	archivers

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Extracts files from .adf-files used by Amiga emulators
WWW=		http://lclevy.free.fr/adflib/unadf.html

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf cpe libtool pathfix tar:bzip2

USE_GITHUB=	yes
GH_ACCOUNT=	lclevy
GH_PROJECT=	ADFlib
GH_TAGNAME=	f3af9e0

CPE_VENDOR=	unadf_project

USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--includedir=${PREFIX}/include/adflib
INSTALL_TARGET=	install-strip

DOCSDIR=	${PREFIX}/share/doc/adflib

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
