PORTNAME=	Net-MAC-Vendor
PORTVERSION=	1.2000
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:S/00$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Look up the vendor for a MAC
WWW=		https://metacpan.org/release/Net-MAC-Vendor

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
