PORTNAME=	Parse-PlainConfig
PORTVERSION=	3.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module to use plain config files
WWW=		https://metacpan.org/release/Parse-PlainConfig

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-EHierarchy>=2.00:devel/p5-Class-EHierarchy \
		p5-Paranoid>=2.05:devel/p5-Paranoid

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
