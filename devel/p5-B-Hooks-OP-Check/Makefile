PORTNAME=	B-Hooks-OP-Check
PORTVERSION=	0.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Wrap OP check callbacks
WWW=		https://metacpan.org/release/B-Hooks-OP-Check

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENCE

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.302:devel/p5-ExtUtils-Depends

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/Hooks/OP/Check/Check.so

.include <bsd.port.mk>
