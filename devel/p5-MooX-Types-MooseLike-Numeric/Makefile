PORTNAME=	MooX-Types-MooseLike-Numeric
PORTVERSION=	1.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Moo types for numbers
WWW=		https://metacpan.org/release/MooX-Types-MooseLike-Numeric

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moo>=1.004002:devel/p5-Moo \
		p5-MooX-Types-MooseLike>=0.23:devel/p5-MooX-Types-MooseLike
TEST_DEPENDS=	p5-Test-Fatal>=0.003:devel/p5-Test-Fatal

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
