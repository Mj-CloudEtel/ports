PORTNAME=	CacheControl
DISTVERSION=	0.12.12
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Caching algorithms in httplib2 for use with requests session object
WWW=		https://github.com/ionrock/cachecontrol/

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msgpack>=0.5.2:devel/py-msgpack@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes
REINPLACE_ARGS=	-i ''

CONFLICTS_INSTALL=	py*-cachecontrol # bin/doesitcache

OPTIONS_DEFINE=		FILECACHE REDIS
OPTIONS_DEFAULT=	FILECACHE
FILECACHE_DESC=		FileCache support
REDIS_DESC=		Redis support

post-patch:
	@${REINPLACE_CMD} -e 's|msgpack-python|msgpack|' ${WRKSRC}/setup.py ${WRKSRC}/CacheControl.egg-info/requires.txt

.include <bsd.port.mk>
