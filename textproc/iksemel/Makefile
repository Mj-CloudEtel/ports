PORTNAME=	iksemel
PORTVERSION=	1.5
CATEGORIES=	textproc

MAINTAINER=	ports@FreeBSD.org
COMMENT=	XML parser library mainly designed for Jabber applications
WWW=		https://github.com/meduketto/iksemel

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgnutls.so:security/gnutls

USES=		autoreconf libtool makeinfo pathfix pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	meduketto
GH_TAGNAME=	978b733

USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-gnutls=yes \
		--without-openssl \
		--disable-python
CPPFLAGS+=	${CXXFLAGS} -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

INSTALL_TARGET=	install-strip

INFO=		iksemel

post-patch:
	@${REINPLACE_CMD} -e 's|@setfilename iksemel|@setfilename iksemel.info|' \
	    ${WRKSRC}/doc/iksemel.texi

.include <bsd.port.mk>
