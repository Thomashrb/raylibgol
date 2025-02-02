project(
  'gameoflife',
  'cpp',
  version : '0.1')

catch2_lib = subproject('catch2').get_variable('catch2_with_main_dep')
# Raylib start
cmake = import('cmake')
raylib_opts = cmake.subproject_options()
raylib_opts.set_install(false)
raylib_opts.add_cmake_defines({
  'BUILD_EXAMPLES': 'OFF',
  'PLATFORM': 'Desktop',
})
raylib_lib = cmake.subproject('raylib', options: raylib_opts).dependency('raylib')
# Raylib end

inc = include_directories('include')

subdir('src')
subdir('test')

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries : lib,
                 version : '1.0',
                 name : 'gameoflife',
                 filebase : 'gameoflife',
                 description : 'A very game of line project')
