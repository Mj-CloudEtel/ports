PORTNAME=	String-ToIdentifier-EN
PORTVERSION=	0.12
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Convert Strings to English Program Identifiers
WWW=		https://metacpan.org/release/String-ToIdentifier-EN

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Lingua-EN-Inflect-Phrase>=0:textproc/p5-Lingua-EN-Inflect-Phrase \
		p5-Text-Unidecode>=0:converters/p5-Text-Unidecode \
		p5-namespace-clean>=0:devel/p5-namespace-clean

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
