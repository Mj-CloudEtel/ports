PORTNAME=	Gearman-Client-Async
PORTVERSION=	0.94
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BRADFITZ
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Asynchronous client module for Gearman for Danga::Socket applications
WWW=		https://metacpan.org/release/Gearman-Client-Async

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Danga-Socket>=0:devel/p5-Danga-Socket \
		p5-Gearman>=0:devel/p5-Gearman
TEST_DEPENDS=	p5-Gearman-Server>=0:devel/p5-Gearman-Server

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
