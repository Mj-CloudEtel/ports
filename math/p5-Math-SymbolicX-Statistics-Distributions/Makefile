PORTNAME=	Math-SymbolicX-Statistics-Distributions
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Statistical distributions
WWW=		https://metacpan.org/release/Math-SymbolicX-Statistics-Distributions

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Math-Symbolic>=0:math/p5-Math-Symbolic \
		p5-Math-SymbolicX-ParserExtensionFactory>=0:math/p5-Math-SymbolicX-ParserExtensionFactory
TEST_DEPENDS=	p5-Test-LectroTest>=0:devel/p5-Test-LectroTest

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
