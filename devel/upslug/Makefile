PORTNAME=	upslug
PORTVERSION=	2.11
CATEGORIES=	devel
MASTER_SITES=	SF/nslu/UpSlug2/${PORTNAME}2-11
DISTNAME=	upslug2-11

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Firmware upload tool for Linksys NSLU2
WWW=		http://www.nslu2-linux.org/wiki/Main/UpSlug

USES=		gmake
GNU_CONFIGURE=	yes

CONFIGURE_ARGS=	--with-libpcap

PLIST_FILES=	sbin/upslug2

.include <bsd.port.mk>
