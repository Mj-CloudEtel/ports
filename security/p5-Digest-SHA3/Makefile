PORTNAME=	Digest-SHA3
PORTVERSION=	1.05
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for SHA-3
WWW=		https://metacpan.org/pod/Digest::SHA3

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Digest/SHA3/SHA3.so

.include <bsd.port.mk>
