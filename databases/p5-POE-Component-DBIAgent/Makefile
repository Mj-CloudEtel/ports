PORTNAME=	POE-Component-DBIAgent
PORTVERSION=	0.26
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE Component for running asynchronous DBI calls
WWW=		https://metacpan.org/release/POE-Component-DBIAgent

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-Class-MethodMaker>=0:devel/p5-Class-MethodMaker \
		p5-DBI>=0:databases/p5-DBI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
