PORTNAME=	Image-Grab
PORTVERSION=	1.4.2
PORTREVISION=	4
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for Grabbing images off the Internet
WWW=		https://metacpan.org/release/Image-Grab

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-HTML-Tree>=0:www/p5-HTML-Tree \
		p5-URI>=0:net/p5-URI \
		p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV=	${ECHO_CMD} "N" |
NO_ARCH=	yes

.include <bsd.port.mk>
