PORTNAME=	CSS-SAC
PORTVERSION=	0.08
PORTREVISION=	2
CATEGORIES=	textproc perl5 www
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	SAC CSS (Simple API for CSS) parser
WWW=		https://metacpan.org/release/CSS-SAC

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-ArrayObjects>=0.04:devel/p5-Class-ArrayObjects

USES=		perl5
USE_PERL5=	configure

# Bareword "_out_" not allowed while "strict subs"
post-patch:
	@${REINPLACE_CMD} -e "s,_out_,'_out_',g" ${WRKSRC}/lib/CSS/SAC/TestWriter.pm
	@${FIND} ${WRKSRC} -name "*.bak" -delete

.include <bsd.port.mk>
