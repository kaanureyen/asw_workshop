SET(MODULE_NAME OutputWrapper)

add_library(${MODULE_NAME}
${MODULE_NAME}.c
)

target_include_directories(${MODULE_NAME}
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}
)

target_include_directories(${MODULE_NAME}
PRIVATE
${CMAKE_SOURCE_DIR}/include/RTE
)