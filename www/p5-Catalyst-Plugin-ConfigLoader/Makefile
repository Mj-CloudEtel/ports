PORTNAME=	Catalyst-Plugin-ConfigLoader
PORTVERSION=	0.34
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BOBTFISH
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Load config files of various types
WWW=		https://metacpan.org/release/Catalyst-Plugin-ConfigLoader

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7008:www/p5-Catalyst-Runtime \
		p5-Data-Visitor>=0.24:devel/p5-Data-Visitor \
		p5-Config-Any>=0.20:devel/p5-Config-Any \
		p5-MRO-Compat>=0.09:devel/p5-MRO-Compat

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
