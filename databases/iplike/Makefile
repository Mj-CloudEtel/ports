PORTNAME=	iplike
PORTVERSION=	2.2.0
CATEGORIES=	databases
MASTER_SITES=	SF/opennms/IPLIKE/stable-2.2/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C implementation of the OpenNMS iplike stored procedure
WWW=		https://www.opennms.org/wiki/IPLIKE

USES=		libtool pgsql

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
SUB_FILES=	pkg-message
INSTALL_TARGET=	install-strip

PLIST_FILES=	lib/postgresql/iplike.so \
		sbin/install_iplike.sh

.include <bsd.port.mk>
