PORTNAME=	openldap-plugins
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://tools.ltb-project.org/attachments/download/629/ \
		ZI
PKGNAMEPREFIX=	nagios-
DISTNAME=	ltb-project-nagios-plugins-${PORTVERSION}

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Nagios Plugins to monitor OpenLDAP
WWW=		https://ltb-project.org/wiki/documentation/

LICENSE=	GPLv2

RUN_DEPENDS=	p5-perl-ldap>=0:net/p5-perl-ldap \
		p5-Date-Manip>=6.30:devel/p5-Date-Manip

PORTSCOUT=	ignore:1

NO_ARCH=	yes
NO_BUILD=	yes
USES=		perl5 shebangfix
USE_PERL5=	run
SHEBANG_FILES=	check_*.pl

PLIST_FILES=	libexec/nagios/check_berkeleydb_locks.pl \
		libexec/nagios/check_ldap_dn.pl \
		libexec/nagios/check_ldap_query.pl \
		libexec/nagios/check_ldap_monitor.pl \
		libexec/nagios/check_ldap_slurpd_status.pl \
		libexec/nagios/check_ldap_syncrepl_status.pl \
		libexec/nagios/check_ldap_time.pl \
		libexec/nagios/restart_slapd.sh

WRKSRC=		${WRKDIR}/${DISTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|/etc/init.d/|${LOCALBASE}/etc/rc.d/|g' \
		-e 's|/var/run/slapd|/var/run/openldap|g' \
		${WRKSRC}/restart_slapd.sh
	@${REINPLACE_CMD} -e 's|/usr/local/nagios/libexec|${PREFIX}/libexec/nagios|g' \
		${WRKSRC}/*.pl

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	@(cd ${WRKSRC} && ${COPYTREE_BIN} . ${STAGEDIR}${PREFIX}/libexec/nagios/)

.include <bsd.port.mk>
