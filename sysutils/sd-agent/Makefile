PORTNAME=	sd-agent
DISTVERSION=	1.13.4
PORTREVISION=	1
CATEGORIES=	sysutils

MAINTAINER=	tim@wallago.co.uk
COMMENT=	Server Density Agent for FreeBSD
WWW=		https://www.serverdensity.com/

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${LOCALBASE}/sbin/sysinfo:sysutils/sysinfo

USERS=		sd-agent
GROUPS=		sd-agent

USE_GITHUB=	yes
GH_ACCOUNT=	serverdensity

USES=		python shebangfix
SHEBANG_FILES=	agent.py plugins.py

USE_RC_SUBR=	${PORTNAME}
SUB_LIST+=	RCNAME=${PORTNAME:S/-/_/g}

NO_ARCH=	yes

INSTALLDIR=	${STAGEDIR}${PREFIX}/libexec/${PORTNAME}
FLIST=		agent.py checks.py daemon.py logtail.py minjson.py pep8.sh plugins.py sd-deploy.py

do-build::
	${SED} -i .bak 's,%%PREFIX%%,${PREFIX},' ${WRKSRC}/agent.py

do-install::
	${MKDIR} ${INSTALLDIR}/plugins
.for f in ${FLIST}
	${INSTALL_SCRIPT} ${WRKSRC}/$f ${INSTALLDIR}
.endfor
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/config.cfg ${STAGEDIR}${ETCDIR}/config.cfg.sample

.include <bsd.port.mk>
