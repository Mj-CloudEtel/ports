PORTNAME=	Net-VNC
PORTVERSION=	0.40
PORTREVISION=	3
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple VNC client
WWW=		https://metacpan.org/release/Net-VNC

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-Crypt-DES>=0:security/p5-Crypt-DES \
		p5-Image-Imlib2>=0:graphics/p5-Image-Imlib2

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
