PORTNAME=	Test-TAP-Model
PORTVERSION=	0.10
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Accessible result collector for Test::Harness::Straps runs
WWW=		https://metacpan.org/release/Test-TAP-Model

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Method-Alias>=0:devel/p5-Method-Alias \
		p5-Test-Harness-Straps>=0.30:devel/p5-Test-Harness-Straps

USES=		perl5
USE_PERL5=	configure

post-patch:
	${RM} ${WRKSRC}/example.pl

.include <bsd.port.mk>
