PORTNAME=	Module-Build-XSUtil
PORTVERSION=	0.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module::Build class for building XS modules
WWW=		https://metacpan.org/release/Module-Build-XSUtil

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Devel-CheckCompiler>=0:devel/p5-Devel-CheckCompiler
TEST_DEPENDS=	p5-Capture-Tiny>=0:devel/p5-Capture-Tiny \
		p5-Cwd-Guard>=0:devel/p5-Cwd-Guard \
		p5-File-Copy-Recursive-Reduced>=0.002:devel/p5-File-Copy-Recursive-Reduced

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

.include <bsd.port.mk>
