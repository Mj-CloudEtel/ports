PORTNAME=	HTTP-Server-Simple-Recorder
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mixin to record HTTP::Server::Simple's sockets
WWW=		https://metacpan.org/release/HTTP-Server-Simple-Recorder

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Server-Simple>=0:www/p5-HTTP-Server-Simple \
		p5-Test-HTTP-Server-Simple>=0:www/p5-Test-HTTP-Server-Simple \
		p5-IO-Tee>=0:devel/p5-IO-Tee

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
