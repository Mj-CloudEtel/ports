PORTNAME=	Apache-Session-PHP
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Glue Apache::Session with PHP::Session
WWW=		https://metacpan.org/release/Apache-Session-PHP

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-PHP-Session>=0:www/p5-PHP-Session \
		p5-Apache-Session>=0:www/p5-Apache-Session

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
