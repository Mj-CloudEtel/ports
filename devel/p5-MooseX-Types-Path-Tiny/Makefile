PORTNAME=	MooseX-Types-Path-Tiny
PORTVERSION=	0.012
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension of Path::Tiny types and coercions for Moose
WWW=		https://metacpan.org/release/MooseX-Types-Path-Tiny

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENCE

RUN_DEPENDS=	p5-Moose>=2:devel/p5-Moose \
				p5-MooseX-Types>0:devel/p5-MooseX-Types \
				p5-MooseX-Types-Stringlike>=0:devel/p5-MooseX-Types-Stringlike \
				p5-Path-Tiny>0:devel/p5-Path-Tiny
BUILD_DEPENDS=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-File-pushd>0:devel/p5-File-pushd \
				p5-Test-Fatal>0:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	modbuildtiny
NO_ARCH=	YES

.include <bsd.port.mk>
