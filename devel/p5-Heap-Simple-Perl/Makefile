PORTNAME=	Heap-Simple-Perl
PORTVERSION=	0.14
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Pure perl implementation of the Heap::Simple interface
WWW=		https://metacpan.org/release/Heap-Simple-Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Heap-Simple>=0:devel/p5-Heap-Simple

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	-n

.include <bsd.port.mk>
