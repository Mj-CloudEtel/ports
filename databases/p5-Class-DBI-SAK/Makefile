PORTNAME=	Class-DBI-SAK
PORTVERSION=	1.4
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Class::DBI Swiss Army Knife (SAK)
WWW=		https://metacpan.org/release/Class-DBI-SAK

BUILD_DEPENDS=	${RUN_DEPENDS} \
		p5-mixin>=0:devel/p5-mixin
RUN_DEPENDS=	p5-Class-DBI>=0:databases/p5-Class-DBI \
		p5-Class-DBI-AbstractSearch>=0:databases/p5-Class-DBI-AbstractSearch \
		p5-Class-DBI-Pager>=0:databases/p5-Class-DBI-Pager

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
