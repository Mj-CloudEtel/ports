PORTNAME=	Moose-Test
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SARTAK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test Runner for the Moose test suite
WWW=		https://metacpan.org/release/Moose-Test

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Mouse>=0:devel/p5-Mouse \
		p5-Path-Class>=0:devel/p5-Path-Class

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
