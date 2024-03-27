cmake_minimum_required(VERSION 3.5)

project(practica3v1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(practica3v1 main.cpp
    funciones.h
    funciones.cpp)

include(GNUInstallDirs)
install(TARGETS practica3v1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
