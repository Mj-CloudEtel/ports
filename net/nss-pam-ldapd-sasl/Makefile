PORTNAME=	nss-pam-ldapd
PORTREVISION=	1
PKGNAMESUFFIX=	-sasl

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Advanced fork of nss_ldap with sasl support

LICENSE=	# pet portlint

OPTIONS_SLAVE+=	SASL

SLAVE_PORT=	sasl # In case we come up with more
MASTERDIR=	${.CURDIR}/../nss-pam-ldapd

.include "${MASTERDIR}/Makefile"
