PORTNAME=	Net-DNS-ToolKit
PORTVERSION=	0.48
PORTREVISION=	1
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Tools for working with DNS packets
WWW=		https://metacpan.org/release/Net-DNS-ToolKit

LICENSE=	ART10 GPLv2 GPLv3
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-DNS-Codes>=0.09:dns/p5-Net-DNS-Codes \
		p5-NetAddr-IP>=1.30:net-mgmt/p5-NetAddr-IP

MAKE_JOBS_UNSAFE=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
