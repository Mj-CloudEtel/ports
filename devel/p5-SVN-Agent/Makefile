PORTNAME=	SVN-Agent
PORTVERSION=	0.04
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	Simple svn manipulation
WWW=		https://metacpan.org/release/SVN-Agent

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-subversion>=0:devel/p5-subversion \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-File-Slurp>=0:devel/p5-File-Slurp

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
