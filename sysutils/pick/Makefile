PORTNAME=	pick
PORTVERSION=	4.0.0
CATEGORIES=	sysutils
MASTER_SITES=	https://github.com/mptre/pick/releases/download/v${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for choosing one option from a set of choices with an interface
WWW=		https://github.com/mptre/pick

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		ncurses
HAS_CONFIGURE=	yes
MAKE_ARGS=	INSTALL="${INSTALL_PROGRAM}"
PLIST_FILES=	bin/pick \
		man/man1/pick.1.gz

.include <bsd.port.mk>
