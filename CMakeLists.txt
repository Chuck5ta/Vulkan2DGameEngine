# Mugger/CMakeLists.txt

cmake_minimum_required(VERSION 3.25)

project(Mugger
	VERSION 0.1.0
	LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(ThirdParty/GLFW)
add_subdirectory(MuggerEngine)
add_subdirectory(MuggerGame)