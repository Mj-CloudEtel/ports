PORTNAME=	Catalyst-View-ClearSilver
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JROCKWAY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	ClearSilver view class for Catalyst
WWW=		https://metacpan.org/release/Catalyst-View-ClearSilver

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-ClearSilver>=0:www/p5-ClearSilver \
		p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Data-Structure-Util>=0:devel/p5-Data-Structure-Util \
		p5-Class-C3>=0:devel/p5-Class-C3 \
		p5-Catalyst-View-Templated>=0:www/p5-Catalyst-View-Templated
TEST_DEPENDS=	p5-Catalyst-View-Template-Declare>=0:www/p5-Catalyst-View-Template-Declare

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
