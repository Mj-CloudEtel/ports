PORTNAME=	qmailmrtg7
PORTVERSION=	4.2
PORTREVISION=	5
CATEGORIES=	mail net-mgmt
MASTER_SITES=	http://www.inter7.com/wp-content/uploads/2014/12/ \
		LOCAL/otis/mail_qmailmrtg7/

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Program to create mrtg graphs for qmail activity
WWW=		https://www.inter7.com/?page=qmailmrtg7

LICENSE=	GPLv2

RUN_DEPENDS=	mrtg:net-mgmt/mrtg

USES=		qmail

OPTIONS_DEFINE=	DOCS EXAMPLES

post-patch:
	${REINPLACE_CMD} "s|cc|${CC}|g;s|-s -O|${CFLAGS}|g" ${WRKSRC}/Makefile
	${REINPLACE_CMD} "s|/usr/local|${PREFIX}|g;s|/var/qmail|${QMAIL_PREFIX}|g" \
		${WRKSRC}/checkq.c ${WRKSRC}/qmail.mrtg.cfg

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/qmailmrtg7 ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/qmail.mrtg.cfg ${STAGEDIR}${PREFIX}/etc/qmail.mrtg.cfg.sample
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/index.html ${STAGEDIR}${EXAMPLESDIR}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/INSTALL ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/FAQ ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
