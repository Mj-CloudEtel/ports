PORTNAME=	App-GitHub
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	GitHub Command Tools
WWW=		https://metacpan.org/release/App-GitHub

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-JSON-XS>=2.3:converters/p5-JSON-XS \
		p5-Moose>=0:devel/p5-Moose \
		p5-Net-GitHub>=0.12:net/p5-Net-GitHub

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
