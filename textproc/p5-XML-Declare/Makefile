PORTNAME=	XML-Declare
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Create XML documents with declaration style
WWW=		https://metacpan.org/release/XML-Declare

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-LibXML>=1.70:textproc/p5-XML-LibXML
TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings \
		p5-lib-abs>=0.90:devel/p5-lib-abs \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
