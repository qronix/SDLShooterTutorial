cmake_minimum_required(VERSION 3.28)
project(2DShooterUpper C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)

find_package(SDL2 REQUIRED)

set(SDL2_IMAGE_PATH "SDL2_image-2.8.2\\x86_64-w64-mingw32")
find_package(SDL2_image REQUIRED)
#find_package(SDL2_ttf REQUIRED)

include_directories(2DShooterUpper)

include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})
include_directories(${SDL2_TTF_INCLUDE_DIRS})

add_executable(2DShooterUpper
        2DShooterUpper/common.h
        2DShooterUpper/defs.h
        2DShooterUpper/draw.c
        2DShooterUpper/draw.h
        2DShooterUpper/init.c
        2DShooterUpper/init.h
        2DShooterUpper/input.c
        2DShooterUpper/input.h
        2DShooterUpper/main.c
        2DShooterUpper/main.h
        2DShooterUpper/stage.c
        2DShooterUpper/stage.h
        2DShooterUpper/structs.h
        2DShooterUpper/util.c
        2DShooterUpper/util.h)


target_link_libraries(2DShooterUpper PRIVATE ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES} ${SDL2_TTF_LIBRARIES})
