cmake_minimum_required(VERSION 3.12)

project(PhEx)

set(CMAKE_CXX_FLAGS "-O3")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_DEBUG "-O3")

include_directories(${PROJECT_SOURCE_DIR}/Externals/include)

add_executable(PhEx Sources/Core/Core.cpp Sources/Core/Starter.cpp Sources/Core/Window.cpp Sources/Core/Universe/Universe.cpp Sources/Core/Universe/Item.cpp)

target_link_libraries(PhEx ${PROJECT_SOURCE_DIR}/Externals/bins/glew32.dll)
target_link_libraries(PhEx ${PROJECT_SOURCE_DIR}/Externals/bins/glfw3.dll)
target_link_libraries(PhEx opengl32)
target_link_libraries(PhEx glu32)

configure_file("${PROJECT_SOURCE_DIR}/Externals/bins/glew32.dll" "${CMAKE_CURRENT_BINARY_DIR}/glew32.dll" COPYONLY)
configure_file("${PROJECT_SOURCE_DIR}/Externals/bins/glfw3.dll" "${CMAKE_CURRENT_BINARY_DIR}/glfw3.dll" COPYONLY)

