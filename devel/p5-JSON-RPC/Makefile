PORTNAME=	JSON-RPC
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DMAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl implementation of JSON-RPC 1.1 protocol
WWW=		https://metacpan.org/release/JSON-RPC

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor-Lite>=0:devel/p5-Class-Accessor-Lite \
		p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-JSON>=0:converters/p5-JSON \
		p5-JSON-XS>=0:converters/p5-JSON-XS \
		p5-Plack>=0:www/p5-Plack \
		p5-Router-Simple>=0:www/p5-Router-Simple \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
