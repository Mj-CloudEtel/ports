PORTNAME=	XML-SAX-ExpatXS
PORTVERSION=	1.33
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PerlSAX2 XS extension to Expat parser
WWW=		https://metacpan.org/release/XML-SAX-ExpatXS

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-SAX>=0:textproc/p5-XML-SAX
LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	EXPATLIBPATH=${LOCALBASE}/lib \
		EXPATINCPATH=${LOCALBASE}/include

.include <bsd.port.mk>
