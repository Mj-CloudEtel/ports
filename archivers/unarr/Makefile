PORTNAME=	unarr
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.1
CATEGORIES=	archivers

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Decompression library for RAR, TAR, ZIP and 7z* archives
WWW=		https://github.com/selmf/unarr

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_riscv64=		fails to build: Hard-float 'd' ABI can't be used for a target that doesn't support the D instruction set extension

USES=		cmake
USE_GITHUB=	yes
USE_LDCONFIG=	yes
GH_ACCOUNT=	selmf

post-patch:
.if ${/usr/bin/ld:L:tA} != /usr/bin/ld.lld
	@${REINPLACE_CMD} 's/ -flto//' ${WRKSRC}/CMakeLists.txt
.endif

.include <bsd.port.mk>
