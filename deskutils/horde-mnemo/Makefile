PORTNAME=	mnemo
PORTVERSION=	4.2.14
PORTREVISION=	1
CATEGORIES=	deskutils www pear
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde web based notes manager
WWW=		https://www.horde.org/apps/mnemo/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		horde php cpe
USE_PHP=	gettext
USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		horde \
		content \
		Horde_Auth \
		Horde_Core \
		Horde_Data \
		Horde_Exception \
		Horde_Form \
		Horde_Group \
		Horde_History \
		Horde_Icalendar \
		Horde_Injector \
		Horde_Perms \
		Horde_Prefs \
		Horde_Share \
		Horde_Support \
		Horde_Text_Filter \
		Horde_Util

OPTIONS_DEFAULT=	PDF
OPTIONS_DEFINE=		PDF
PDF_DESC=		Support PDF generation

PDF_USE=	HORDE_RUN=Horde_Pdf

.include <bsd.port.mk>
