PORTNAME=	Catalyst-Plugin-Authorization-Roles
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Role based authorization for Catalyst
WWW=		https://metacpan.org/release/Catalyst-Plugin-Authorization-Roles

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Catalyst-Plugin-Authentication>=0.10003:www/p5-Catalyst-Plugin-Authentication \
		p5-Set-Object>=1.14:devel/p5-Set-Object \
		p5-UNIVERSAL-isa>=0.05:devel/p5-UNIVERSAL-isa
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

post-extract:
	@${REINPLACE_CMD} -e '/^test_requires/d' ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
