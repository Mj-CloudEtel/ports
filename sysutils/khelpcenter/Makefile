PORTNAME=	khelpcenter
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 application to show KDE application documentation
WWW=		https://projects.kde.org/projects/kde/workspace/khelpcenter

LIB_DEPENDS=	libxapian.so:databases/xapian-core

USES=		cmake compiler:c++11-lib desktop-file-utils gettext gnome \
		grantlee:5 kde:5 qt:5 shebangfix tar:xz xorg
USE_GNOME=	libxml2
USE_KDE=	archive auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons emoticons i18n init \
		itemmodels itemviews jobwidgets js kcmutils \
		kio khtml parts service solid sonnet textwidgets widgetsaddons \
		windowsystem xmlgui \
		ecm:build
# This port depends on doctools; we need the entities and such for runtime
# documentation support, where all the other KDE Plasma parts need it
# only for the build-time documentation-generation.
USE_KDE+=	doctools
USE_QT=		concurrent core dbus gui network widgets xml \
		buildtools:build qmake:build
USE_XORG=	x11
SHEBANG_FILES=	searchhandlers/khc_mansearch.pl

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
