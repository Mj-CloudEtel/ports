PORTNAME=	Plack-Middleware-ConsoleLogger
PORTVERSION=	0.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to write logs to Firebug or Webkit Inspector
WWW=		https://metacpan.org/release/Plack-Middleware-ConsoleLogger

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Plack>=0.99:www/p5-Plack \
	p5-JavaScript-Value-Escape>0:lang/p5-JavaScript-Value-Escape

USES=		perl5
USE_PERL5=	modbuildtiny
NO_ARCH=	YES

.include <bsd.port.mk>
