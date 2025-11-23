# build the tests as executables since they're needed to be executed
add_executable(swcTests
swcTest.cc
)

target_include_directories(swcTests
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}
)

# here we're linking the project library and gtest framework to the test target
target_link_libraries(swcTests
PRIVATE
MyAswProject
GTest::gtest
GTest::gtest_main
)

gtest_discover_tests(swcTests)