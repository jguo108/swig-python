
from setuptools import setup, Extension

jgl_module= Extension(
    'jgl',
    libraries = ['jgl'],
    include_dirs = ['/Users/jguo108/work/github/swig-python/jgl'],
    library_dirs = ['/Users/jguo108/work/github/swig-python/jgl'],
    sources = ['jgl/jgl_interface_wrap.cxx'])

setup(
    name = 'jgl',
    version = '1.0',
    description = 'This is a JGL package',
    author = 'Jing Guo',
    author_email = 'jguo108@bloomberg.net',
    url = 'https://docs.python.org/extending/building',
    long_description = '''
    This is really just a JGL package.
    ''',
    ext_modules = [jgl_module])
