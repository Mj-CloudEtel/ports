PORTNAME=	Cvs
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RSOLIV
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object-oriented interface to CVS command
WWW=		https://metacpan.org/release/Cvs

RUN_DEPENDS=	p5-IO-Tty>=0:devel/p5-IO-Tty \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-IPC-Run>=0:devel/p5-IPC-Run
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
