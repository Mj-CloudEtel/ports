PORTNAME=	Module-Build-Using-PkgConfig
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Extend Module::Build to use platform libraries provided by pkg-config
WWW=		https://metacpan.org/release/Module-Build-Using-PkgConfig

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-ExtUtils-PkgConfig>=0:devel/p5-ExtUtils-PkgConfig

USES=		perl5 pkgconfig
USE_PERL5=	modbuild

NO_ARCH=	yes

.include <bsd.port.mk>
