PORTNAME=	libyaml
PORTVERSION=	0.2.5
CATEGORIES=	textproc
MASTER_SITES=	https://pyyaml.org/download/libyaml/
DISTNAME=	yaml-${PORTVERSION}

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	YAML 1.1 parser and emitter written in C
WWW=		https://pyyaml.org/wiki/LibYAML

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/License

USES=		cpe gmake libtool pathfix

GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip
CPE_VENDOR=	pyyaml
USE_LDCONFIG=	yes
TEST_TARGET=	check

.include <bsd.port.mk>
