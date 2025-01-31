testexe = executable('testexe',
    ['utils_test.cpp', 'rules_test.cpp'],
    include_directories : inc,
    dependencies : catch2_dep,
    link_with : lib)
test('gameoflife_lib test', testexe)
