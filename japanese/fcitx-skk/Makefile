PORTNAME=	fcitx-skk
PORTVERSION=	0.1.4
PORTREVISION=	3
CATEGORIES=	japanese
MASTER_SITES=	http://download.fcitx-im.org/${PORTNAME}/
DIST_SUBDIR=	fcitx

MAINTAINER=	hiroto.kagotani@gmail.com
COMMENT=	SKK support for Fcitx
WWW=		https://fcitx-im.org/wiki/Fcitx

LICENSE=	GPLv3

RUN_DEPENDS=	${LOCALBASE}/share/skk/SKK-JISYO.L:japanese/skk-jisyo
LIB_DEPENDS=	libfcitx-config.so:chinese/fcitx \
		libskk.so:japanese/libskk
BUILD_DEPENDS=	bash:shells/bash

USES=		cmake compiler:c++11-lang gettext gnome pkgconfig tar:xz
CMAKE_ARGS+=	-DSKK_DEFAULT_PATH=${LOCALBASE}/share/skk/SKK-JISYO.L

OPTIONS_DEFINE=	QT5
OPTIONS_DEFAULT=QT5
QT5_DESC=	Enable Qt for GUI configuration

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MQT5}
USES+=		qt:5
USE_QT=		buildtools:build qmake:build gui widgets
USE_LDCONFIG=	${PREFIX}/lib/fcitx/qt
PLIST_SUB+=	QT5=""
LIB_DEPENDS+=	libFcitxQt5WidgetsAddons.so:textproc/fcitx-qt5
.else
CMAKE_ARGS+=	-DENABLE_QT=OFF
PLIST_SUB+=	QT5="@comment "
.endif

.include <bsd.port.mk>
