PORTNAME=	v1541commander
PORTVERSION=	1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	archivers emulators

MAINTAINER=	zirias@FreeBSD.org
COMMENT=	Virtual 1541 disk commander
WWW=		https://github.com/excess-c64/v1541commander

LICENSE=	BSD2CLAUSE STYLEFONT
LICENSE_COMB=	multi
LICENSE_NAME_STYLEFONT=		The STYLE C64 TrueType Fonts License
LICENSE_FILE_STYLEFONT=		${WRKSRC}/LICENSE-font.txt
LICENSE_PERMS_STYLEFONT=	dist-mirror no-dist-sell pkg-mirror \
				no-pkg-sell auto-accept

LIB_DEPENDS=	lib1541img.so:archivers/lib1541img

USES=		compiler:c++11-lang gmake pkgconfig qt:5 shared-mime-info

USE_QT=		core gui network widgets buildtools:build linguisttools:build

USE_GITHUB=	yes
GH_PROJECT=	zimk:zimk
GH_ACCOUNT=	excess-c64 Zirias:zimk
GH_TAGNAME=	31500ca:zimk

OPTIONS_DEFINE=	DOCS

MAKE_ARGS=	pkgconfigdir=${LOCALBASE}/libdata/pkgconfig \
		V=1
MAKE_ENV=	DEFAULT_MOC=${MOC} \
		DEFAULT_RCC=${RCC} \
		LRELEASE=${LRELEASE}
ALL_TARGET=	strip

post-extract:
	@${MV} ${WRKSRC_zimk}/* ${WRKSRC}/zimk/

.include <bsd.port.mk>
