PORTNAME=	MooseX-Types-VariantTable
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Type constraint based variant table
WWW=		https://metacpan.org/release/MooseX-Types-VariantTable

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-MooseX-Types-Structured>=0.12:devel/p5-MooseX-Types-Structured \
		p5-MooseX-Clone>=0.03:devel/p5-MooseX-Clone
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
