PORTNAME=	CGI-Untaint
PORTVERSION=	1.26
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Process CGI input parameters
WWW=		https://metacpan.org/release/CGI-Untaint

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-UNIVERSAL-require>=0.01:devel/p5-UNIVERSAL-require

USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	DOCS

PORTDOCS=	Changes

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."

.include <bsd.port.mk>
