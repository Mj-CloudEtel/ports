PORTNAME=	Set-Array
PORTVERSION=	0.30
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RSAVAGE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Arrays as objects with set operations
WWW=		https://metacpan.org/release/Set-Array

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Try-Tiny>=0.11:lang/p5-Try-Tiny \
		p5-Want>=0:devel/p5-Want
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-Pod>=0:devel/p5-Test-Pod

USES=		perl5 tar:tgz
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
