PORTNAME=	HTML-GenToc
PORTVERSION=	3.20
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate a Table of Contents for HTML documents
WWW=		https://metacpan.org/release/HTML-GenToc

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-LinkList>=0.1501:www/p5-HTML-LinkList \
		p5-HTML-SimpleParse>=0.10:www/p5-HTML-SimpleParse \
		p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-Getopt-ArgvFile>=1.09:devel/p5-Getopt-ArgvFile

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
