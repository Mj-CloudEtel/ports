PORTNAME=	mygui
PORTVERSION=	3.4.0
DISTVERSIONPREFIX=	MyGUI
CATEGORIES=	x11-toolkits graphics devel

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT?=	Fast, simple and flexible GUI system for games and 3D applications
WWW=		http://mygui.info/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING.MIT

.if !defined(MASTERDIR)
LIB_DEPENDS=	libfreetype.so:print/freetype2 \
		libOIS.so:devel/ois
.else
LIB_DEPENDS+=	libMyGUIEngine.so:x11-toolkits/mygui

BUILD_WRKSRC=	${WRKSRC}/${MYGUI_SUBDIR}
INSTALL_WRKSRC=	${WRKSRC}/${MYGUI_SUBDIR}
.endif

USE_GITHUB=	yes
GH_ACCOUNT=	MyGUI

MYGUI_RENDERSYSTEM?=	0

USES+=		cmake:insource compiler:c++11-lib pkgconfig
CMAKE_ARGS=	-DMYGUI_BUILD_DEMOS=FALSE \
		-DMYGUI_BUILD_TOOLS=FALSE \
		-DMYGUI_BUILD_DOCS=FALSE \
		-DMYGUI_RENDERSYSTEM=${MYGUI_RENDERSYSTEM}
USE_LDCONFIG=	yes

PLIST=		${.CURDIR}/pkg-plist

post-patch:
	@${REINPLACE_CMD} -e '/install/ s|lib/pkgconfig|libdata/pkgconfig|' \
		${WRKSRC}/CMake/ConfigureBuild.cmake

.include <bsd.port.mk>
