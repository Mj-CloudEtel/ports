PORTNAME=	POE-Component-SNMP
PORTVERSION=	1.1006
PORTREVISION=	1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Event-driven SNMP interface
WWW=		https://metacpan.org/release/POE-Component-SNMP

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=0.31:devel/p5-POE \
		p5-Net-SNMP>=0:net-mgmt/p5-Net-SNMP

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${TOUCH} ${WRKSRC}/config.cache

.include <bsd.port.mk>
