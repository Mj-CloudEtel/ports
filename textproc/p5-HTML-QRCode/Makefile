PORTNAME=	HTML-QRCode
PORTVERSION=	0.01
PORTREVISION=	3
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate HTML based QR Code
WWW=		https://metacpan.org/release/HTML-QRCode

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Text-QRCode>0:textproc/p5-Text-QRCode
LIB_DEPENDS=	libqrencode.so:graphics/libqrencode

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
