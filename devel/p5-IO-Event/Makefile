PORTNAME=	IO-Event
PORTVERSION=	0.813
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Tied Filehandles for Nonblocking IO with Object Callbacks
WWW=		https://metacpan.org/release/IO-Event

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-List-MoreUtils>=0:lang/p5-List-MoreUtils
TEST_DEPENDS=	p5-AnyEvent>=0,1:devel/p5-AnyEvent

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

OPTIONS_DEFINE=	ANYEVENT EVENT
OPTIONS_DEFAULT=ANYEVENT EVENT
ANYEVENT_DESC=	Use AnyEvent as underlying event handler
EVENT_DESC=	Use Event as underlying event handler

ANYEVENT_BUILD_DEPENDS=	p5-AnyEvent>=0,1:devel/p5-AnyEvent
ANYEVENT_RUN_DEPENDS=	p5-AnyEvent>=0,1:devel/p5-AnyEvent
EVENT_BUILD_DEPENDS=	p5-Event>=0:devel/p5-Event
EVENT_RUN_DEPENDS=	p5-Event>=0:devel/p5-Event

.include <bsd.port.mk>
