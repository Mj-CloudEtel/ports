PORTNAME=	Net-OpenID-Consumer
PORTVERSION=	1.18
CATEGORIES=	net security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Library for consumers of OpenID identities
WWW=		https://metacpan.org/release/Net-OpenID-Consumer

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-JSON>=0:converters/p5-JSON \
		p5-Net-OpenID-Common>=1.18:security/p5-Net-OpenID-Common \
		p5-URI>=0:net/p5-URI \
		p5-libwww>=0:www/p5-libwww
TEST_DEPENDS=	p5-CGI>=0:www/p5-CGI

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
