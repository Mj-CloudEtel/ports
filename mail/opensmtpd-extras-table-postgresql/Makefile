PKGNAMESUFFIX=	-table-postgresql
PORTREVISION=	0

COMMENT=	PostgreSQL table support for OpenSMTPD

PLIST_FILES=	libexec/opensmtpd/table-postgres

CONFIGURE_ARGS+=	--with-table-postgres

USES=		pgsql

MASTERDIR=	${.CURDIR}/../opensmtpd-extras
SLAVE_PORT=	yes

.include "${MASTERDIR}/Makefile"
