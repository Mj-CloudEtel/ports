PORTNAME=	WWW-Wikipedia
PORTVERSION=	2.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BRICAS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module of Automated interface to the Wikipedia
WWW=		https://metacpan.org/release/WWW-Wikipedia

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-LWP-Protocol-https>=0:www/p5-LWP-Protocol-https \
		p5-Text-Autoformat>=0:textproc/p5-Text-Autoformat \
		p5-libwww>=0:www/p5-libwww

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
