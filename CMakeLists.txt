cmake_minimum_required(VERSION 3.5)

project(Snippingtool LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(OpenCV REQUIRED)
find_package(X11 REQUIRED)

message( STATUS "X11_FOUND = ${X11_FOUND}" )
message( STATUS "X11_INCLUDE_DIR = ${X11_INCLUDE_DIR}" )
message( STATUS "X11 LIBRARIES = ${X11_LIBRARIES}" )

file( GLOB SOURCES 
  Displayfuncs/*.cpp
  Displayfuncs/*.h
  Displayfuncs/*.hpp
)

file( GLOB LIBRARIES
    /usr/include/X11/*.h
    ${OpenCV_INCLUDE_DIRS}
    ${X11_INCLUDE_DIR}
)

if(ANDROID)
  add_library(Snippingtool SHARED
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    ${SOURCES}
    ${LIBRARIES}
  )
else()
  add_executable(Snippingtool
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    ${SOURCES}
    ${LIBRARIES}
    )
endif()

target_link_libraries(Snippingtool PRIVATE Qt5::Widgets ${OpenCV_LIBS} ${X11_LIBRARIES})