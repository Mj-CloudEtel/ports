PORTNAME=	WWW-Pastebin-PastebinCom-Create
PORTVERSION=	1.003
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Paste to http://pastebin.com from Perl
WWW=		https://metacpan.org/release/WWW-Pastebin-PastebinCom-Create

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moo>=1.004001:devel/p5-Moo \
		p5-WWW-Mechanize>=1.73:www/p5-WWW-Mechanize

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
