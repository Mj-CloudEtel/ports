PORTNAME=	HTTP-Recorder
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Record interaction with websites
WWW=		https://metacpan.org/release/HTTP-Recorder

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-HTTP-Proxy>=0:www/p5-HTTP-Proxy \
		p5-HTTP-Request-Params>=0:www/p5-HTTP-Request-Params \
		p5-URI>=0:net/p5-URI \
		p5-libwww>=0:www/p5-libwww

USES=		perl5 dos2unix
USE_PERL5=	configure

post-patch:
	@${RM} ${WRKSRC}/lib/HTTP/Recorder.pm.orig

.include <bsd.port.mk>
