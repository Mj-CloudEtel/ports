PORTNAME=	ansible
DISTVERSION=	g20200803
PORTREVISION?=	0
PORTEPOCH=	1
CATEGORIES=	sysutils
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	-${_LIBRARY}

MAINTAINER=	lcook@FreeBSD.org
COMMENT?=	Ansible module to load kernel modules or update /boot/loader.conf
WWW=		https://github.com/dlundgren/ansible-freebsd-modules/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		ansible:module python shebangfix
USE_GITHUB=	yes

GH_ACCOUNT=	dlundgren
GH_PROJECT=	ansible-freebsd-modules
GH_TAGNAME=	537984b53018e36c2511132c3c66ac762f8b36dd
SHEBANG_FILES=	library/${_LIBRARY}

NO_ARCH=	yes
NO_BUILD=	yes

_LIBRARY?=	kld

PLIST_FILES=	${ANSIBLE_MODULESDIR}/${_LIBRARY}

do-install:
	${MKDIR} ${STAGEDIR}${ANSIBLE_MODULESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/library/${_LIBRARY} \
		${STAGEDIR}${ANSIBLE_MODULESDIR}/${_LIBRARY}

.include <bsd.port.mk>
