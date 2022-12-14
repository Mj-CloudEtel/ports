PORTNAME=	aestats
PORTVERSION=	5.39
CATEGORIES=	games
MASTER_SITES=	http://freebsd.nsu.ru/distfiles/ LOCAL/danfe
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Advanced HTML statistics generator for various games

# Converted from NO_CDROM
LICENSE=	aestats
LICENSE_NAME=	aestats
LICENSE_TEXT=	Commercial use is prohibited
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

ONLY_FOR_ARCHS=	i386 amd64
ONLY_FOR_ARCHS_REASON=	linked from prebuilt object files

USES=		zip
WRKSRC=		${WRKDIR}/${DISTNAME}/Linux-o
LINUXBINDIR=	${WRKSRC}/../Linux-Bin
MAKEFILE=	makefile
MAKE_ARGS=	cc="${CC} -m32"

post-extract: .SILENT
	${CP} ${FILESDIR}/fbsd_stub.c ${WRKSRC}
	${REINPLACE_CMD} -e 's,aes\.o,& fbsd_stub.o,' ${WRKSRC}/${MAKEFILE}
	${ECHO_CMD} >> ${LINUXBINDIR}/alias-example.txt
	${MV} ${WRKSRC}/../unsupported/system/Unreal-225 ${WRKSRC}/../unrealmod

# This port is special.  Author does not distribute source code, but gives
# us Linux .o files instead.  With some hacking, we can build native FreeBSD
# executables from those .o files.
pre-build:
	cd ${WRKSRC} && ${CC} -m32 ${CFLAGS} -c fbsd_stub.c
	${OBJCOPY} --redefine-sym stdout=__stdoutp ${WRKSRC}/aespages.o
	${OBJCOPY} --redefine-sym stdout=__stdoutp ${WRKSRC}/paessubs.o

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/AEstats ${WRKSRC}/preAEs \
		${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${LINUXBINDIR}/AEsscore.cfg \
		${LINUXBINDIR}/AEstats.cfg ${LINUXBINDIR}/banlist.txt \
			${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${LINUXBINDIR}/alias-example.txt \
		${STAGEDIR}${DATADIR}/alias.txt
	${INSTALL_DATA} ${WRKSRC}/../AEstats.txt ${STAGEDIR}${DATADIR}
	cd ${WRKSRC}/.. && ${FIND} logs stats unrealmod | \
		${CPIO} -pdu -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
