PORTNAME=	Net-APNS
PORTVERSION=	0.0202
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for Apple Push Notification Service
WWW=		https://metacpan.org/release/Net-APNS

RUN_DEPENDS=	\
	p5-Any-Moose>=0.10:devel/p5-Any-Moose \
	p5-JSON-XS>=2.25:converters/p5-JSON-XS \
	p5-Net-SSLeay>=1.35:security/p5-Net-SSLeay \
	p5-Sub-Exporter>=0.982:devel/p5-Sub-Exporter
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
