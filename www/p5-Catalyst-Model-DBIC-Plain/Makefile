PORTNAME=	Catalyst-Model-DBIC-Plain
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SRI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBIx::Class model class for Catalyst, without loader
WWW=		https://metacpan.org/release/Catalyst-Model-DBIC-Plain

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Catalyst-Devel>=1.00:www/p5-Catalyst-Devel \
		p5-DBIx-Class>=0.01:databases/p5-DBIx-Class

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
