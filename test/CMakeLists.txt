# cmake configurations for testing

# get gtest
include(FetchContent)

FetchContent_Declare(
googletest
URL https://github.com/google/googletest/archive/refs/tags/v1.15.0.zip
)

FetchContent_MakeAvailable(googletest)
include(GoogleTest)

# add swc tests
add_subdirectory(unit)
add_subdirectory(swc)