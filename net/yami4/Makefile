PORTNAME=	yami4
PORTVERSION=	1.11.0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://www.inspirel.com/yami4/files/
DISTNAME=	yami4-gpl-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Messaging library for distributed systems
WWW=		http://www.inspirel.com/yami4/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/gpl-3.0.txt

BROKEN_FreeBSD_13=	unknown type name 'sem_t'
BROKEN_FreeBSD_14=	unknown type name 'sem_t'

USES=		compiler:c++11-lang zip

MAKE_ARGS=	COMPILER="${CXX}" OPTIONS="${CXXFLAGS}"

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-build :
	${DO_MAKE_BUILD} -C ${WRKSRC}/src/core
	${DO_MAKE_BUILD} -C ${WRKSRC}/src/cpp

do-install:
	cd ${WRKSRC}/include && ${COPYTREE_SHARE} "yami4-core yami4-cpp" ${STAGEDIR}${PREFIX}/include
	cd ${WRKSRC}/lib && ${INSTALL_DATA} *.a ${STAGEDIR}${PREFIX}/lib

do-install-DOCS-on:
	cd ${WRKSRC}/doc && ${COPYTREE_SHARE} "core cpp" ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
