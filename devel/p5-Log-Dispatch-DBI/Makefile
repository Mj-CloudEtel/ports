PORTNAME=	Log-Dispatch-DBI
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gebhart@secnetix.de
COMMENT=	Log::Dispatch output class for logging to database via DBI interface
WWW=		https://metacpan.org/release/Log-Dispatch-DBI

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Log-Dispatch>=2.0:devel/p5-Log-Dispatch \
		p5-DBI>0:databases/p5-DBI
TEST_DEPENDS=	p5-DBD-CSV>0:databases/p5-DBD-CSV

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
