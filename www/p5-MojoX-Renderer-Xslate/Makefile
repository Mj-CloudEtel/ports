PORTNAME=	MojoX-Renderer-Xslate
PORTVERSION=	0.14
CATEGORIES=	www textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Text::Xslate renderer for for Mojolicious
WWW=		https://metacpan.org/pod/MojoX::Renderer::Xslate

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Mojolicious>=5.81:www/p5-Mojolicious \
		p5-Text-Xslate>=0.2013:textproc/p5-Text-Xslate

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
