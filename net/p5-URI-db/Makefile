PORTNAME=	URI-db
PORTVERSION=	0.20
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	henrik@hodne.io
COMMENT=	Perl5 module representing database URIs
WWW=		https://metacpan.org/release/URI-db

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-URI>=1.40:net/p5-URI \
		p5-URI-Nested>=0.10:net/p5-URI-Nested

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
