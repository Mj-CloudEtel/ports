PORTNAME=	Sphinx-Search
PORTVERSION=	0.31
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JJSCHUTZ
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Sphinx search engine API Perl client
WWW=		https://metacpan.org/release/Sphinx-Search

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-DBI>=0:databases/p5-DBI \
		p5-File-SearchPath>=0:devel/p5-File-SearchPath \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-Path-Class>=0:devel/p5-Path-Class

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

PORTSCOUT=	skipv:0.240.1

.include <bsd.port.mk>
