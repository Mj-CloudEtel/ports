PORTNAME=	MooseX-Clone
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fine grained cloning support for Moose objects
WWW=		https://metacpan.org/release/MooseX-Clone

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Visitor>=0.24:devel/p5-Data-Visitor \
		p5-Hash-Util-FieldHash-Compat>=0:devel/p5-Hash-Util-FieldHash-Compat \
		p5-Moose>=0:devel/p5-Moose \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
