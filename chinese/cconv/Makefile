PORTNAME=	cconv
PORTVERSION=	0.6.3
DISTVERSIONPREFIX=	v
CATEGORIES=	chinese converters

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simplified-Traditional Chinese conversion tool
WWW=		https://github.com/xiaoyjy/cconv

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/License

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES=		autoreconf iconv libtool

GH_ACCOUNT=	xiaoyjy
USE_GITHUB=	yes

CONFLICTS_INSTALL=	libunicode # include/unicode.h

.include <bsd.port.pre.mk>

.if !empty(ICONV_LIB)
CONFIGURE_ENV+=	ICONV_DIR=${ICONV_PREFIX}
.endif

.include <bsd.port.post.mk>
