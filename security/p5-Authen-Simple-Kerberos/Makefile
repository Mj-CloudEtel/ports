PORTNAME=	Authen-Simple-Kerberos
PORTVERSION=	0.1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Simple Kerberos authentication
WWW=		https://metacpan.org/release/Authen-Simple-Kerberos

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Authen-Simple>=0:security/p5-Authen-Simple \
		p5-Authen-Krb5-Simple>=0:security/p5-Authen-Krb5-Simple

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
