cmake_minimum_required(VERSION 4.1)
project(raylibgol VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
    message(WARNING "Default build type is not set: options are: Debug Release RelWithDebInfo MinSizeRel.")
endif()

include(FetchContent)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 5.5
    GIT_SHALLOW TRUE
)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.5.1
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(raylib Catch2)

# Main executable
add_executable(${PROJECT_NAME} src/main.cpp src/game.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

# Test executable
enable_testing()
add_executable(tests tests/test_main.cpp tests/test_example.cpp src/game.cpp)
target_include_directories(tests PRIVATE include)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain raylib)

# Register tests
include(CTest)
include(Catch)
catch_discover_tests(tests)
