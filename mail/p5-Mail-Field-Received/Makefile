PORTNAME=	Mail-Field-Received
PORTVERSION=	0.26
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 modules for parsing of `Received' headers in e-mails
WWW=		https://metacpan.org/release/Mail-Field-Received

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Mail-Tools>0:mail/p5-Mail-Tools

TEST_DEPENDS=	p5-Test-Differences>0:devel/p5-Test-Differences

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
