PORTNAME=	txrequests
PORTVERSION=	0.9.6
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Asynchronous Python HTTP for Humans
WWW=		https://github.com/tardyp/txrequests

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=1.2.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}twisted>=9.0.0:devel/py-twisted@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

TEST_ENV=	PYTHONPATH=${TEST_WRKSRC}

do-test:
	@cd ${WRKSRC} && ${SETENV} ${TEST_ENV} ${LOCALBASE}/bin/trial ${WRKSRC}/test_txrequests.py

.include <bsd.port.mk>
