PORTNAME=	XML-Validate
PORTVERSION=	1.025
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	XML validator factory
WWW=		https://metacpan.org/release/XML-Validate

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-LibXML>=0:textproc/p5-XML-LibXML \
		p5-Log-TraceMessages>=0:devel/p5-Log-TraceMessages
TEST_DEPENDS=	p5-Test-Assertions>0:devel/p5-Test-Assertions

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
