PORTNAME=	django-cacheops
PORTVERSION=	6.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Slick ORM cache with automatic granular event-driven invalidation
WWW=		https://github.com/Suor/django-cacheops

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django32>=2.1:www/py-django32@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}redis>=3.0.0:databases/py-redis@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}funcy>=1.8<2.0:devel/py-funcy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.4.0:devel/py-six@${PY_FLAVOR}

USES=		python:3.5+
USE_PYTHON=	autoplist distutils

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}*${PORTNAME}

NO_ARCH=		yes

.include <bsd.port.mk>
