PORTNAME=	medit
PORTVERSION=	2012.02.05
PORTREVISION=	5
CATEGORIES=	science graphics
MASTER_SITES=	https://www.ljll.math.upmc.fr/~frey/ftp/archives/
DISTFILES=	${SOURCETARB} ${LIBTARBALL}
EXTRACT_ONLY=	${SOURCETARB}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Interactive meshes visualization
WWW=		https://www.ljll.math.upmc.fr/frey/software.html #scivis

LICENSE=	None
LICENSE_NAME=	Special grant
LICENSE_TEXT=	Special grant from the author
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

BUILD_DEPENDS=	${LOCALBASE}/include/cfortran.h:lang/cfortran

USES=		gl gmake tar:tgz xorg
USE_XORG=	x11 xmu xext
USE_GL=		gl glu glut
MAKEFILE=	makefile
ALL_TARGET=	${OPSYS}
MAKE_ENV=	WRKSRC="${WRKSRC}" ARCHI=${OPSYS} ARCH=${ARCH} OSREL=${OSREL}
NO_WRKSUBDIR=	yes
MAKE_JOBS_UNSAFE=	yes
LLD_UNSAFE=	yes

LIBVERSION=	${PORTVERSION}
SOURCETARB=	${PORTNAME}.${PORTVERSION}${EXTRACT_SUFX}
LIBTARBALL=	library.${LIBVERSION}${EXTRACT_SUFX}

PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	EXAMPLES

.include <bsd.port.options.mk>

. if ${PORT_OPTIONS:MEXAMPLES} || make(makesum)
DISTFILES+=	meshes.tar.gz
EXTRACT_ONLY+=	meshes.tar.gz
MESHES=		DEFAULT.medit ozark.gis part.bb part.mesh thepart.mesh
PLIST_FILES+=	${MESHES:S|^|%%EXAMPLESDIR%%/|}
. endif

post-extract:
	cd ${WRKSRC} &&	\
	${EXTRACT_CMD} ${EXTRACT_BEFORE_ARGS} ${_DISTDIR}/${LIBTARBALL} ${EXTRACT_AFTER_ARGS} --exclude ${MAKEFILE}
	${CP} ${FILESDIR}/gttime.c ${WRKSRC}/sources/
.for l in lplib2.c lplib2.h
	${MV} ${WRKSRC}/sources/${l} ${WRKSRC}/sources/${l}.old
.endfor

pre-build:
	${MKDIR} ${WRKSRC}/bin/${ARCH}/${OSREL}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${MESHES:S|^|${WRKSRC}/INRIA.dir/|} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
