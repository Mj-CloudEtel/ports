PORTNAME=	Baseball-Sabermetrics
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	games perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Baseball Statistics Module
WWW=		https://metacpan.org/release/Baseball-Sabermetrics

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Serializer>=0.29:devel/p5-Data-Serializer \
		p5-HTML-TableExtract>=2.08:www/p5-HTML-TableExtract \
		p5-libwww>=5.801:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
