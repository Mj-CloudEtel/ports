PORTNAME=	SMS-Send-TW-emome
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	SMS::Send driver for www.emome.net
WWW=		https://metacpan.org/release/SMS-Send-TW-emome

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-SMS-Send>=0.03:comms/p5-SMS-Send \
		p5-Crypt-SSLeay>=0.57:security/p5-Crypt-SSLeay \
		p5-WWW-Mechanize>=1.20:www/p5-WWW-Mechanize \
		p5-Text-Iconv>=:converters/p5-Text-Iconv

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
