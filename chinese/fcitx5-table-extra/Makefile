PORTNAME=	fcitx5-table-extra
DISTVERSION=	5.0.6
PORTREVISION=	1
CATEGORIES=	chinese textproc

MAINTAINER=	khng@FreeBSD.org
COMMENT=	Extra table support for Fcitx5
WWW=		https://github.com/fcitx/fcitx5-table-extra

LICENSE=	GPLv2+ GPLv3
LICENSE_COMB=	multi

LIB_DEPENDS=	libIMETable.so:chinese/libime \
		libFcitx5Core.so:textproc/fcitx5

USES=		gettext-tools cmake kde:5

USE_GITHUB=	yes
GH_ACCOUNT=	fcitx

USE_KDE=	ecm

INSTALL_TARGET=	install

CONFLICTS_INSTALL=	zh-fcitx-table-extra # share/icons/hicolor/48x48/apps/fcitx-cantonese.png

.include <bsd.port.mk>
