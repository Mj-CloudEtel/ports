PORTNAME=	Term-ReadLine-TTYtter
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dereckson@gmail.com
COMMENT=	Perl5 module for Term::ReadLine allowing rich editing
WWW=		https://metacpan.org/release/Term-ReadLine-TTYtter

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

# Have post-install run before fix-perl-things from Mk/Uses/perl5.mk
TARGET_ORDER_OVERRIDE=		510:post-install

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Term/ReadLine/TTYtter
	${MV} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Term/ReadLine/.packlist \
		${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Term/ReadLine/TTYtter/.packlist

.include <bsd.port.mk>
