PORTNAME=	Lingua-EN-Infinitive
PORTVERSION=	1.14
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Determine the infinitive form of a conjugated word
WWW=		https://metacpan.org/release/Lingua-EN-Infinitive

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moo>=2.003000:devel/p5-Moo \
		p5-Type-Tiny>=1.000005:devel/p5-Type-Tiny

NO_ARCH=	yes
USES=		perl5 tar:tgz
USE_PERL5=	configure

.include <bsd.port.mk>
