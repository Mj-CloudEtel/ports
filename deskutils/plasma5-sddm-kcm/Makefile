PORTNAME=	sddm-kcm
DISTVERSION=	${KDE_PLASMA_VERSION}
PORTREVISION=	1
CATEGORIES=	deskutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 config module for SDDM
WWW=		https://www.kde.org/plasma-desktop

USES=		cmake compiler:c++11-lib gettext kde:5 pkgconfig qt:5 tar:xz \
		xorg
USE_KDE=	archive attica auth codecs completion config configwidgets \
		coreaddons ecm i18n jobwidgets kcmutils kdeclarative kio \
		newstuff service widgetsaddons windowsystem xmlgui
USE_QT=		concurrent core dbus declarative designer gui network uiplugin \
		widgets x11extras xml \
		buildtools:build qmake:build
USE_XORG=	ice sm x11 xcb xcursor xext xfixes

.include <bsd.port.mk>
