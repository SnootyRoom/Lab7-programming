cmake_minimum_required(VERSION 3.10.0)
project(Lab7-programming VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/Zc:__cplusplus)
endif()

add_executable(geometry_app
    Geometry/Geometry.h
    Geometry/Geometry.cpp
    Geometry/main.cpp
)

add_executable(fraction_app
    Fraction/Fraction.h
    Fraction/Fraction.cpp
    Fraction/main.cpp
)

add_executable(complex_app
    Complex/Complex.h
    Complex/Complex.cpp
    Complex/main.cpp
)

add_executable(vector_3d_app
    Vector3D/Vector3D.h
    Vector3D/Vector3D.cpp
    Vector3D/main.cpp
)