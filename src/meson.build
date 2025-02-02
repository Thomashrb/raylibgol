srcs = ['utils.cpp', 'rules.cpp']
src_w_main = files(srcs) + files(['main.cpp'])

lib = shared_library('gameoflifelib',
                        srcs,
                        include_directories : inc,
                        dependencies : [],
                        install : true)

executable(
    meson.project_name(),
    sources: src_w_main,
    include_directories : inc,
    dependencies: raylib_lib,
    install: true
)
