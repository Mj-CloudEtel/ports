PORTNAME=	Audio-Wav
PORTVERSION=	0.14
PORTREVISION=	2
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl modules for reading and writing Microsoft WAV files
WWW=		https://metacpan.org/release/Audio-Wav

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Inline>=0:devel/p5-Inline \
		p5-Inline-C>=0:devel/p5-Inline-C

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
