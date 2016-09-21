cmake_minimum_required(VERSION 3.6.1)

find_package(CURSES REQUIRED)

include_directories(public)
file(GLOB SOURCES "private/*.cpp")

set(EXECUTABLE_NAME "app")
add_executable(${EXECUTABLE_NAME} ${SOURCES} main.cpp)

include_directories(${CURSES_INCLUDE_DIR})
target_link_libraries(${EXECUTABLE_NAME} ${CURSES_LIBRARIES})