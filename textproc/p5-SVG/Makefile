PORTNAME=	SVG
PORTVERSION=	2.87
CATEGORIES=	textproc graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for generating Scalable Vector Graphics (SVG) documents
WWW=		https://metacpan.org/release/SVG

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		dos2unix perl5 shebangfix
USE_PERL5=	configure

NO_ARCH=	yes

PORTEXAMPLES=	*

SHEBANG_FILES=	examples/*.pl examples/*.cgi examples/*.psgi

OPTIONS_DEFINE=	EXAMPLES

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
