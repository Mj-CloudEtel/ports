PORTNAME=	Test-Deep
PORTVERSION=	1.130
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test data structures for differences deeply
WWW=		https://metacpan.org/release/Test-Deep

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

NO_ARCH=	yes
REINPLACE_ARGS=	-i ''
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/return (/s/;/);/' ${WRKSRC}/lib/Test/Deep/RegexpOnly.pm

.include <bsd.port.mk>
