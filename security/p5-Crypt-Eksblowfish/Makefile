PORTNAME=	Crypt-Eksblowfish
PORTVERSION=	0.009
PORTREVISION=	3
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for the Eksblowfish block cipher
WWW=		https://metacpan.org/release/Crypt-Eksblowfish

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Mix>=0:devel/p5-Class-Mix

USES=		perl5
USE_PERL5=	modbuild

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/Eksblowfish/Eksblowfish.so

.include <bsd.port.mk>
