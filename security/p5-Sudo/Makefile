PORTNAME=	Sudo
PORTVERSION=	0.33
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:WAG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for running a command line sudo
WWW=		https://metacpan.org/release/Sudo

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Term-ReadPassword>=0:devel/p5-Term-ReadPassword \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-IPC-Run>=0:devel/p5-IPC-Run

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
