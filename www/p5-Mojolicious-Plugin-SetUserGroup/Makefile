PORTNAME=	Mojolicious-Plugin-SetUserGroup
PORTVERSION=	1.000
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DBOOK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mojolicious plugin to set unprivileged credentials
WWW=		https://metacpan.org/pod/Mojolicious::Plugin::SetUserGroup

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Mojolicious>=6.0:www/p5-Mojolicious \
		p5-Unix-Groups-FFI>=0:devel/p5-Unix-Groups-FFI

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuildtiny

.include <bsd.port.mk>
