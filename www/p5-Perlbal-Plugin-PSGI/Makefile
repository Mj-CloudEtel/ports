PORTNAME=	Perlbal-Plugin-PSGI
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIYAGAWA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for PSGI web server on Perlbal
WWW=		https://metacpan.org/release/Perlbal-Plugin-PSGI

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Perlbal>0:www/perlbal \
	p5-Plack>0:www/p5-Plack
TEST_DEPENDS=	p5-Test-Requires>0:devel/p5-Test-Requires \
		p5-Test-TCP>=0:devel/p5-Test-TCP

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
