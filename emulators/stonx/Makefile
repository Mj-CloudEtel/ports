PORTNAME=	stonx
PORTVERSION=	0.6.7e.6
PORTREVISION=	3
CATEGORIES=	emulators
MASTER_SITES=	SF/stonx/stonx/0.6.7.6
DISTNAME=	STonX-0.6.7.6

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	AtariST emulator

LICENSE=	GPLv2+ ROM
LICENSE_COMB=	multi
LICENSE_NAME_ROM=	Atari ROM
LICENSE_TEXT_ROM=	Contains ROM (C) by Atari
LICENSE_PERMS_ROM=	auto-accept

BUILD_DEPENDS=	bdftopcf:x11-fonts/bdftopcf \
		gccmakedep:devel/gccmakedep \
		mkfontscale:x11-fonts/mkfontscale \
		${LOCALBASE}/share/fonts/misc/10x20-ISO8859-1.pcf.gz:x11-fonts/font-misc-misc

TOSIMG?=	tos.img
USES=		fonts xorg
FONTNAME=	misc
USE_XORG=	x11 sm ice xext xorgproto
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--x-includes=${LOCALBASE}/include \
		--x-libraries=${LOCALBASE}/lib
ALL_TARGET=	all fnttobdf tosfonts fonts

BINDIR=	${PREFIX}/bin

DATA=	atari/bench1.pas atari/bench1.prg
ETCFILES=	keysyms-alternative keysyms-german keysyms-spanish
DOCS=	../COPYING AUTHORS DEBUGGING INSTALL README RELEASE_NOTES \
	TOS-VERSIONS
FONTS=	System0-iso.pcf System0.pcf System1-iso.pcf System1.pcf \
	System2-iso.pcf System2.pcf

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.options.mk>

pre-build:
	${CP} ${DISTDIR}/${TOSIMG} ${WRKSRC}/tos.img

post-install:
.for f in ${ETCFILES}
	${INSTALL_DATA} ${WRKSRC}/etc/$f ${STAGEDIR}${ETCDIR}/
.endfor
	@${ECHO_MSG} "===> Installing fonts"
	${MKDIR} ${STAGEDIR}${FONTSDIR}
.for f in ${FONTS}
	${INSTALL_DATA} ${WRKSRC}/data/$f ${STAGEDIR}${FONTSDIR}/
	${GZIP_CMD} ${STAGEDIR}${FONTSDIR}/$f
.endfor

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/docs/,} ${STAGEDIR}${DOCSDIR}/

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${DATA:S,^,${WRKSRC}/,} ${STAGEDIR}${EXAMPLESDIR}/

.if !exists(${DISTDIR}/${TOSIMG})
IGNORE=	please get a ROM dump from your AtariST and save it as\
"${TOSIMG}" in "${DISTDIR}" manually, and then make again
.endif

.include <bsd.port.mk>
