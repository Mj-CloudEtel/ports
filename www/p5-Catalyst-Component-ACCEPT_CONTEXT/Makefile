PORTNAME=	Catalyst-Component-ACCEPT_CONTEXT
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Make the Catalyst request context available in Models and Views
WWW=		https://metacpan.org/release/Catalyst-Component-ACCEPT_CONTEXT

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>0:www/p5-Catalyst-Runtime
TEST_DEPENDS=	p5-Devel-Cycle>=0:devel/p5-Devel-Cycle

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -i '' -e '/auto_install/d' \
		-e '/Devel::Cycle/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
