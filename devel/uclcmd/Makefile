PORTNAME=	uclcmd
PORTVERSION=	0.1
PORTREVISION=	3
CATEGORIES=	devel

MAINTAINER=	allanjude@FreeBSD.org
COMMENT=	Command line tool for working with UCL config files
WWW=		https://github.com/allanjude/uclcmd/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libucl.so:textproc/libucl

USE_GITHUB=	yes
GH_ACCOUNT=	allanjude
GH_TAGNAME=	da1ac0f

USES=		pkgconfig
PLIST_FILES=	bin/uclcmd

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
