PORTNAME=	Module-Install-XSUtil
PORTVERSION=	0.45
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Utility functions for XS modules
WWW=		https://metacpan.org/release/Module-Install-XSUtil

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Module-Install>=0.91:devel/p5-Module-Install
TEST_DEPENDS=	p5-B-Hooks-OP-Annotation>=0.43:devel/p5-B-Hooks-OP-Annotation

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
