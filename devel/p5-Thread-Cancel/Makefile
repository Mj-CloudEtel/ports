PORTNAME=	Thread-Cancel
PORTVERSION=	1.13
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Cancel (i.e., kill) threads
WWW=		https://metacpan.org/release/Thread-Cancel

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-threads>=1.34:devel/p5-threads

USES=		perl5
USE_PERL5=	configure

pre-everything::
	@${ECHO_MSG} "--------------------------------------------------------"
	@${ECHO_MSG} "This module requires a threaded perl.  If your install"
	@${ECHO_MSG} "is not threaded please install lang/${PERL_PORT} with threads"
	@${ECHO_MSG} "--------------------------------------------------------"

.include <bsd.port.mk>
