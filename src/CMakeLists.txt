# library/modules config
add_subdirectory(module1)
add_subdirectory(module2)
add_subdirectory(InputWrapper)
add_subdirectory(OutputWrapper)


# note that we're building it as a library since it won't be directly executed
# remember this is an Autosar SWC and it will be called from another module,
# it will have init and cyclic runnables.
# not has a single point of entry as in a desktop program.
add_library(MyAswProject
MyAswProject.c
)

target_include_directories(MyAswProject
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(MyAswProject
PUBLIC
module1
module2
InputWrapper
OutputWrapper)
