PORTNAME=	File-Policy
PORTVERSION=	1.005
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple policy for file I/O functions
WWW=		https://metacpan.org/release/File-Policy

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Log-Trace>0:devel/p5-Log-Trace \
		p5-File-Slurp>0:devel/p5-File-Slurp
TEST_DEPENDS=	p5-Test-Assertions>0:devel/p5-Test-Assertions

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
