PORTNAME=	CouchDB-View
PORTVERSION=	0.003
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Handle and create CouchDB views in Perl
WWW=		https://metacpan.org/release/CouchDB-View

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Dump-Streamer>=0:devel/p5-Data-Dump-Streamer \
		p5-JSON-XS>=0:converters/p5-JSON-XS \
		p5-PadWalker>=0:devel/p5-PadWalker \
		p5-URI>=0:net/p5-URI
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
