PORTNAME=	bnc
PORTVERSION=	2.9.4
CATEGORIES=	irc
MASTER_SITES=	http://home.risingnet.net/download/ \
		http://bnc.acmeshells.com/ \
		http://www.sourcefiles.org/System/Servers/ \
		https://BSDforge.com/projects/source/irc/bnc/
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Simple IRC relay proxy with support for virtual hosting

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

DOCS=		COPYING Changelog README example.conf
BINS=		bnc mkpasswd
SCRIPTS=	bncchk bncsetup

OPTIONS_DEFINE=	DOCS

post-patch:
	${SED} -e 's,@PREFIX@,${PREFIX},g' ${WRKSRC}/bncsetup

do-install:
	${INSTALL_PROGRAM} ${BINS:S,^,${WRKSRC}/,} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${SCRIPTS:S,^,${WRKSRC}/,} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/example.conf ${STAGEDIR}${PREFIX}/etc/bnc.conf.sample

.include <bsd.port.mk>
