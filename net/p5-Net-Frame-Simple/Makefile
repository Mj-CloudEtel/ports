PORTNAME=	Net-Frame-Simple
PORTVERSION=	1.09
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Base framework for frame crafting
WWW=		https://metacpan.org/release/Net-Frame-Simple

LICENSE=	ART10
LICENSE_FILE=	${WRKSRC}/LICENSE.Artistic

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Gomor>=1.03:devel/p5-Class-Gomor \
		p5-Net-Frame>=1.16:net/p5-Net-Frame

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
