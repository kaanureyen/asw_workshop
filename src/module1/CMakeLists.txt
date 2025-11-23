SET(MODULE_NAME module1)

add_library(${MODULE_NAME}
${MODULE_NAME}.c
)

target_include_directories(${MODULE_NAME}
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}
)