PORTNAME=	Plack-Middleware-AMF
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to use AMF with Plack
WWW=		https://metacpan.org/release/Plack-Middleware-AMF

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Data-AMF>=0.03:converters/p5-Data-AMF \
	p5-Plack>0:www/p5-Plack \
	p5-UNIVERSAL-require>0:devel/p5-UNIVERSAL-require

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
