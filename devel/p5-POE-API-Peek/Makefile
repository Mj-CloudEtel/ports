PORTNAME=	POE-API-Peek
DISTVERSION=	2.20
PORTREVISION=	1
PORTEPOCH=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Peek into the internals of a running POE environment
WWW=		https://metacpan.org/release/POE-API-Peek

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=1.311:devel/p5-POE \
		p5-Devel-Size>0:devel/p5-Devel-Size

USES=		perl5
USE_PERL5=	configure
INSTALL_TARGET=	pure_install

.include <bsd.port.mk>
