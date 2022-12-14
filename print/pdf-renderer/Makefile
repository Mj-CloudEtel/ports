PORTNAME=	pdf-renderer
PORTVERSION=	0.9.1
PORTEPOCH=	1
CATEGORIES=	print java
MASTER_SITES=	http://java.net/downloads/${PORTNAME}/
DISTNAME=	PDFRenderer-full-${PORTVERSION}

MAINTAINER=	ale@FreeBSD.org
COMMENT=	100% Java PDF renderer and viewer
WWW=		https://pdf-renderer.dev.java.net/

LICENSE=	LGPL21

BROKEN_armv6=		fails to install: swinglabs-build-impl.xml: Javadoc returned 1
BROKEN_armv7=		fails to install: swinglabs-build-impl.xml: Javadoc returned 1

USES=		dos2unix zip
NO_WRKSUBDIR=	yes
USE_JAVA=	yes
USE_ANT=	yes

ALL_TARGET=	jar

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS
DOS2UNIX_FILES=	swinglabs-build-impl.xml

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
ALL_TARGET+=	javadoc
.endif

.include <bsd.port.pre.mk>

.if ${JAVA_PORT_VERSION:M*8*}
EXTRA_PATCHES+=	${PATCHDIR}/extra-patch-swinglabs-build-impl.xml
.endif

do-install:
	@${ECHO_MSG} -n ">> Installing JAR file as ${JAVAJARDIR}/${PORTNAME}.jar..."
	@${INSTALL_DATA} ${WRKSRC}/dist/PDFRenderer.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar
	@${ECHO_MSG} " [DONE]"
.if ${PORT_OPTIONS:MDOCS}
	@${ECHO_MSG} -n ">> Installing documentation..."
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC}/dist && ${FIND} javadoc \
	  | ${CPIO} -pdmu -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${DOCSDIR} > /dev/null 2>&1
	@${ECHO_MSG} " [DONE]"
.endif

.include <bsd.port.post.mk>
