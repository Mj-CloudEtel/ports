PORTNAME=	nfs-ganesha-kmod
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2
CATEGORIES=	net

MAINTAINER=	freebsd@gandi.net
COMMENT=	Modules to implement required syscalls for userspace fileservers
WWW=		https://github.com/gandi/nfs-ganesha-kmod

LICENSE=	BSD3CLAUSE

BROKEN=		fails to compile: fhlink.c:57: error: redefinition of 'struct fhlink_args'

USES=		kmod

USE_GITHUB=	yes
GH_ACCOUNT=	Gandi

GANESHA_MODULE=	getfhat \
		fhreadlink \
		fhlink \
		setthreaduid \
		setthreadgid \
		setthreadgroups

.for f in ${GANESHA_MODULE}
PLIST_FILES+=	${KMODDIR}/${f}.ko
.endfor

do-install:
.for f in ${GANESHA_MODULE}
	${INSTALL_DATA} ${WRKSRC}/${f}/${f}.ko ${STAGEDIR}/${KMODDIR}/
.endfor

.include <bsd.port.mk>
