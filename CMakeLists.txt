cmake_minimum_required(VERSION 3.5)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
   set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()

project(LandscapeGUIBUILD LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${PROJECT_SOURCE_DIR}/ui)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(NGL CONFIG REQUIRED)



include_directories(${PROJECT_SOURCE_DIR}/include)


find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(LandscapeGUI)

target_sources(LandscapeGUI PRIVATE
        src/main.cpp
        src/MainWindow.cpp
        src/Mesh.cpp
        src/Evolution.cpp
        src/NGLScene.cpp
        src/NGLSceneMouseControls.cpp
        include/MainWindow.h
        include/InputArea.h
        include/mesh.h
        include/Evolution.h
        include/NGLScene.h
        include/WindowParams.h
        ui/MainWindow.ui
)


target_link_libraries(LandscapeGUI PRIVATE NGL Qt5::Widgets)

add_custom_target(LandscapeGUICopyShaders ALL
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_CURRENT_SOURCE_DIR}/shaders
    $<TARGET_FILE_DIR:LandscapeGUI>/shaders
)



