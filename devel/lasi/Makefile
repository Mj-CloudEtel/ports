PORTNAME=	lasi
PORTVERSION=	1.1.3
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}%20Source
DISTNAME=	libLASi-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C++ stream output interface for creating Postscript documents
WWW=		https://www.unifont.org/lasi/

LIB_DEPENDS=	libltdl.so:devel/libltdl

OPTIONS_DEFINE=	DOXYGEN EXAMPLES
OPTIONS_SUB=	yes

USES=		cmake compiler:c++11-lang gnome pathfix pkgconfig
PATHFIX_CMAKELISTSTXT=	pkg-config.cmake
USE_GNOME=	pango

USE_LDCONFIG=	yes

CMAKE_ARGS+=	-DCMAKE_INSTALL_DATADIR:PATH=${DATADIR}

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOXYGEN}
BUILD_DEPENDS+=	${LOCALBASE}/bin/doxygen:devel/doxygen
.else
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-cmake+modules+lasi.cmake
.endif

pre-install:
.if ! ${PORT_OPTIONS:MEXAMPLES}
	@${REINPLACE_CMD} 's/^\(add_subdirectory(examples)\)/#\1/' \
		${WRKSRC}/CMakeLists.txt
.endif

post-install:
	@${MV} ${STAGEDIR}${PREFIX}/lib/libLASi.so.2.0.0 \
		${STAGEDIR}${PREFIX}/lib/libLASi.so.2
.if ${PORT_OPTIONS:MDOXYGEN}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${MV} ${STAGEDIR}${DATADIR}/doc/* ${STAGEDIR}${DOCSDIR}/
	@${RMDIR} ${STAGEDIR}${DATADIR}/doc
.endif
.if ${PORT_OPTIONS:MEXAMPLES}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@${MV} ${STAGEDIR}${DATADIR}/examples/* ${STAGEDIR}${EXAMPLESDIR}/
	@${RMDIR} ${STAGEDIR}${DATADIR}/examples
.endif
.if ! ${PORT_OPTIONS:MDOXYGEN} && ! ${PORT_OPTIONS:MEXAMPLES}
	@${RM} -r ${STAGEDIR}${DATADIR}/*
.endif
	@${TEST} -d ${STAGEDIR}${DATADIR} && \
		${RMDIR} ${STAGEDIR}${DATADIR} || ${TRUE}

.include <bsd.port.mk>
