PORTNAME=	Sub-Signatures
PORTVERSION=	0.21
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use proper signatures for subroutines, including dispatching
WWW=		https://metacpan.org/release/Sub-Signatures

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Sub-Uplevel>=0.12:devel/p5-Sub-Uplevel
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
