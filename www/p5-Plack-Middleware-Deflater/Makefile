PORTNAME=	Plack-Middleware-Deflater
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:KAZEBURO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to compress response body with Gzip or Deflate
WWW=		https://metacpan.org/release/Plack-Middleware-Deflater

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Plack>0:www/p5-Plack
TEST_DEPENDS=	\
	p5-IO-Handle-Util>0:devel/p5-IO-Handle-Util \
	p5-Test-TCP>0:devel/p5-Test-TCP

USES=	perl5
USE_PERL5=	configure

.include <bsd.port.mk>
