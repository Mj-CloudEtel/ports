PORTNAME=	MooseX-AuthorizedMethods
PORTVERSION=	0.006
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Syntax sugar for authorized methods
WWW=		https://metacpan.org/release/MooseX-AuthorizedMethods

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moose>=1.21:devel/p5-Moose \
		p5-aliased>=0:devel/p5-aliased

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
