PORTNAME=	Digest-Bcrypt
PORTVERSION=	1.212
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the bcrypt digest algorithm
WWW=		https://metacpan.org/module/Digest::Bcrypt

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-Eksblowfish>0:security/p5-Crypt-Eksblowfish
TEST_DEPENDS=	p5-Try-Tiny>=0.24:lang/p5-Try-Tiny

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
