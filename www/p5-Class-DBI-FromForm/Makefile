PORTNAME=	Class-DBI-FromForm
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MRAMBERG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Update Class::DBI using Data::FormValidator or HTML::Widget
WWW=		https://metacpan.org/release/Class-DBI-FromForm

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-DBI>=0:databases/p5-Class-DBI \
		p5-Data-FormValidator>=0:textproc/p5-Data-FormValidator

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
