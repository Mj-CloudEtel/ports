PORTNAME=	delta
PORTVERSION=	2006.08.03
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	LOCAL/eadler/delta

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Heuristically minimizes interesting files
WWW=		http://delta.tigris.org/

LICENSE=	BSD2CLAUSE

PLIST_FILES=	bin/delta bin/multidelta bin/topformflat

USES=		gmake perl5 shebangfix
USE_PERL5=	run
SHEBANG_FILES=	delta multidelta

CONFLICTS_INSTALL=	git-delta

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/delta ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/multidelta ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/topformflat ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
