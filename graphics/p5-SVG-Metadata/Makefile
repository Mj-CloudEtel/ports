PORTNAME=	SVG-Metadata
PORTVERSION=	0.28
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to capture metadata info about an SVG file
WWW=		https://metacpan.org/release/SVG-Metadata

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	xml_grep:textproc/p5-XML-Twig

USES=		perl5
USE_PERL5=	configure

post-patch:
	${RM} ${WRKSRC}/lib/SVG/Metadata.pm.orig

.include <bsd.port.mk>
