PORTNAME=	Vimana
PORTVERSION=	2010.09303
PORTREVISION=	4
CATEGORIES=	editors perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CORNELIUS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Vim script manager
WWW=		https://metacpan.org/release/Vimana

BUILD_DEPENDS=	vim:editors/vim
RUN_DEPENDS=	vim:editors/vim \
		p5-App-CLI>=0.08:devel/p5-App-CLI \
		p5-Archive-Extract>=0.34:archivers/p5-Archive-Extract \
		p5-DateTime>=0:devel/p5-DateTime \
		p5-Exporter-Lite>=0.2:devel/p5-Exporter-Lite \
		p5-File-Type>=0.22:devel/p5-File-Type \
		p5-HTTP-Lite>=0:www/p5-HTTP-Lite \
		p5-Mouse>=0:devel/p5-Mouse \
		p5-PathTools>=0:devel/p5-PathTools \
		p5-URI>=1.37:net/p5-URI \
		p5-YAML>=0:textproc/p5-YAML \
		p5-libwww>=5.835:www/p5-libwww

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
