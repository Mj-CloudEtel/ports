PORTNAME=	Catalyst-Plugin-AutoCRUD
PORTVERSION=	2.200002
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Instant AJAX web front-end for DBIx::Class
WWW=		https://metacpan.org/release/Catalyst-Plugin-AutoCRUD

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Action-RenderView>=0:www/p5-Catalyst-Action-RenderView \
		p5-Catalyst-Model-DBIC-Schema>=0:www/p5-Catalyst-Model-DBIC-Schema \
		p5-Catalyst-Plugin-ConfigLoader>=0:www/p5-Catalyst-Plugin-ConfigLoader \
		p5-Catalyst-Runtime>=5.70000:www/p5-Catalyst-Runtime \
		p5-Catalyst-View-JSON>=0:www/p5-Catalyst-View-JSON \
		p5-Catalyst-View-TT>=0:www/p5-Catalyst-View-TT \
		p5-DBIx-Class-Schema-Loader>=0:databases/p5-DBIx-Class-Schema-Loader \
		p5-Data-Page>=0:databases/p5-Data-Page \
		p5-File-Slurp>=0:devel/p5-File-Slurp \
		p5-JSON>=2.90:converters/p5-JSON \
		p5-Lingua-EN-Inflect-Number>=0:textproc/p5-Lingua-EN-Inflect-Number \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-MRO-Compat>=0:devel/p5-MRO-Compat \
		p5-SQL-Translator>=0:databases/p5-SQL-Translator
TEST_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-JSON-XS>=0:converters/p5-JSON-XS \
		p5-Test-WWW-Mechanize-Catalyst>=0:devel/p5-Test-WWW-Mechanize-Catalyst

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
