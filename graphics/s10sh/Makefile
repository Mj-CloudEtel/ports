PORTNAME=	s10sh
PORTVERSION=	0.2.2
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	http://www.reynoldsnet.org/s10sh/ \
		http://www.edwinh.org/s10sh/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	USB/serial userspace driver for the Canon PowerShot digital cameras
WWW=		http://www.reynoldsnet.org/s10sh/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_aarch64=	Fails to build: error: cannot find the byte order for this architecture, fix bytesex.h
BROKEN_armv6=	Fails to build: error: cannot find the byte order for this architecture, fix bytesex.h
BROKEN_armv7=	Fails to build: error: cannot find the byte order for this architecture, fix bytesex.h
BROKEN_riscv64=	Fails to build: error: cannot find the byte order for this architecture, fix bytesex.h

USES=		ncurses readline

# Don't extract the libusb bundled with s10sh:
EXTRACT_AFTER_ARGS=	--exclude '*/libusb*'

MAKEFILE=	${FILESDIR}/Makefile.bsd

PORTDOCS=	README
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
