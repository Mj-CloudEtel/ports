CATEGORIES=	audio lang
PKGNAMESUFFIX=	-oggvorbis

COMMENT=	Free Pascal interface to ogg & vorbis libraries

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBOGG LIBVORBIS
LIBOGG_DESC=	Install ogg library
LIBVORBIS_DESC=	Install vorbis library
OPTIONS_DEFAULT=	LIBOGG LIBVORBIS

LIBOGG_LIB_DEPENDS=	libogg.so:audio/libogg
LIBVORBIS_LIB_DEPENDS=	libvorbis.so:audio/libvorbis

.include "${MASTERDIR}/Makefile"
