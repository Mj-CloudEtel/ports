PORTNAME=	Catalyst-Helper-Controller-Scaffold
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Catalyst helper for Scaffolding
WWW=		https://metacpan.org/release/Catalyst-Helper-Controller-Scaffold

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime \
		p5-Catalyst-Devel>=1.00:www/p5-Catalyst-Devel \
		p5-Catalyst-Plugin-FormValidator>=0:www/p5-Catalyst-Plugin-FormValidator \
		p5-Catalyst-View-TT>=0:www/p5-Catalyst-View-TT \
		p5-Class-DBI>=0:databases/p5-Class-DBI \
		p5-Class-DBI-AsForm>=0:databases/p5-Class-DBI-AsForm \
		p5-Class-DBI-FromForm>=0:www/p5-Class-DBI-FromForm \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Template-Plugin-Class>=0:www/p5-Template-Plugin-Class

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
