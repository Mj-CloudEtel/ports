PORTNAME=	Module-Build-Pluggable-ReadmeMarkdownFromPod
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Make README.mkdn from POD
WWW=		https://metacpan.org/release/Module-Build-Pluggable-ReadmeMarkdownFromPod

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor-Lite>=0:devel/p5-Class-Accessor-Lite \
		p5-Module-Build-Pluggable>=0.09:devel/p5-Module-Build-Pluggable \
		p5-Pod-Markdown>=0:textproc/p5-Pod-Markdown

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

.include <bsd.port.mk>
