PORTNAME=	Array-Heap
PORTVERSION=	3.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	eserte12@yahoo.de
COMMENT=	Perl module implementing fast binary heaps/priority queues
WWW=		https://metacpan.org/release/Array-Heap

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Canary-Stability>=0:devel/p5-Canary-Stability

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Array/Heap/Heap.so

.include <bsd.port.mk>
