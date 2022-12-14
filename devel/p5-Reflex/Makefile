PORTNAME=	Reflex
PORTVERSION=	0.100
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCAPUTO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Class library for flexible, reactive programs
WWW=		https://metacpan.org/release/Reflex

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moose>=2.0203:devel/p5-Moose \
		p5-MooseX-Role-Parameterized>=0.23:devel/p5-MooseX-Role-Parameterized \
		p5-POE>=1.294:devel/p5-POE

NO_ARCH=	yes
USES=		perl5 shebangfix
USE_PERL5=	configure

OPTIONS_DEFINE=	DOCS EXAMPLES

PORTDOCS=	*
PORTEXAMPLES=	*

SHEBANG_FILES=	eg/*.pl

post-patch:
	@${RM} ${WRKSRC}/bench.pl
	@${REINPLACE_CMD} -e '/^bench.pl$$/d' ${WRKSRC}/MANIFEST

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${DOCSDIR}/
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}"
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/proto/ ${STAGEDIR}${EXAMPLESDIR}/ttl/
	${INSTALL_SCRIPT} ${WRKSRC}/eg/*.pl ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/eg/*.pm ${STAGEDIR}${EXAMPLESDIR}/
	cd ${WRKSRC}/eg/proto/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR}/proto/
	cd ${WRKSRC}/eg/ttl/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR}/ttl/
	@${ECHO_MSG} "===> Examples installed in ${EXAMPLESDIR}"

.include <bsd.port.mk>
