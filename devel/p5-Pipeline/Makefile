PORTNAME=	Pipeline
PORTVERSION=	3.12
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCLAMP
PKGNAMEPREFIX=	p5-

MAINTAINER=	rouslan@rshell.net
COMMENT=	Generic pipeline Perl interface
WWW=		https://metacpan.org/release/Pipeline

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-ISA>=0:devel/p5-Class-ISA \
		p5-Error>=0:lang/p5-Error \
		p5-IO-Null>=0:devel/p5-IO-Null \
		p5-IO-String>=0:devel/p5-IO-String \
		p5-Data-UUID>=0:devel/p5-Data-UUID \
		p5-Data-Structure-Util>=0:devel/p5-Data-Structure-Util

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
