PORTNAME=	Jemplate
PORTVERSION=	0.300
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:INGY
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C|0$||}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	JavaScript Templating with Template Toolkit
WWW=		https://metacpan.org/release/Jemplate

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Find-Rule>=0.33:devel/p5-File-Find-Rule \
		p5-Template-Toolkit>=2.25:www/p5-Template-Toolkit

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
