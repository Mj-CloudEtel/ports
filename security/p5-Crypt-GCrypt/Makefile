PORTNAME=	Crypt-GCrypt
PORTVERSION=	1.26
PORTREVISION=	3
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl interface to the GNU Cryptographic library
WWW=		https://metacpan.org/release/Crypt-GCrypt

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

LIB_DEPENDS=	libgcrypt.so:security/libgcrypt

USES=		localbase perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/GCrypt/GCrypt.so

.include <bsd.port.mk>
