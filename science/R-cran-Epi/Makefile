PORTNAME=	Epi
PORTVERSION=	2.47
CATEGORIES=	science
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Package for statistical analysis in epidemiology
WWW=		https://cran.r-project.org/web/packages/Epi/

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-cmprsk>0:science/R-cran-cmprsk \
		R-cran-etm>0:science/R-cran-etm \
		R-cran-plyr>0:devel/R-cran-plyr \
		R-cran-dplyr>0:math/R-cran-dplyr \
		R-cran-numDeriv>0:math/R-cran-numDeriv \
		R-cran-data.table>0:devel/R-cran-data.table \
		R-cran-zoo>0:math/R-cran-zoo \
		R-cran-magrittr>0:devel/R-cran-magrittr
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
