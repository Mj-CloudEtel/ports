PORTNAME=	Sub-Exporter-GlobExporter
PORTVERSION=	0.005
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	Export shared globs with Sub::Exporter collectors
WWW=		https://metacpan.org/release/Sub-Exporter-GlobExporter

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Sub-Exporter>=0:devel/p5-Sub-Exporter

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
