PORTNAME=	Net-IMAP-Simple-SSL
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	SSL support for Net::IMAP::Simple
WWW=		https://metacpan.org/release/Net-IMAP-Simple-SSL

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-Socket-SSL>=0:security/p5-IO-Socket-SSL \
		p5-Net-IMAP-Simple>=0:mail/p5-Net-IMAP-Simple

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
