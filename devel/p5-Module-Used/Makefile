PORTNAME=	Module-Used
PORTVERSION=	v1.2.0
PORTREVISION=	4
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tsucchi@cpan.org
COMMENT=	Find modules loaded by Perl code without running it
WWW=		https://metacpan.org/release/Module-Used

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Next>=1.02:sysutils/p5-File-Next \
		p5-PPI>=1.203:textproc/p5-PPI \
		p5-Test-Deep>=0.098:devel/p5-Test-Deep \
		p5-Readonly>=1.03:devel/p5-Readonly

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
