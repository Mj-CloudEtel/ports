PORTNAME=	aprsd
PORTVERSION=	2.2.515
PORTREVISION=	3
CATEGORIES=	comms hamradio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/2.2.5-15
DISTNAME=	aprsd-2.2.5-15

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Server daemon providing Internet access to APRS packet data
WWW=		https://sourceforge.net/projects/aprsd/

LICENSE=	GPLv2

BROKEN_FreeBSD_12_powerpc64=	fails to link on powerpc64 elfv1: httpserver.o:(.text+0x1074): undefined reference to `convertUpTime(int)'

GNU_CONFIGURE=	yes
SUB_FILES=	pkg-message
USE_RC_SUBR=	aprsd

USERS=	aprsd tnc
GROUPS=	aprsd dialer tnc
APRSD_RC_USER=	aprsd
APRSD_RC_GROUP=	aprsd

SUB_LIST=	APRSD_RC_USER=${APRSD_RC_USER} \
		APRSD_RC_GROUP=${APRSD_RC_GROUP}

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e 's|%%CONFPATH%%|${PREFIX}/etc/aprsd/|' \
	    -e 's|%%LOGPATH%%|/var/log/aprsd/|' \
		    ${WRKSRC}/src/aprsd.cpp
	${REINPLACE_CMD} -e 's|%%LOGPATH%%|/var/log/aprsd/|' \
	    ${WRKSRC}/src/utils.cpp

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/aprsd
	${MKDIR} ${STAGEDIR}"/var/log/aprsd"

post-install:
	@cd ${WRKSRC}/admin
.for	f in INIT.TNC RESTORE.TNC aprsd.conf welcome.txt user.deny
	${INSTALL_DATA} ${WRKSRC}/admin/$f ${STAGEDIR}${PREFIX}/etc/aprsd/$f.samp
.endfor
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
.for	f in chkaprsd udp_example
	${INSTALL_DATA} ${WRKSRC}/admin/$f ${STAGEDIR}${EXAMPLESDIR}
.endfor
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${CP} ${WRKSRC}/doc/*.html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.post.mk>
