PORTNAME=	OpenCA-REQ
PORTVERSION=	0.9.60
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MADWOLF
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:S/0$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to easily manage Cert REQUESTs
WWW=		https://metacpan.org/release/OpenCA-REQ

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-X500-DN>=0:net/p5-X500-DN

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${MV} ${WRKSRC}/prova.pl  ${WRKSRC}/prova.pl.sample

.include <bsd.port.mk>
