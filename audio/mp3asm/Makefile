PORTNAME=	mp3asm
PORTVERSION=	0.1.3.1
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF/mp3asm/mp3asm/${PORTVERSION:R}-${PORTVERSION:E}
DISTNAME=	mp3asm-${PORTVERSION:R}-${PORTVERSION:E}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	MP3 frame level editor
WWW=		https://sourceforge.net/projects/mp3asm/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake tar:bzip2

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/mp3asm
PORTDOCS=	Changelog README
WRKSRC=		${WRKDIR}/mp3asm-${PORTVERSION:R:R}

OPTIONS_DEFINE=	DOCS

post-patch:
	@${RM} ${WRKSRC}/config.cache

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
