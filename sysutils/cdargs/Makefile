PORTNAME=	cdargs
PORTVERSION=	1.35
CATEGORIES=	sysutils
MASTER_SITES=	http://www.skamphausen.de/downloads/cdargs/ \
		http://fossies.org/unix/privat/ \
		http://www.atarininja.org/~wxs/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Navigate the filesystem using a menu interface or a bookmark system
WWW=		https://www.skamphausen.de/cgi-bin/ska/CDargs

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		ncurses
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/cdargs man/man1/cdargs.1.gz

post-patch:
	@${REINPLACE_CMD} -e \
		's|^AM_CXXFLAGS|#AM_CXXFLAGS|' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
