PORTNAME=	Catalyst-Plugin-Prototype
PORTVERSION=	1.33
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MRAMBERG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Catalyst plugin for Prototype
WWW=		https://metacpan.org/release/Catalyst-Plugin-Prototype

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7006:www/p5-Catalyst-Runtime \
		p5-Catalyst-Devel>=1.00:www/p5-Catalyst-Devel \
		p5-Class-Data-Inheritable>=0:devel/p5-Class-Data-Inheritable \
		p5-HTML-Prototype>=1.48:www/p5-HTML-Prototype

USES=		perl5
USE_PERL5=	configure

post-extract:
	@${FIND} ${WRKSRC} -name '._Prototype.pm' -delete

.include <bsd.port.mk>
