PORTNAME=	IO-Socket-Multicast
PORTVERSION=	1.12
PORTREVISION=	2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Perl module to send and receive multicast messages
WWW=		https://metacpan.org/release/IO-Socket-Multicast

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-Interface>=0:net/p5-IO-Interface

USES=		perl5 shebangfix
SHEBANG_FILES=	examples/client.pl examples/server.pl
USE_PERL5=	configure

OPTIONS_DEFINE=	EXAMPLES

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
