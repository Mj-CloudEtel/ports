PORTNAME=	Carp-Always-Color
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Carp::Always, but with color
WWW=		https://metacpan.org/release/Carp-Always-Color

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Carp-Always>=0.10:devel/p5-Carp-Always
TEST_DEPENDS=	p5-IO-Pty-Easy>=0:devel/p5-IO-Pty-Easy

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
