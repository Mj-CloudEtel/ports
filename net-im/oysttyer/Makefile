PORTNAME=	oysttyer
PORTVERSION=	2.10.0
CATEGORIES=	net-im

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Interactive console text-based command-line Twitter client
WWW=		https://oysttyer.github.io/docs/userGuide.html

LICENSE=	FFSL
LICENSE_NAME=	Floodgap Free Software License
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

RUN_DEPENDS=	curl:ftp/curl \
		p5-TimeDate>=2.30:devel/p5-TimeDate

USES=		perl5 shebangfix
USE_GITHUB=	yes
SHEBANG_FILES=	oysttyer.pl
PLIST_FILES=	bin/oysttyer

NO_ARCH=	yes
NO_BUILD=	yes

do-install:
	${INSTALL} ${WRKSRC}/oysttyer.pl ${STAGEDIR}${PREFIX}/bin/oysttyer

.include <bsd.port.mk>
