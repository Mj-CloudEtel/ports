PORTNAME=	Path-Dispatcher
PORTVERSION=	1.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ETHER
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl flexible and extensible dispatch
WWW=		https://metacpan.org/release/Path-Dispatcher

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moo>=0:devel/p5-Moo \
		p5-MooX-TypeTiny>=0:devel/p5-MooX-TypeTiny \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny \
		p5-Type-Tiny>=0:devel/p5-Type-Tiny
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
