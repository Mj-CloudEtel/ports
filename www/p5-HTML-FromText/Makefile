PORTNAME=	HTML-FromText
PORTVERSION=	2.07
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Mark up text as HTML
WWW=		https://metacpan.org/release/HTML-FromText

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Email-Find>=0.09:mail/p5-Email-Find \
		p5-HTML-Parser>=1.26:www/p5-HTML-Parser

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
