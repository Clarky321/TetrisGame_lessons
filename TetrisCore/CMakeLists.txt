cmake_minimum_required(VERSION 3.12)

set(ENGINE_PROJECT_NAME TetrisCore)

set(ENGINE_PUBLIC_INCLUDES
	
	includes/TetrisCore/colors.h
	includes/TetrisCore/grid.h
	includes/TetrisCore/block.h
	includes/TetrisCore/position.h
)

set(ENGINE_PRIVATE_SOURCES
	
	src/TetrisCore/colors.cpp
	src/TetrisCore/grid.cpp
	src/TetrisCore/block.cpp
	src/TetrisCore/position.cpp
)

set(ENGINE_PUBLIC_SOURCES
	includes/TetrisCore/blocks.cpp
)

set(ENGINE_ALL_SOURCE
	${ENGINE_PUBLIC_INCLUDES}
	${ENGINE_PRIVATE_SOURCES}
	${ENGINE_PUBLIC_SOURCES}
)

add_library(${ENGINE_PROJECT_NAME} STATIC ${ENGINE_ALL_SOURCE})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${ENGINE_ALL_SOURCE})

target_include_directories(${ENGINE_PROJECT_NAME}
	PUBLIC
		includes
	PRIVATE
		src
)

target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

# ------------------------------------------------------------------------------------- #

add_subdirectory(../external/raylib ${CMAKE_CURRENT_BINARY_DIR}/raylib)
target_link_libraries(${ENGINE_PROJECT_NAME} PUBLIC raylib)

# ------------------------------------------------------------------------------------- #