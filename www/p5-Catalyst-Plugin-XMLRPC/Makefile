PORTNAME=	Catalyst-Plugin-XMLRPC
PORTVERSION=	2.01
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dispatch XMLRPC methods with Catalyst
WWW=		https://metacpan.org/release/Catalyst-Plugin-XMLRPC

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Class-Data-Inheritable>=0:devel/p5-Class-Data-Inheritable \
		p5-RPC-XML>=0:net/p5-RPC-XML

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
