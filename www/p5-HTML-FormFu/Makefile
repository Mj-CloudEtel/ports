PORTNAME=	HTML-FormFu
PORTVERSION=	2.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTML Form Creation, Rendering and Validation Framework
WWW=		https://metacpan.org/release/HTML-FormFu

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-File-ShareDir-Install>=0.03:devel/p5-File-ShareDir-Install \
		${RUN_DEPENDS}
RUN_DEPENDS=	p5-Clone>=0.31:devel/p5-Clone \
		p5-Config-Any>=0.18:devel/p5-Config-Any \
		p5-Data-Visitor>=0.26:devel/p5-Data-Visitor \
		p5-DateTime>=0.54:devel/p5-DateTime \
		p5-DateTime-Format-Builder>=0.79.01:devel/p5-DateTime-Format-Builder \
		p5-DateTime-Format-Natural>=0:devel/p5-DateTime-Format-Natural \
		p5-DateTime-Format-Strptime>=1.20:devel/p5-DateTime-Format-Strptime \
		p5-DateTime-Locale>=0.45:devel/p5-DateTime-Locale \
		p5-Email-Valid>=0:mail/p5-Email-Valid \
		p5-File-ShareDir>=0:devel/p5-File-ShareDir \
		p5-HTML-Scrubber>=0:www/p5-HTML-Scrubber \
		p5-HTML-TokeParser-Simple>=3.14:www/p5-HTML-TokeParser-Simple \
		p5-HTTP-Message>=1.64:www/p5-HTTP-Message \
		p5-Hash-Flatten>=0:devel/p5-Hash-Flatten \
		p5-JSON-MaybeXS>=0:converters/p5-JSON-MaybeXS \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-Moose>=2:devel/p5-Moose \
		p5-MooseX-Aliases>=0:devel/p5-MooseX-Aliases \
		p5-MooseX-Attribute-Chained>=1.0.2:devel/p5-MooseX-Attribute-Chained \
		p5-Number-Format>=0:textproc/p5-Number-Format \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Readonly>=0:devel/p5-Readonly \
		p5-Regexp-Common>=0:textproc/p5-Regexp-Common \
		p5-Task-Weaken>=0:devel/p5-Task-Weaken \
		p5-YAML-LibYAML>=0.32:textproc/p5-YAML-LibYAML
TEST_DEPENDS=	p5-CGI>=0:www/p5-CGI \
		p5-Test-Aggregate>=0.371:devel/p5-Test-Aggregate \
		p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-RequiresInternet>=0:devel/p5-Test-RequiresInternet

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
