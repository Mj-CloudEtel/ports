PORTNAME=	jacode.pl
PORTVERSION=	2.13.4.24
CATEGORIES=	japanese perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:INA/${PORTNAME:S|j|J|:S|.pl||}
DISTNAME=	${PORTNAME:S|j|J|:S|.pl||}-${PORTVERSION}

MAINTAINER=	takefu@airport.fm
COMMENT=	Perl library for Japanese character code conversion
WWW=		https://metacpan.org/release/Jacode

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/LICENSE

USES=		perl5
USE_PERL5=	configure
PLIST_FILES=	${SITE_PERL_REL}/${PORTNAME}
NO_BUILD=	yes
NO_ARCH=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}
	${INSTALL_DATA} ${WRKSRC}/lib/${PORTNAME} ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/${PORTNAME}

.include <bsd.port.mk>
