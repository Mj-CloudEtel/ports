PORTNAME=	DBICx-TxnInsert
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VOVKASM
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Wrap all inserts into transaction
WWW=		https://metacpan.org/release/DBICx-TxnInsert

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBIx-Class>=0:databases/p5-DBIx-Class \
		p5-DBD-Mock>=0:databases/p5-DBD-Mock
TEST_DEPENDS=	p5-Test-Compile>=0.08:devel/p5-Test-Compile \
		p5-Test-Pod>=1.22:devel/p5-Test-Pod

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
