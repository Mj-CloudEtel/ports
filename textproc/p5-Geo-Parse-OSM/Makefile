PORTNAME=	Geo-Parse-OSM
PORTVERSION=	0.42
PORTREVISION=	2
CATEGORIES=	textproc geography perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LIOSHA
PKGNAMEPREFIX=	p5-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	OpenStreetMap XML file regexp parser
WWW=		https://metacpan.org/release/Geo-Parse-OSM

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils

PORTSCOUT=	skipv:0.221

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
