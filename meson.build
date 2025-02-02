project(
  'gameoflife',
  'cpp',
  version : '0.1')

raylib_lib = dependency('raylib', version: '>=5.5')
catch2_lib = subproject('catch2').get_variable('catch2_with_main_dep')

inc = include_directories('include')

subdir('src')
subdir('test')

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries : lib,
                 version : '1.0',
                 name : 'gameoflife',
                 filebase : 'gameoflife',
                 description : 'A very game of line project')
