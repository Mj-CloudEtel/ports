PORTNAME=	nerogame
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	games linux
MASTER_SITES=	http://nn.cs.utexas.edu/nero/downloads/
PKGNAMEPREFIX=	linux-
DISTNAME=	nero2_linux_i386

MAINTAINER=	craig001@lerwick.hopto.org
COMMENT=	Neuro evolving robotic operatives the game
WWW=		http://www.nerogame.org/

# Converted from RESTRICTED
LICENSE=	nero
LICENSE_NAME=	nero
LICENSE_TEXT=	Nero is freeware, but i am not sure of its license
LICENSE_PERMS=	auto-accept

USES=		linux
USE_LINUX=	dri libtheora libvorbis sdl12
NO_BUILD=	yes

SUB_FILES=	nerogame pkg-message
DATADIR=	share/${PKGNAMEPREFIX}${PORTNAME}
WRKSRC=		${WRKDIR}/${DISTNAME}

do-install:
	${BRANDELF} -t Linux ${WRKSRC}/nero.bin
	${INSTALL_PROGRAM} ${WRKSRC}/nero.bin ${STAGEDIR}${PREFIX}/libexec/${PKGNAMEPREFIX}${PORTNAME}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PKGNAMEPREFIX}${PORTNAME}

	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/${PKGNAMEPREFIX}${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/libopenal.so ${STAGEDIR}${PREFIX}/lib/${PKGNAMEPREFIX}${PORTNAME}

.for DIRE in common nero
	@${MKDIR} ${STAGEDIR}${PREFIX}/${DATADIR}/${DIRE}
	@cd ${WRKSRC}/${DIRE} && \
		${FIND} * -type d -exec ${MKDIR} "${STAGEDIR}${PREFIX}/${DATADIR}/${DIRE}/{}" \; && \
			${FIND} * -type f -exec ${INSTALL_DATA} {} "${STAGEDIR}${PREFIX}/${DATADIR}/${DIRE}/{}" \;
.endfor
	${INSTALL_DATA} ${WRKSRC}/main.cs ${STAGEDIR}${PREFIX}/${DATADIR}

	@${MKDIR} ${STAGEDIR}${PREFIX}/${DATADIR}/lib
	${LN} -s ${PREFIX}/lib/${PKGNAMEPREFIX}${PORTNAME}/libopenal.so ${STAGEDIR}${PREFIX}/${DATADIR}/lib/libopenal.so

.include <bsd.port.mk>
