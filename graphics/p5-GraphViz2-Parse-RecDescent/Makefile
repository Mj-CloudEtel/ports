PORTNAME=	GraphViz2-Parse-RecDescent
PORTVERSION=	2.52
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Visualize a Parse::RecDescent grammar as a graph
WWW=		https://metacpan.org/release/GraphViz2-Parse-RecDescent

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-GraphViz2>=2.62:graphics/p5-GraphViz2 \
		p5-Moo>=2.001001:devel/p5-Moo \
		p5-Parse-RecDescent>=1.965001:devel/p5-Parse-RecDescent
TEST_DEPENDS=	p5-Test-Snapshot>=0.06:devel/p5-Test-Snapshot

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
