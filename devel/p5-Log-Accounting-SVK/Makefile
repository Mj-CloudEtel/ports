PORTNAME=	Log-Accounting-SVK
PORTVERSION=	0.05
PORTREVISION=	10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	Perl module for accounting SVK repository
WWW=		https://metacpan.org/release/GUGOD/Log-Accounting-SVK-0.05

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	svk>=0:devel/svk \
		p5-Spiffy>=0:devel/p5-Spiffy \
		p5-Graph-SocialMap>=0:graphics/p5-Graph-SocialMap \
		p5-Graph-Writer-GraphViz>=0:graphics/p5-Graph-Writer-GraphViz \
		p5-Algorithm-Accounting>=0:devel/p5-Algorithm-Accounting

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
