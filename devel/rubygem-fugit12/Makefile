PORTNAME=	fugit
PORTVERSION=	1.2.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	12

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Time tools for flor and the floraison project
WWW=		https://github.com/floraison/fugit

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-et-orbi>=1.1.8<2:devel/rubygem-et-orbi \
		rubygem-raabro>=1.1<2:textproc/rubygem-raabro

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

# Disable rdoc
OPTIONS_EXCLUDE=DOCS

PORTSCOUT=	limit:^1\.2\.

.include <bsd.port.mk>
