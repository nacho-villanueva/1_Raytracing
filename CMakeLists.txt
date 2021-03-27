cmake_minimum_required(VERSION 3.17)
project(1_Raytracing)

set(CMAKE_CXX_STANDARD 14)

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

set(GLEW_STATIC TRUE)
add_subdirectory(glew-cmake)
add_subdirectory(glfw)

add_executable(${PROJECT_NAME} src/main.cpp src/Renderer.cpp src/Renderer.h src/Utilities/Color.cpp src/Utilities/MathU.h src/Utilities/Color.h src/Utilities/Vector3.cpp src/Utilities/Vector3.h src/Utilities/Ray.cpp src/Utilities/Ray.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glfw/include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glew-cmake/include)

target_link_libraries(${PROJECT_NAME} glfw libglew_static)
