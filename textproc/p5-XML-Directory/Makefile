PORTNAME=	XML-Directory
PORTVERSION=	1.00
PORTREVISION=	3
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Returns a content of directory as XML
WWW=		https://metacpan.org/release/XML-Directory

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-RDF-Notation3>=0:textproc/p5-RDF-Notation3 \
		p5-XML-SAX>=0:textproc/p5-XML-SAX

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
