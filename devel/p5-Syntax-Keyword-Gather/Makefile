PORTNAME=	Syntax-Keyword-Gather
PORTVERSION=	1.003002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Implements the Perl 6 'gather/take' control structure in Perl 5
WWW=		https://metacpan.org/release/Syntax-Keyword-Gather

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Sub-Exporter-Progressive>=0:devel/p5-Sub-Exporter-Progressive

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
