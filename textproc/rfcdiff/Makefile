PORTNAME=	rfcdiff
PORTVERSION=	1.33
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://tools.ietf.org/tools/${PORTNAME}/
DISTNAME=	${PORTNAME}-v${PORTVERSION}
EXTRACT_SUFX=

MAINTAINER=	lars.eggert@gmx.net
COMMENT=	Compare two versions of an Internet Draft and produce a diff
WWW=		https://tools.ietf.org/tools/rfcdiff/

RUN_DEPENDS=	bash:shells/bash \
		gawk:lang/gawk \
		wdiff:textproc/wdiff

EXTRACT_CMD=	${CP}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	${WRKSRC}
NO_WRKSUBDIR=	YES
NO_BUILD=	YES

PLIST_FILES=	bin/rfcdiff

post-patch:
	@${REINPLACE_CMD} -e 's|/bin/bash|${LOCALBASE}/bin/bash|' \
		${WRKSRC}/${DISTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
