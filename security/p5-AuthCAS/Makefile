PORTNAME=	AuthCAS
PORTVERSION=	1.6
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:OSALAUN
PKGNAMEPREFIX=	p5-

MAINTAINER=	fw@moov.de
COMMENT=	Perl API to Yale's Central Authentication System (CAS)
WWW=		http://cpan.uwinnipeg.ca/dist/AuthCAS/

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-IO-Socket-SSL>=0:security/p5-IO-Socket-SSL

USES=		perl5 shebangfix
SHEBANG_FILES=	sampleCasClient.pl
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
