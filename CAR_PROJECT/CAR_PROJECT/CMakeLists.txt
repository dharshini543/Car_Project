cmake_minimum_required(VERSION 3.16)

project(CAR_PROJECT LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CAR_PROJECT main.cpp
    Accelerator.h Accelerator.cpp
    Brake.h Brake.cpp
    Car.h Car.cpp
    Driver.h Driver.cpp
    Enginee.h Enginee.cpp
    Wheel.h Wheel.cpp)

include(GNUInstallDirs)
install(TARGETS CAR_PROJECT
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
