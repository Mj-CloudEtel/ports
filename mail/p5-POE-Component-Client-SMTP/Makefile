PORTNAME=	POE-Component-Client-SMTP
PORTVERSION=	0.22
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	SMTP client POE component
WWW=		https://metacpan.org/release/POE-Component-Client-SMTP

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-POE-Filter-Transparent-SMTP>=0:mail/p5-POE-Filter-Transparent-SMTP

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
