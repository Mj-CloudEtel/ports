PORTNAME=	WWW-Search-MSN
PORTVERSION=	0.0202
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Backend for searching search.msn.com
WWW=		https://metacpan.org/release/WWW-Search-MSN

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Tree>=0:www/p5-HTML-Tree \
		p5-WWW-Search>=0:www/p5-WWW-Search

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
