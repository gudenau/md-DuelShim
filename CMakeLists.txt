cmake_minimum_required(VERSION 3.27)
project(DuelShim C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)

add_library(DuelShim SHARED
    include/shims.h

    src/library.c
    src/shims.c

    external/detours/src/detours.h
    external/detours/src/detver.h

    external/detours/src/detours.cpp
    external/detours/src/modules.cpp
    external/detours/src/disasm.cpp
    external/detours/src/image.cpp
    external/detours/src/creatwth.cpp
    external/detours/src/disolx86.cpp
    external/detours/src/disolx64.cpp
    external/detours/src/disolia64.cpp
    external/detours/src/disolarm.cpp
    external/detours/src/disolarm64.cpp
)

target_include_directories(DuelShim PRIVATE
    include
    external/detours/src
)

add_compile_definitions(_AMD64_)
add_compile_definitions(UNICODE)
add_compile_definitions(WIN32_LEAN_AND_MEAN)

add_executable(DuelShimLauncher
    launcher/main.c
)
