PORTNAME=	Heimdal-Kadm5
PORTVERSION=	0.08
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
#DISTNAME=	Krb5-${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Perl extension for Heimdal administrative client library
WWW=		https://metacpan.org/release/Heimdal-Kadm5

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV=	GSSAPIBASEDIR="${GSSAPIBASEDIR}"

OPTIONS_SINGLE=		GSSAPI
OPTIONS_SINGLE_GSSAPI=	GSSAPI_BASE GSSAPI_HEIMDAL
OPTIONS_DEFAULT=	GSSAPI_BASE

GSSAPI_BASE_USES=	gssapi
GSSAPI_HEIMDAL_USES=	gssapi:heimdal

post-build:
	${STRIP_CMD} ${WRKSRC}/blib/arch/auto/Heimdal/Kadm5/Kadm5.so

.include <bsd.port.mk>
