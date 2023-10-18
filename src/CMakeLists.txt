project(Compositor)

find_package(Vulkan REQUIRED)
find_package(Libdrm REQUIRED)

file(GLOB_RECURSE source *.c)
file(GLOB_RECURSE header *.h)

include_directories(${Vulkan_INCLUDE_DIRS} ${Libdrm_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${source} ${header})
target_link_libraries(${PROJECT_NAME} ${Vulkan_LIBRARIES} ${Libdrm_LIBRARIES})
