PORTNAME=	python-djvulibre
DISTVERSION=	0.8.7
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python support for the DjVu image format
WWW=		https://jwilk.net/software/python-djvulibre

LICENSE=	GPLv2

LIB_DEPENDS=	libdjvulibre.so:graphics/djvulibre

USES=		python:3.6+ pkgconfig
USE_PYTHON=	distutils cython autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/djvu/*.so

.include <bsd.port.mk>
