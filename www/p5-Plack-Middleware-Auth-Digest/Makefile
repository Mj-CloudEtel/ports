PORTNAME=	Plack-Middleware-Auth-Digest
PORTVERSION=	0.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Plack extension for digest authentication
WWW=		https://metacpan.org/release/Plack-Middleware-Auth-Digest

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Digest-HMAC>0:security/p5-Digest-HMAC \
	p5-Plack>0:www/p5-Plack
TEST_DEPENDS=	p5-Test-TCP>=0:devel/p5-Test-TCP

USES=		perl5
USE_PERL5=	modbuildtiny
NO_ARCH=	YES

.include <bsd.port.mk>
