PORTNAME=	qiskit-terra
DISTVERSION=	0.21.2
CATEGORIES=	science python # quantum-computing
#MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Terra submodule of the Quiskit framework for quantum computing
WWW=		https://qiskit.org/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

PY_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}ply>=3.10:devel/py-ply@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>=5:sysutils/py-psutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}rustworkx>=0.11.0:math/py-rustworkx@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>=1.5:science/py-scipy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sympy>=1.3:math/py-sympy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dill>=0.3:devel/py-dill@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dateutil>=2.8.0:devel/py-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}stevedore>=3.0.0:devel/py-stevedore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}symengine>=0.9:math/py-symengine@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tweedledum>=1.1:science/py-tweedledum@${PY_FLAVOR}
BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools-rust>0:devel/py-setuptools-rust@${PY_FLAVOR} \
		${PY_DEPENDS}
RUN_DEPENDS=	${PY_DEPENDS}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ddt>0:devel/py-ddt@${PY_FLAVOR} # no test requirements are listed in setup.py, see https://github.com/Qiskit/qiskit-terra/issues/8498

USES=		cargo python:3.8+
USE_PYTHON=	distutils autoplist pytest # tests fail to run through pytest, see https://github.com/Qiskit/qiskit-terra/issues/8500

USE_GITHUB=	yes
GH_ACCOUNT=	Qiskit

CARGO_CRATES=	ahash-0.7.6 \
		autocfg-1.1.0 \
		bitflags-1.3.2 \
		cfg-if-1.0.0 \
		crossbeam-channel-0.5.6 \
		crossbeam-deque-0.8.2 \
		crossbeam-epoch-0.9.10 \
		crossbeam-utils-0.8.11 \
		either-1.7.0 \
		getrandom-0.2.7 \
		hashbrown-0.12.3 \
		hermit-abi-0.1.19 \
		indexmap-1.9.1 \
		indoc-1.0.6 \
		libc-0.2.126 \
		libm-0.2.2 \
		lock_api-0.4.7 \
		matrixmultiply-0.3.2 \
		memoffset-0.6.5 \
		ndarray-0.15.6 \
		num-bigint-0.4.3 \
		num-complex-0.4.2 \
		num-integer-0.1.45 \
		num-traits-0.2.15 \
		num_cpus-1.13.1 \
		numpy-0.16.2 \
		once_cell-1.13.0 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.3 \
		ppv-lite86-0.2.16 \
		proc-macro2-1.0.41 \
		pyo3-0.16.5 \
		pyo3-build-config-0.16.5 \
		pyo3-ffi-0.16.5 \
		pyo3-macros-0.16.5 \
		pyo3-macros-backend-0.16.5 \
		quote-1.0.20 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.3 \
		rand_distr-0.4.3 \
		rand_pcg-0.3.1 \
		rawpointer-0.2.1 \
		rayon-1.5.3 \
		rayon-core-1.9.3 \
		redox_syscall-0.2.15 \
		scopeguard-1.1.0 \
		smallvec-1.9.0 \
		syn-1.0.98 \
		target-lexicon-0.12.4 \
		unicode-ident-1.0.2 \
		unindent-0.1.9 \
		version_check-0.9.4 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		windows-sys-0.36.1 \
		windows_aarch64_msvc-0.36.1 \
		windows_i686_gnu-0.36.1 \
		windows_i686_msvc-0.36.1 \
		windows_x86_64_gnu-0.36.1 \
		windows_x86_64_msvc-0.36.1

CARGO_BUILD=	no
CARGO_INSTALL=	no
CARGO_TEST=	no
CARGO_TARGET_DIR=	${WRKSRC}/target

TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

PLIST_FILES=	${PYTHON_SITELIBDIR}/qiskit/_accelerate${PYTHON_EXT_SUFFIX}.so

post-patch: # project was renamed, see https://github.com/Qiskit/rustworkx/issues/656
	@${FIND} ${WRKSRC} -name "*.py" | ${XARGS} ${REINPLACE_CMD} -i '' -e 's|retworkx|rustworkx|'

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/qiskit/_accelerate.cpython-${PYTHON_SUFFIX}.so

.include <bsd.port.mk>
