PORTNAME=	Growl-GNTP
PORTVERSION=	0.21
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl implementation of the Growl GNTP Protocol (Client Part)
WWW=		https://metacpan.org/release/Growl-GNTP

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-CBC>=2.29:security/p5-Crypt-CBC \
		p5-Data-UUID>=0.149:devel/p5-Data-UUID

USES=		perl5
USE_PERL5=	modbuildtiny
NO_ARCH=	yes

.include <bsd.port.mk>
