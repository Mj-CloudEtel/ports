PORTNAME=	Catalyst-ActionRole-ACL
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BOBTFISH
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	User role-based authorization action class
WWW=		https://metacpan.org/release/Catalyst-ActionRole-ACL

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Controller-ActionRole>=0:www/p5-Catalyst-Controller-ActionRole \
		p5-Catalyst-Runtime>=5.90013:www/p5-Catalyst-Runtime \
		p5-Moose>=0:devel/p5-Moose \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
