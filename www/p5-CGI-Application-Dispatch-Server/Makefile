PORTNAME=	CGI-Application-Dispatch-Server
PORTVERSION=	0.53
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Simple HTTP server for developing with CGI::Application::Dispatch
WWW=		https://metacpan.org/release/CGI-Application-Dispatch-Server

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-IO-Capture>=0:devel/p5-IO-Capture \
		p5-CGI-Application>=0:www/p5-CGI-Application \
		p5-CGI-Application-Dispatch>=0:www/p5-CGI-Application-Dispatch \
		p5-HTTP-Server-Simple>=0:www/p5-HTTP-Server-Simple \
		p5-HTTP-Server-Simple-Static>=0:www/p5-HTTP-Server-Simple-Static \
		p5-Params-Validate>=0:devel/p5-Params-Validate

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
