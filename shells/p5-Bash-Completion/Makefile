PORTNAME=	Bash-Completion
PORTVERSION=	0.008
PORTREVISION=	2
CATEGORIES=	shells perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MELO
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Extensible system to provide bash completion
WWW=		https://metacpan.org/release/Bash-Completion

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-List-MoreUtils>=0:lang/p5-List-MoreUtils
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
