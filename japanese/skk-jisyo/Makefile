PORTNAME=	skk-jisyo
PORTVERSION=	201409
PORTREVISION=	0
CATEGORIES=	japanese
MASTER_SITES=	LOCAL/matusita/${PORTNAME}
.if defined(WITH_SKKJISYO_CDB)
PKGNAMESUFFIX=	-cdb
.endif
DIST_SUBDIR=	skk-jisyo

MAINTAINER?=	ports@FreeBSD.org
COMMENT?=	Jisyo (dictionary) files for the SKK Japanese-input software
WWW=		http://openlab.jp/skk/

.if defined(WITH_SKKJISYO_CDB)
BUILD_DEPENDS=	${LOCALBASE}/bin/cdb:databases/tinycdb
.endif

SKKDIR?=	share/skk
SKK_JISYO_TYPE?=L M S

USES=		tar:bzip2
NO_WRKSUBDIR=		yes
EXTRACT_CMD=		${CP}
EXTRACT_BEFORE_ARGS=	-p
EXTRACT_AFTER_ARGS=	${WRKSRC}
PLIST_SUB+=		SKKDIR=${SKKDIR}
.for type in ${SKK_JISYO_TYPE}
DISTFILES+=		SKK-JISYO.${type}.${PORTVERSION}.bz2
PLIST_FILES+=		${SKKDIR}/SKK-JISYO.${type}${CDBSUFFIX}
.endfor

.if defined(WITH_SKKJISYO_CDB)
CDBSUFFIX=		.cdb
.else
CDBSUFFIX=		#empty
NO_BUILD=		yes
.endif

post-extract:
	@(cd ${WRKSRC}; ${BZIP2_CMD} -d *.bz2)

.if defined(WITH_SKKJISYO_DELCOMMENTS)
# Strip comments in transtation candidates list.
# Candidate list starts with '/', and each candidate is concatenated by
# '/' (e.g., "/c1/c2/".)  Each candidate may have a comment just after
# the candidate, leading a marker character ';' (e.g. /c3;comment/).
post-patch:
.for type in ${SKK_JISYO_TYPE}
	${REINPLACE_CMD} -e '/^[^;]/s,;[^/]*/,/,g' -e '/^>/d' \
		${WRKSRC}/SKK-JISYO.${type}.${PORTVERSION}
.endfor
.endif

.if defined(WITH_SKKJISYO_CDB)
# Convert plaintext jisyo data to CDB database by cdbmake.
# Each line consists of "+${klen},${dlen}:${key}->${data}", where klen/dlen
# are length of key/data.  A blank line at the end of data is required.
# See also: <URL:http://cr.yp.to/cdb/cdbmake.html>.
do-build:
.for type in ${SKK_JISYO_TYPE}
	${AWK} '/^[^;]/ { \
			s = substr($$0, index($$0, " ") + 1); \
			print "+" length($$1) "," length(s) ":" $$1 "->" s; \
		} \
		END { \
			print ""; \
		}' \
		< ${WRKSRC}/SKK-JISYO.${type}.${PORTVERSION} | \
	${LOCALBASE}/bin/cdb -c -t - \
		${WRKSRC}/SKK-JISYO.${type}.${PORTVERSION}${CDBSUFFIX}
.endfor
.endif

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/${SKKDIR}
.for type in ${SKK_JISYO_TYPE}
	${INSTALL_DATA} ${WRKSRC}/SKK-JISYO.${type}.${PORTVERSION}${CDBSUFFIX} \
		${STAGEDIR}${PREFIX}/${SKKDIR}/SKK-JISYO.${type}${CDBSUFFIX}
.endfor

.include <bsd.port.mk>
