PORTNAME=	Business-OnlinePayment
PORTVERSION=	3.05
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:IVAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generic interface for processing online credit card payments
WWW=		https://metacpan.org/release/Business-OnlinePayment

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-HTTPS-Any>=0:net/p5-Net-HTTPS-Any \
		p5-Tie-IxHash>=0:devel/p5-Tie-IxHash

PORTSCOUT=	limit:^[0-9\.]*$$

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
