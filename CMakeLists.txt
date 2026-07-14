cmake_minimum_required(VERSION 3.10.0)
project(BioBizz_Calculator VERSION 0.1.0 LANGUAGES C CXX)

add_executable(BioBizz_Calculator 
    main.cpp
    src/week_1.cpp
    src/week_2.cpp
    src/week_3.cpp
    src/week_4.cpp
    src/week_5.cpp
    src/week_6.cpp
    src/week_7.cpp
    src/week_8.cpp
    src/week_9.cpp
    src/week_10.cpp
    src/week_11.cpp
    src/week_12.cpp
)

target_include_directories(BioBizz_Calculator PRIVATE include)

include(CTest)
enable_testing(FALSE)

