PORTNAME=	WWW-Facebook-API
PORTVERSION=	0.4.18
PORTREVISION=	3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Facebook API implementation in Perl
WWW=		https://metacpan.org/release/WWW-Facebook-API

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-SSLeay>=0:security/p5-Crypt-SSLeay \
		p5-JSON-Any>=0:converters/p5-JSON-Any \
		p5-Readonly>=0:devel/p5-Readonly \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
