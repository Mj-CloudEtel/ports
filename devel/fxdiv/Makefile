PORTNAME=	fxdiv
PORTVERSION=	g20181121
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C/C++ header-only library for division via FP inverse multiplication
WWW=		https://github.com/Maratyszcza/FXdiv

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake
USE_GITHUB=	yes
GH_ACCOUNT=	Maratyszcza
GH_PROJECT=	FXdiv
GH_TAGNAME=	f8c5354
USE_LDCONFIG=	yes

CMAKE_OFF=	FXDIV_BUILD_TESTS FXDIV_BUILD_BENCHMARKS

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	include/fxdiv.h

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DFXDIV_BUILD_TESTS:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
