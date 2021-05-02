#!/usr/bin/env python
# setup.py generated by flit for tools that don't yet use PEP 517

from distutils.core import setup

packages = \
['flit', 'flit.vcs', 'flit.vendorized', 'flit.vendorized.readme']

package_data = \
{'': ['*'], 'flit': ['license_templates/*']}

install_requires = \
['flit_core>=3.2.0', 'requests', 'docutils', 'toml']

extras_require = \
{":python_version in '3.3 3.4 3.5'": ['zipfile36'],
 'doc': ['sphinx', 'sphinxcontrib_github_alt', 'pygments-github-lexers'],
 'test': ['testpath', 'responses', 'pytest>=2.7.3', 'pytest-cov']}

entry_points = \
{'console_scripts': ['flit = flit:main']}

setup(name='flit',
      version='3.2.0',
      description='A simple packaging tool for simple packages.',
      author='Thomas Kluyver',
      author_email='thomas@kluyver.me.uk',
      url='https://flit.readthedocs.io/en/latest/',
      packages=packages,
      package_data=package_data,
      install_requires=install_requires,
      extras_require=extras_require,
      entry_points=entry_points,
      python_requires='>=3.5',
     )