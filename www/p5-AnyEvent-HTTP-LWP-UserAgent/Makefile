PORTNAME=	AnyEvent-HTTP-LWP-UserAgent
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for LWP::UserAgent interface using AnyEvent::HTTP
WWW=		https://metacpan.org/release/AnyEvent-HTTP-LWP-UserAgent

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	\
	p5-AnyEvent>=5:devel/p5-AnyEvent \
	p5-AnyEvent-HTTP>=2.1:www/p5-AnyEvent-HTTP \
	p5-HTTP-Message>=0:www/p5-HTTP-Message \
	p5-libwww>0:www/p5-libwww \
	p5-libwww>=5.815:www/p5-libwww
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
