PORTNAME=	Catalyst-Plugin-StackTrace
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Display a stack trace on the debug screen
WWW=		https://metacpan.org/release/Catalyst-Plugin-StackTrace

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Devel-StackTrace>=0:devel/p5-Devel-StackTrace \
		p5-MRO-Compat>=0.10:devel/p5-MRO-Compat

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
