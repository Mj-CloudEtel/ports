PORTNAME=	Catalyst-Plugin-Authentication-Store-Htpasswd
PORTVERSION=	0.020
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C|0$||}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use .htpasswd with Catalyst
WWW=		https://metacpan.org/release/DKAMHOLZ/Catalyst-Plugin-Authentication-Store-Htpasswd-0.02

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Plugin-Authentication>=0.01:www/p5-Catalyst-Plugin-Authentication \
		p5-Authen-Htpasswd>=0.13:security/p5-Authen-Htpasswd

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
