# Mugger/MuggerGame/CMakeLists.txt

add_executable(MuggerGame
	"src/main.cpp"
)

target_link_libraries(MuggerGame
	PRIVATE
		MuggerEngine
)