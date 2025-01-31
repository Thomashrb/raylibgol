project(
  'gameoflife',
  'cpp',
  version : '0.1')

catch2_dep = dependency('catch2-with-main', version: '>=3.7.1')
raylib_dep = dependency('raylib', version: '>=5.5')

inc = include_directories('include')

subdir('src')
subdir('test')

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries : lib,
                 version : '1.0',
                 name : 'gameoflife',
                 filebase : 'gameoflife',
                 description : 'A very game of line project')
