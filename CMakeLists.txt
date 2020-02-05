cmake_minimum_required(VERSION 3.5)

project(SNNE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(Qt5Core_DIR "/opt/Qt/5.14.1/gcc_64/lib/cmake/Qt5Core")

find_package(Qt5Core)

#Bring the headers, such as Student.h into the project

#Can manually add the sources using the set command as follows:
#set(SOURCES src/main.cpp src/SNNE.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")
 
add_executable(SNNE ${SOURCES})
target_link_libraries(SNNE Qt5::Core)