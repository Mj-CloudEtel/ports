PORTNAME=	django-rich
PORTVERSION=	1.4.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}dj40-

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Extensions for using Rich with Django
WWW=		https://github.com/adamchainz/django-rich

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django40>=3.2:www/py-django40@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}rich>=10.0.0:textproc/py-rich@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist distutils

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}*${PORTNAME}

NO_ARCH=		yes

.include <bsd.port.mk>
