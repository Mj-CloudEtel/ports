PORTNAME=	Nagios-Plugin-LDAP
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	net-mgmt
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	avk@vl.ru
COMMENT=	Nagios plugin to observe LDAP
WWW=		https://metacpan.org/release/Nagios-Plugin-LDAP

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-perl-ldap>=0:net/p5-perl-ldap \
		p5-Nagios-Plugin>=0:net-mgmt/p5-Nagios-Plugin \
		p5-DateTime>=0:devel/p5-DateTime

post-patch:
	@${FIND} ${WRKSRC} -name "*.orig" -delete

.include <bsd.port.mk>
