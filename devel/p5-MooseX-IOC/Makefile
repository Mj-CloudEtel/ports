PORTNAME=	MooseX-IOC
PORTVERSION=	0.03
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Moose attributes with IOC integration
WWW=		https://metacpan.org/release/MooseX-IOC

BUILD_DEPENDS=	p5-IOC>=0:devel/p5-IOC \
		p5-Moose>=0:devel/p5-Moose
RUN_DEPENDS=	p5-IOC>=0:devel/p5-IOC \
		p5-Moose>=0:devel/p5-Moose
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
