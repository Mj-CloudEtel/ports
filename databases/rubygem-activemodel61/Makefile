PORTNAME=	activemodel
PORTVERSION=	6.1.6.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	61

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Toolkit for building modeling frameworks
WWW=		https://github.com/rails/rails/tree/main/activemodel

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport61>=${PORTVERSION}:devel/rubygem-activesupport61

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^6\.1\.

.include <bsd.port.mk>
