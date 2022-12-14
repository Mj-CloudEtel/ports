PORTNAME=	openmdns
DISTVERSION=	0.7
PORTREVISION=	3
CATEGORIES=	net

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multicast DNS and Service Discovery daemon
WWW=		http://www.haesbaert.org/openmdns/

LICENSE=	ISCL

USE_GITHUB=	yes
GH_ACCOUNT=	haesbaert
GH_PROJECT=	mdnsd

CONFLICTS_INSTALL=	mDNSResponder # sbin/mdnsd

USES=		localbase uidfix
USE_RC_SUBR=	mdnsd
MAKE_ENV=	LDADD="${LIBS}"
MAKE_ARGS=	BINDIR="${PREFIX}/sbin" \
		MANDIR="${PREFIX}/share/man/man"
CFLAGS+=	-D__dead=__dead2
LDFLAGS+=	-Wl,--as-needed # -lutil
LIBS+=		-lopenbsd
SUB_LIST=	COMMENT="${COMMENT}"
PLIST_FILES=	sbin/mdnsctl \
		sbin/mdnsd \
		share/man/man8/mdnsctl.8.gz \
		share/man/man8/mdnsd.8.gz
PORTDOCS=	*

USERS=		_mdnsd
GROUPS=		_mdnsd

OPTIONS_DEFINE=	DOCS STATIC

STATIC_BUILD_DEPENDS=	${LOCALBASE}/lib/libevent.a:devel/libevent \
			${LOCALBASE}/lib/libopenbsd.a:devel/libopenbsd
STATIC_MAKE_ENV=	NO_SHARED=1
STATIC_LIB_DEPENDS_OFF=	libevent.so:devel/libevent \
			libopenbsd.so:devel/libopenbsd

post-patch:
# warning: duplicate script for target "maninstall" ignored
	@${REINPLACE_CMD} '/bsd\.man\.mk/d' ${WRKSRC}/*/Makefile

post-install-DOCS-on:
	(cd ${WRKSRC}/docs && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
