PORTNAME=	Catalyst-Plugin-Params-Nested
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Nested params (ala Ruby on Rails or PHP-style param arrays)
WWW=		https://metacpan.org/release/Catalyst-Plugin-Params-Nested

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CGI-Expand>=1.06:www/p5-CGI-Expand \
		p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime
TEST_DEPENDS=	p5-Test-MockObject>=0:devel/p5-Test-MockObject

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
