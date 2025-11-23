SET(UT_MODULE_NAME module1)
SET(UT_TEST_NAME ${UT_MODULE_NAME}UT)

# build the tests as executables since they're needed to be executed
add_executable(${UT_TEST_NAME}
${UT_TEST_NAME}.cc
)

target_include_directories(${UT_TEST_NAME}
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}
)

# here we're linking the module library and gtest framework to the test target
target_link_libraries(${UT_TEST_NAME}
PRIVATE
${UT_MODULE_NAME}
GTest::gtest
GTest::gtest_main
)

gtest_discover_tests(${UT_TEST_NAME})