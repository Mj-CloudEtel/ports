PORTNAME=	dtc
PORTVERSION=	1.6.0
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

PATCH_SITES=	https://github.com/dgibson/dtc/commit/
PATCHFILES+=	ca19c3db2b.patch:-p1 # https://github.com/dgibson/dtc/pull/41

MAINTAINER=	uboot@FreeBSD.org
COMMENT=	Device Tree Compiler
WWW=		https://git.kernel.org/cgit/utils/dtc/dtc.git

LICENSE=	GPLv2

LIB_DEPENDS=	libyaml.so:textproc/libyaml

USES=		bison compiler:c11 cpe gmake pkgconfig shebangfix
CPE_VENDOR=	${PORTNAME}_project
USE_GITHUB=	yes
GH_ACCOUNT=	dgibson
USE_LDCONFIG=	yes
SHEBANG_FILES=	dtdiff

TEST_TARGET=	check
TEST_ENV=	STATSZ="stat -f %Uz"

MAKE_ARGS+=	PREFIX=${PREFIX} NO_PYTHON=yes \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		INSTALL_LIB="${INSTALL_LIB}"

.include <bsd.port.mk>
