PORTNAME=	WWW-Dilbert
PORTVERSION=	1.19
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dilbert of the day comic strip archive and retrieval module
WWW=		https://metacpan.org/release/WWW-Dilbert

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	modbuild
CONFIGURE_ARGS=	</dev/null

.include <bsd.port.mk>
