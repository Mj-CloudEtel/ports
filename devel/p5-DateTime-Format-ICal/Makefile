PORTNAME=	DateTime-Format-ICal
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format ICal datetime and duration strings
WWW=		https://metacpan.org/release/DateTime-Format-ICal

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-DateTime>=0:devel/p5-DateTime \
		p5-DateTime-TimeZone>=0:devel/p5-DateTime-TimeZone \
		p5-DateTime-Event-ICal>=0:devel/p5-DateTime-Event-ICal \
		p5-DateTime-Set>=0:devel/p5-DateTime-Set \
		p5-Params-Validate>=0:devel/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	yes

.include <bsd.port.mk>
