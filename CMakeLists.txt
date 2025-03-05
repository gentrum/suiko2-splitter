cmake_minimum_required(VERSION 4.0.0)
project(Suiko2autosplitter)

find_package(OpenCV REQUIRED)
message(STATUS "OpenCV Include Path: ${OpenCV_INCLUDE_DIRS}")

#enable testing
enable_testing()

#google test setup
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.16.0.zip
)
FetchContent_MakeAvailable(googletest)

#add source files
add_library(split_checker src/split_checker.cpp)
target_include_directories(split_checker PUBLIC ${OpenCV_INCLUDE_DIRS})
target_link_libraries(split_checker ${OpenCV_LIBS})

#create test executable
add_executable(runTests tests/test_split_checker.cpp)
target_link_libraries(runTests PRIVATE split_checker gtest gtest_main)

add_executable(Suiko2autosplitter src/suikoden2autosplitter.cpp)
target_link_libraries(Suiko2autosplitter ${OpenCV_LIBS})

add_test(NAME runTests COMMAND runTests)
set_tests_properties(runTests PROPERTIES WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})