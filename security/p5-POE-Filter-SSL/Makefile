PORTNAME=	POE-Filter-SSL
PORTVERSION=	0.41
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Esiest and flexiblest way to SSL in POEIntegrate SSL into POE
WWW=		https://metacpan.org/release/POE-Filter-SSL

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-Net-SSLeay>=1.65:security/p5-Net-SSLeay \
		p5-POE>=0:devel/p5-POE

PORTSCOUT=	skipv:0.291

MAKE_ARGS=	PASTHRU_INC=-I${OPENSSLINC}
USES=		perl5 ssl
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/POE/Filter/SSL/SSL.so

.include <bsd.port.mk>
