PORTNAME=	Text-Prefix-XS
PORTVERSION=	0.15
PORTREVISION=	3
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast prefix searching
WWW=		https://metacpan.org/release/Text-Prefix-XS

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Digest-SHA1>=1:security/p5-Digest-SHA1
TEST_DEPENDS=	p5-Test-Deep>=0.108:devel/p5-Test-Deep

USES=		perl5 shebangfix
USE_PERL5=	configure

SHEBANG_FILES=	trie.pl

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Text/Prefix/XS/XS.so

.include <bsd.port.mk>
