PORTNAME=	axfr2acl
PORTVERSION=	1.01
CATEGORIES=	dns perl5
MASTER_SITES=	http://download.gnu.org.ua/pub/release/dnstools/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Transfer A records from DNS zones and convert to BIND ACLs
WWW=		https://www.gnu.org.ua/software/dnstools/axfr2acl.html

LICENSE=	GPLv3+

RUN_DEPENDS=	p5-Net-DNS>0:dns/p5-Net-DNS

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

PLIST_FILES=	bin/axfr2acl ${SITE_MAN1}/axfr2acl.1.gz

.include <bsd.port.mk>
