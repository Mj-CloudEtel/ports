PORTNAME=	Net-Dropbox-API
PORTVERSION=	1.9
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dropbox API interface
WWW=		https://metacpan.org/release/Net-Dropbox-API

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Random>=0:devel/p5-Data-Random \
		p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-JSON>=0:converters/p5-JSON \
		p5-Mouse>=0:devel/p5-Mouse \
		p5-Net-OAuth>=0:net/p5-Net-OAuth \
		p5-common-sense>=0:devel/p5-common-sense \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
