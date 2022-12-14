PORTNAME=	rtorrent
PORTVERSION=	0.9.8
CATEGORIES=	net-p2p
MASTER_SITES=	https://rtorrent.net/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	BitTorrent Client written in C++
WWW=		https://github.com/rakshasa/rtorrent

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual
LICENSE_FILE_GPLv2=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcurl.so:ftp/curl \
		libtorrent.so:net-p2p/libtorrent

USES=		compiler:c++11-lang ncurses pkgconfig

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-debug
LDFLAGS+=	-lexecinfo -pthread

PLIST_FILES=	bin/rtorrent
PORTDOCS=	README
PORTEXAMPLES=	rtorrent.rc
SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS EXAMPLES IPV6 XMLRPC
OPTIONS_DEFAULT=XMLRPC
XMLRPC_DESC=	Compile with xmlrpc-c support

IPV6_CONFIGURE_ENABLE=	ipv6
XMLRPC_CONFIGURE_OFF=	--with-xmlrpc-c=no
XMLRPC_CONFIGURE_ON=	--with-xmlrpc-c
XMLRPC_LIB_DEPENDS=	libxmlrpc.so:net/xmlrpc-c

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|-O3|${CFLAGS}|' ${WRKSRC}/configure
.if ${OPSYS} == FreeBSD
	@${FIND} ${WRKSRC} \( -name '*.h' -o -name '*.cc' \) -type f \
		-exec ${REINPLACE_CMD} -e 's/tr1::/std::/g' {} \; \
		-exec ${REINPLACE_CMD} -e 's/std::std::/std::/g' {} \; \
		-exec ${REINPLACE_CMD} -e '/namespace tr1/d' {} \; \
		-exec ${REINPLACE_CMD} -e '/include/s,tr1/,,' {} \;
.endif

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}/

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/doc/rtorrent.rc ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
