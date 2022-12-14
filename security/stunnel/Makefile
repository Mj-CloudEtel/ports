PORTNAME=	stunnel
DISTVERSION=	5.65
PORTEPOCH=	1
CATEGORIES=	security
MASTER_SITES=	https://www.stunnel.org/downloads/archive/5.x/ \
		https://ftp.nluug.nl/pub/networking/stunnel/archive/5.x/ \
		http://ftp.nluug.nl/pub/networking/stunnel/archive/5.x/

MAINTAINER=	zi@FreeBSD.org
COMMENT=	SSL encryption wrapper for standard network daemons
WWW=		https://www.stunnel.org/

# FIXME: IMHO, there really ought to be a GPL-2+ option or some such.
LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

USES=		cpe libtool perl5 shebangfix ssl
USE_PERL5=	build
USE_LDCONFIG=	yes
USE_RC_SUBR=	stunnel

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=/var/tmp --enable-static --disable-systemd \
		${CONFIGURE_ARGS_SSL}
SHEBANG_FILES=	src/stunnel3.in
SUB_FILES=	daemon.conf
SUB_LIST=	STUNNEL_PIDFILE=${STUNNEL_PIDFILE} \
		STUNNEL_USER=${STUNNEL_USER} \
		STUNNEL_GROUP=${STUNNEL_GROUP}

OPTIONS_DEFINE=			DOCS EXAMPLES FIPS IPV6 LIBWRAP
OPTIONS_SINGLE=			THREAD
OPTIONS_SINGLE_THREAD=		FORK PTHREAD UCONTEXT
OPTIONS_DEFAULT=		PTHREAD

FIPS_CONFIGURE_ENABLE=		fips
IPV6_CONFIGURE_ENABLE=		ipv6
LIBWRAP_CONFIGURE_ENABLE=	libwrap

# OPNsense addition
OPTIONS_DEFINE+=		TLS_LOG_IDENT
TLS_LOG_IDENT_DESC=		Send out ident messages for remote server connections
TLS_LOG_IDENT_EXTRA_PATCHES+=	${FILESDIR}/extra-patch-tls-ident

FIPS_DESC=			Enable OpenSSL FIPS mode
FORK_DESC=			Use the fork(3) threading model
PTHREAD_DESC=			Use the pthread(3) threading model
UCONTEXT_DESC=			Use the ucontext(3) threading model

STUNNEL_PIDFILE=/var/run/stunnel/stunnel.pid
STUNNEL_USER?=	stunnel
STUNNEL_GROUP?=	stunnel

USERS=		${STUNNEL_USER}
GROUPS=		${STUNNEL_GROUP}

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MLIBWRAP}
LDFLAGS+=		-lwrap
.endif

.if ${PORT_OPTIONS:MUCONTEXT}
CONFIGURE_ARGS+=--with-threads=ucontext
LDFLAGS+=	-lpthread
.elif ${PORT_OPTIONS:MFORK}
CONFIGURE_ARGS+=--with-threads=fork
.else
CONFIGURE_ARGS+=--with-threads=pthread
LDFLAGS+=	-lpthread
.endif

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MFIPS} && ${SSL_DEFAULT:Mlibressl*}
IGNORE=		LibreSSL does not support FIPS standard
.endif

.if ${SSL_DEFAULT:Mlibressl*}
. ifnmake describe
STAGEDIR_openssl!=	${MAKE} -V STAGEDIR -C ${PORTSDIR}/security/openssl
. endif
BUILD_DEPENDS+=		${NONEXISTENT}:security/openssl:stage
CONFIGURE_ARGS_SSL=	--with-ssl="${STAGEDIR_openssl}${LOCALBASE}"

post-configure:
	${REINPLACE_CMD} 's|-lssl|${STAGEDIR_openssl}${LOCALBASE}/lib/libssl.a|g' \
		 ${WRKSRC}/src/Makefile
	${REINPLACE_CMD} 's|-lcrypto|${STAGEDIR_openssl}${LOCALBASE}/lib/libcrypto.a|g' \
		${WRKSRC}/src/Makefile
.else
CONFIGURE_ARGS_SSL=	--with-ssl="${OPENSSLBASE}"
.endif

post-patch:
# place files under /var/tmp so that this can be run by an unprivileged
# user stunnel and group stunnel
	@${REINPLACE_CMD} -E -e 's|\@prefix\@/var/lib/stunnel/|/var/tmp/stunnel|; \
		s|nobody|stunnel|;s|nogroup|stunnel|;s|;include |include |' \
		${WRKSRC}/tools/stunnel.conf-sample.in
	@${REINPLACE_CMD} -E -e 's|\$$\(prefix\)/var/run/stunnel/stunnel.pid|$$(localstatedir)/stunnel.pid|' \
		${WRKSRC}/src/Makefile.in
	@${FIND} ${WRKSRC} -type f -name Makefile.in | ${XARGS} ${REINPLACE_CMD} -E -e 's,@(ACLOCAL|AUTO(MAKE|CONF|HEADER))@,/usr/bin/true,'
	@${REINPLACE_CMD} -E -e 's|install-confDATA install-data-local|install-confDATA|g' \
		${WRKSRC}/tools/Makefile.in
.if empty(PORT_OPTIONS:MDOCS)
	@${REINPLACE_CMD} -E -e 's/ install-docDATA/ /' ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -E -e '/install-data-am/s,install-docDATA,,' ${WRKSRC}/doc/Makefile.in
.endif
.if empty(PORT_OPTIONS:MEXAMPLES)
	@${REINPLACE_CMD} -E -e 's/([^n])install-examplesDATA/\1/' \
		${WRKSRC}/tools/Makefile.in
.else
	@${REINPLACE_CMD} -E -e 's|\$$\(docdir\)/examples|${EXAMPLESDIR}|g' ${WRKSRC}/tools/Makefile.in
.endif

post-build:
	@${STRIP_CMD} ${WRKSRC}/src/.libs/libstunnel.so

post-install:
	${MKDIR} ${STAGEDIR}${ETCDIR}/conf.d/
	${INSTALL_DATA} ${WRKDIR}/daemon.conf ${STAGEDIR}${ETCDIR}/conf.d/00-daemon.conf

cert:
	@${ECHO} ""
	@${ECHO} "**************************************************************************"
	@${ECHO} "The new certificate will be saved into ${ETCDIR}/stunnel.pem"
	@${ECHO} "**************************************************************************"
	@${ECHO} ""
	@(cd ${WRKSRC}/tools/; make cert)

.include <bsd.port.post.mk>
