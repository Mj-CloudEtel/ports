PORTNAME=	cutmp3
PORTVERSION=	3.0.1
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	http://www.puchalla-online.de/ \
		http://mirror.mcx2.org/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small and fast command line MP3 editor
WWW=		https://www.puchalla-online.de/cutmp3.html

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:bzip2 readline

PLIST_FILES=	bin/cutmp3 man/man1/cutmp3.1.gz

PORTDOCS=	README README.timetable USAGE

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
