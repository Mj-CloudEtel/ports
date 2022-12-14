PORTNAME=	smokeping
PORTVERSION=	2.8.2
PORTREVISION=	2
CATEGORIES=	net-mgmt www

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Latency logging and graphing system
WWW=		https://oss.oetiker.ch/smokeping/

LICENSE=	GPLv2

LIB_DEPENDS=	librrd.so:databases/rrdtool
BUILD_DEPENDS=	p5-CGI-Fast>=0:www/p5-CGI-Fast \
		p5-CGI-Session>=0:www/p5-CGI-Session \
		p5-Digest-HMAC>=0:security/p5-Digest-HMAC \
		p5-Net-SNMP>=0:net-mgmt/p5-Net-SNMP \
		p5-Net-DNS>=0:dns/p5-Net-DNS \
		p5-IO-Pty-Easy>=0:devel/p5-IO-Pty-Easy \
		p5-SNMP_Session>=0:net-mgmt/p5-SNMP_Session \
		p5-libwww>=0:www/p5-libwww \
		p5-LWP-Protocol-https>=0:www/p5-LWP-Protocol-https \
		p5-CGI>=0:www/p5-CGI \
		p5-FCGI>=0:www/p5-FCGI \
		p5-Config-Grammar>=0:devel/p5-Config-Grammar \
		p5-Socket6>=0:net/p5-Socket6 \
		p5-IO-Socket-SSL>=0:security/p5-IO-Socket-SSL \
		p5-Net-Telnet>=0:net/p5-Net-Telnet \
		p5-Net-OpenSSH>=0:net/p5-Net-OpenSSH \
		p5-perl-ldap>=0:net/p5-perl-ldap \
		p5-OrePAN2>=0:devel/p5-OrePAN2 \
		curl>=0:ftp/curl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		cpe gmake perl5 autoreconf

CONFLICTS_INSTALL=	nfsping

SUB_FILES=	pkg-deinstall pkg-message
SUB_LIST=	USERS=${USERS} \
		GROUPS=${GROUPS}

NO_ARCH=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	PERL=${PERL} PERL5LIB=${PREFIX}/smokeping/lib
CONFIGURE_ARGS+=	\
		--sysconfdir=${ETCDIR} \
		--localstatedir="${PREFIX}/var" \
		--with-htdocs-dir=${PREFIX}/smokeping/htdocs \
		--libdir=${PREFIX}/smokeping/lib
HTDOCSDIR=	${PREFIX}/smokeping/htdocs

USE_RC_SUBR=	smokeping

PKGDEINSTALL=	${WRKDIR}/pkg-deinstall

USERS=		smokeping
GROUPS=		smokeping

OPTIONS_DEFINE=	ECHOPING RADIUS TELNET DNS FPING EXAMPLES
OPTIONS_DEFAULT=	FPING

FPING_DESC=	Support for fping probes
FPING_RUN_DEPENDS=	${LOCALBASE}/sbin/fping:net/fping

ECHOPING_DESC=	Support for EchoPing probes
ECHOPING_RUN_DEPENDS=	${LOCALBASE}/bin/echoping:net/echoping

RADIUS_DESC=	Support for Radius probes
RADIUS_RUN_DEPENDS=	p5-Authen-Radius>=0:security/p5-Authen-Radius

TELNET_DESC=	Support for TelnetIOSPing probes
TELNET_RUN_DEPENDS=	p5-Net-Telnet>=0:net/p5-Net-Telnet

DNS_DESC=	Support for AnotherDNS probes
DNS_RUN_DEPENDS=	p5-Net-DNS>=0:dns/p5-Net-DNS

USE_GITHUB=	yes
GH_ACCOUNT=	oetiker
GH_PROJECT=	SmokePing

# We will take these from CPAN instead
post-extract:
	cd ${WRKSRC}/lib ; ${RM} BER.pm SNMP_util.pm SNMP_Session.pm

post-patch:
	${REINPLACE_CMD} ${SUB_LIST:S/$/!g/:S/^/ -e s!%%/:S/=/%%!/} \
		${WRKSRC}/doc/Makefile.am \
		${WRKSRC}/bin/smokeping \
		${WRKSRC}/bin/smokeping_cgi \
		${WRKSRC}/bin/tSmoke
	@for a in ${WRKSRC}/etc/*.dist; do \
		${MV} $$a $${a%.dist}.sample; \
	done
	${MV} ${WRKSRC}/etc/config.dist.in ${WRKSRC}/etc/config.sample.in

post-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/smokeping/htdocs/img
	${MKDIR} ${STAGEDIR}/${PREFIX}/var/smokeping

.include <bsd.port.mk>
