PORTNAME=	XML-XBEL
PORTVERSION=	1.4
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	OOP for reading and writing XBEL documents
WWW=		https://metacpan.org/release/XML-XBEL

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-TimeDate>=0:devel/p5-TimeDate \
		p5-XML-LibXML>=0:textproc/p5-XML-LibXML

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
