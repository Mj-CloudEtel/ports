PORTNAME=	Test-TrailingSpace
PORTVERSION=	0.0601
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Test for lack of trailing space
WWW=		https://metacpan.org/release/Test-TrailingSpace

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Find-Object-Rule>=0.0301:devel/p5-File-Find-Object-Rule
TEST_DEPENDS=	p5-File-TreeCreate>=0:devel/p5-File-TreeCreate

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
