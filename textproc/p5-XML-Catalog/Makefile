PORTNAME=	XML-Catalog
PORTVERSION=	1.0.3
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Resolve public identifiers and remap system identifiers
WWW=		https://metacpan.org/release/XML-Catalog

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-URI>=0:net/p5-URI \
		p5-XML-Parser>=0:textproc/p5-XML-Parser \
		p5-Text-ParseWords>0:textproc/p5-Text-ParseWords \
		p5-libwww>=0:www/p5-libwww

USES=		dos2unix perl5
USE_PERL5=	configure
DOS2UNIX_GLOB=	Catalog.pm

.include <bsd.port.mk>
