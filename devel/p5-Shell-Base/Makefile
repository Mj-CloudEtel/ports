PORTNAME=	Shell-Base
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl module implementing a simple command shell
WWW=		https://metacpan.org/release/Shell-Base

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Term-Size>=0:devel/p5-Term-Size \
		p5-Text-Shellwords>=0:textproc/p5-Text-Shellwords

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
