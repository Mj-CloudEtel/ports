PORTNAME=	Email-Filter
PORTVERSION=	1.035
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Library for creating easy email filters
WWW=		https://metacpan.org/release/Email-Filter

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Trigger>=0:devel/p5-Class-Trigger \
		p5-Email-LocalDelivery>=0:mail/p5-Email-LocalDelivery \
		p5-Email-Simple>=0:mail/p5-Email-Simple \
		p5-IPC-Run>=0:devel/p5-IPC-Run

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
