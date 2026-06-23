cmake_minimum_required(VERSION 3.16)

project(DariaCPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DariaCPP main.cpp
    cycles.cpp
    cycles.h
    cpp_homeworks/homework_2026_06_06.cpp
    cpp_homeworks/homework_2026_06_06.h
    cpp_homeworks/classwork2026_06_23.h cpp_homeworks/classwork2026_06_23.cpp
)

include(GNUInstallDirs)
install(TARGETS DariaCPP
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
