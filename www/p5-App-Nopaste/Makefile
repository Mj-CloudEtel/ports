PORTNAME=	App-Nopaste
PORTVERSION=	1.013
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easy access to any pastebin
WWW=		https://metacpan.org/release/App-Nopaste

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Browser-Open>=0:www/p5-Browser-Open \
		p5-Class-Load>=0:devel/p5-Class-Load \
		p5-Getopt-Long-Descriptive>=0:devel/p5-Getopt-Long-Descriptive \
		p5-JSON>=0:converters/p5-JSON \
		p5-Path-Tiny>=0:devel/p5-Path-Tiny \
		p5-URI>=0:net/p5-URI \
		p5-WWW-Mechanize>=0:www/p5-WWW-Mechanize \
		p5-namespace-clean>=0.19:devel/p5-namespace-clean
TEST_DEPENDS=	p5-JSON-MaybeXS>=0:converters/p5-JSON-MaybeXS \
		p5-Module-Pluggable>=0:devel/p5-Module-Pluggable \
		p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-Fatal>=0:devel/p5-Test-Fatal \
		p5-libwww>=0:www/p5-libwww

CONFLICTS_INSTALL=	p5-WebService-NoPaste

OPTIONS_DEFINE=	CLIPBOARD GITHUB PASTEBIN
OPTIONS_DEFAULT=CLIPBOARD GITHUB PASTEBIN
CLIPBOARD_DESC=	Support X11 clipboard
GITHUB_DESC=	Support github.com
PASTEBIN_DESC=	Support pastebin.com

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

CLIPBOARD_BUILD_DEPENDS=p5-Clipboard>=0:x11/p5-Clipboard
CLIPBOARD_RUN_DEPENDS=	p5-Clipboard>=0:x11/p5-Clipboard
GITHUB_BUILD_DEPENDS=	p5-Config-GitLike>=0:devel/p5-Config-GitLike
GITHUB_RUN_DEPENDS=	p5-Config-GitLike>=0:devel/p5-Config-GitLike
PASTEBIN_BUILD_DEPENDS=	p5-WWW-Pastebin-PastebinCom-Create>=0:www/p5-WWW-Pastebin-PastebinCom-Create
PASTEBIN_RUN_DEPENDS=	p5-WWW-Pastebin-PastebinCom-Create>=0:www/p5-WWW-Pastebin-PastebinCom-Create

.include <bsd.port.mk>
