PORTNAME=	HTML-ResolveLink
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Resolve relative links in (X)HTML into absolute URI
WWW=		https://metacpan.org/release/HTML-ResolveLink

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-URI>0:net/p5-URI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
