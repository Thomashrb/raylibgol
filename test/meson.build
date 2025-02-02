testexe = executable('testexe',
    ['utils_test.cpp', 'rules_test.cpp'],
    include_directories : inc,
    dependencies : catch2_lib,
    link_with : lib)
test('gameoflife_lib test', testexe)
