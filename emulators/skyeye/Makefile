PORTNAME=	skyeye
PORTVERSION=	1.2.5
PORTREVISION=	7
DISTVERSIONSUFFIX=	_REL
CATEGORIES=	emulators
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Environment simulates typical ARM-base embedded computer systems
WWW=		http://www.skyeye.org/

LICENSE=	GPLv2

USE_CSTD=	gnu89
USE_BINUTILS=	yes
USE_GCC=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_func_working_mktime=yes
CFLAGS+=	-fcommon

PLIST_FILES=	bin/skyeye

.include <bsd.port.mk>
