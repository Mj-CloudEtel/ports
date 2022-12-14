PORTNAME=	libranlip
DISTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	math
MASTER_SITES=	LOCAL/bf \
		http://www.deakin.edu.au/~gleb/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Random variate generator for Lipschitz-continuous densities
WWW=		https://www.deakin.edu.au/~gleb/ranlip.html

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

INFO=		ranlip
PLIST_FILES=	include/ranlip.h include/ranlipdist.h include/ranlipproc.h lib/libranlip.so.1.0.0 \
		lib/libranlip.so.1 lib/libranlip.so lib/libranlip.a
PORTDOCS=	ranlip.ps
PORTEXAMPLES=	makefile ranliptest.cpp ranliptestproc.cpp
TESTPROGS=	static_example static_example2 static_example3 shared_example

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libranlip.so

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/ranlip.ps ${STAGEDIR}${DOCSDIR}

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
.for _file in ${PORTEXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/examples/${_file} ${STAGEDIR}${EXAMPLESDIR}
.endfor

do-test:
	@(cd ${WRKSRC}/examples && ${SETENV} ${MAKE_ENV} ${MAKE} ${_MAKE_JOBS} ${MAKE_ARGS} all)
.for _prog in ${TESTPROGS}
	(cd ${WRKSRC}/examples && ${SETENV} LD_LIBRARY_PATH="${STAGEDIR}${PREFIX}/lib" ./${_prog})
.endfor

.include <bsd.port.mk>
