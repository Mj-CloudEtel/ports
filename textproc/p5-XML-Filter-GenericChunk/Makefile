PORTNAME=	XML-Filter-GenericChunk
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Base Class for SAX Filters parsing WellBallanced Chunks
WWW=		https://metacpan.org/release/XML-Filter-GenericChunk

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-LibXML>=1.4:textproc/p5-XML-LibXML \
		p5-XML-SAX>=0:textproc/p5-XML-SAX

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -i '' '/use warnings/d' \
		${WRKSRC}/t/02filter.t \
		${WRKSRC}/CharacterChunk.pm \
		${WRKSRC}/GenericChunk.pm

.include <bsd.port.mk>
