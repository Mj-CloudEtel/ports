PORTNAME=	DBICx-Sugar
PORTVERSION=	0.0200
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:IRONCAMEL
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Just some syntax sugar for DBIx::Class
WWW=		https://metacpan.org/release/DBICx-Sugar

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBIx-Class>=0:databases/p5-DBIx-Class \
		p5-SQL-Translator>=0:databases/p5-SQL-Translator
TEST_DEPENDS=	p5-Test-Modern>=0:devel/p5-Test-Modern \
		p5-Test-Requires>=0:devel/p5-Test-Requires \
		p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-DBIx-Class-Schema-Loader>=0.07002:databases/p5-DBIx-Class-Schema-Loader \
		p5-Moose>=0:devel/p5-Moose \
		p5-MooseX-Types-LoadableClass>0:devel/p5-MooseX-Types-LoadableClass

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
