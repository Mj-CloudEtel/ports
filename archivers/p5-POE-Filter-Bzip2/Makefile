PORTNAME=	POE-Filter-Bzip2
PORTVERSION=	1.60
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE filter wrapped around Compress::Bzip2
WWW=		https://metacpan.org/release/POE-Filter-Bzip2

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Compress-Bzip2>=2.08:archivers/p5-Compress-Bzip2 \
		p5-POE>=0.38:devel/p5-POE

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
