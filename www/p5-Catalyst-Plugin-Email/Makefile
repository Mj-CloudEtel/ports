PORTNAME=	Catalyst-Plugin-Email
PORTVERSION=	0.09
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Send emails with Catalyst
WWW=		https://metacpan.org/release/Catalyst-Plugin-Email

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Email-MIME>=0:mail/p5-Email-MIME \
		p5-Email-Send>=0:mail/p5-Email-Send

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
