PORTNAME=	WWW-Scraper-ISBN-ORA_Driver
PORTVERSION=	0.23
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Search driver for O'Reilly & Associates's online catalog
WWW=		https://metacpan.org/release/WWW-Scraper-ISBN-ORA_Driver

LICENSE=	ART20

BUILD_DEPENDS=	p5-WWW-Scraper-ISBN>=1.00:www/p5-WWW-Scraper-ISBN
RUN_DEPENDS=	p5-Template-Extract>=0:textproc/p5-Template-Extract \
		p5-WWW-Mechanize>=0:www/p5-WWW-Mechanize \
		p5-WWW-Scraper-ISBN>=1.00:www/p5-WWW-Scraper-ISBN

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
