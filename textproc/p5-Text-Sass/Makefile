PORTNAME=	Text-Sass
PORTVERSION=	0.97
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RPETTETT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl implementation of http://sass-lang.com/
WWW=		https://metacpan.org/release/Text-Sass

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Readonly>=1.03:devel/p5-Readonly \
	p5-Convert-Color>0:graphics/p5-Convert-Color
TEST_DEPENDS=	p5-Try-Tiny>0:lang/p5-Try-Tiny

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
