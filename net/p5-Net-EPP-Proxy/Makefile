PORTNAME=	Net-EPP-Proxy
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Proxy server for the EPP protocol
WWW=		https://metacpan.org/release/Net-EPP-Proxy

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Digest-SHA1>=0:security/p5-Digest-SHA1 \
		p5-IO-Multiplex>=0:devel/p5-IO-Multiplex \
		p5-Net-EPP>=0.03:net/p5-Net-EPP \
		p5-Net-Server>=0:net/p5-Net-Server \
		p5-XML-LibXML>=0:textproc/p5-XML-LibXML

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
