PORTNAME=	Gearman-XS
PORTVERSION=	0.12
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DSCHOEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	otaviof@gmail.com
COMMENT=	Perl front end for the Gearman C library
WWW=		http://www.gearman.org/

LIB_DEPENDS=	libgearman.so:devel/gearmand

CFLAGS+=	-I${LOCALBASE}/include

USES=		perl5
USE_PERL5=	configure

INSTALL_TARGET=	pure_install

.include <bsd.port.mk>
