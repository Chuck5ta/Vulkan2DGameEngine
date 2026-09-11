# Mugger/MuggerEngine/CMakeLists.txt

add_library(MuggerEngine STATIC
	"src/Application.cpp"
 "include/MuggerEngine/Renderer.h" "include/MuggerEngine/Window.h" "src/Renderer.cpp" "src/Window.cpp")

target_include_directories(MuggerEngine
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include/MuggerEngine
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/../ThirdParty/GLFW/include
)

target_link_libraries(MuggerEngine
    PRIVATE
        glfw
)

target_compile_features(MuggerEngine
    PUBLIC
        cxx_std_20
)