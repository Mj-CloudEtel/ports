PORTNAME=	Emplacken
PORTVERSION=	0.01
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DROLSKY
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Manage multiple plack apps with a directory of config files
WWW=		https://metacpan.org/release/DROLSKY/Emplacken-0.01

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Load>=0:devel/p5-Class-Load \
		p5-Config-Any>=0:devel/p5-Config-Any \
		p5-File-Pid>=0:devel/p5-File-Pid \
		p5-List-AllUtils>=0:devel/p5-List-AllUtils \
		p5-Moose>=0:devel/p5-Moose \
		p5-MooseX-Getopt>=0:devel/p5-MooseX-Getopt \
		p5-MooseX-Types>=0:devel/p5-MooseX-Types \
		p5-MooseX-Types-Path-Class>=0:devel/p5-MooseX-Types-Path-Class \
		p5-MooseX-Types-Perl>=0:devel/p5-MooseX-Types-Perl \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Text-Template>=0:textproc/p5-Text-Template \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
