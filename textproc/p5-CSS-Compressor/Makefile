PORTNAME=	CSS-Compressor
PORTVERSION=	0.05
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl extension for CSS minification
WWW=		https://metacpan.org/release/CSS-Compressor

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

post-install:
	${INSTALL_SCRIPT} ${FILESDIR}/csscompressor ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
