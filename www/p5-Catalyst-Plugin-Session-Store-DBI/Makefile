PORTNAME=	Catalyst-Plugin-Session-Store-DBI
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Store your sessions in a database
WWW=		https://metacpan.org/release/Catalyst-Plugin-Session-Store-DBI

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Plugin-Session>=0:www/p5-Catalyst-Plugin-Session \
		p5-Catalyst-Runtime>=5.49:www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0:devel/p5-Class-Data-Inheritable \
		p5-DBI>=0:databases/p5-DBI \
		p5-MRO-Compat>=0:devel/p5-MRO-Compat

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
