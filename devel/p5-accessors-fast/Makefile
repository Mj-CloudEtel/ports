PORTNAME=	accessors-fast
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MONS
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Wrap fastest Class::Accessor::* into pragma
WWW=		https://metacpan.org/release/accessors-fast

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor-Fast-XS>=0:devel/p5-Class-Accessor-Fast-XS \
		p5-constant-def>=0.01:devel/p5-constant-def \
		p5-Class-C3>=0:devel/p5-Class-C3
TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings \
		p5-lib-abs>=0.90:devel/p5-lib-abs

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
