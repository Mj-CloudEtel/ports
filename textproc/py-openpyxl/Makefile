PORTNAME=	openpyxl
PORTVERSION=	2.6.4
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Python library to read/write Excel 2007 xlsx/xlsm files
WWW=		https://openpyxl.readthedocs.org/

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}jdcal>=0:devel/py-jdcal@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}et_xmlfile>=0:textproc/py-et_xmlfile@${PY_FLAVOR}

NO_ARCH=	yes
PORTSCOUT=	limit:^2\.	# Version 3 drops python 2.7 compatibility
USES=		cpe python:3.6+
CPE_VENDOR=	python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
