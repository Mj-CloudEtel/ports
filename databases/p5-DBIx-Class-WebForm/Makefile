PORTNAME=	DBIx-Class-WebForm
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CRUD methods for DBIx::Class
WWW=		https://metacpan.org/release/DBIx-Class-WebForm

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBIx-Class>=0:databases/p5-DBIx-Class \
		p5-HTML-Tree>=0:www/p5-HTML-Tree \
		p5-Data-FormValidator>=0:textproc/p5-Data-FormValidator

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
