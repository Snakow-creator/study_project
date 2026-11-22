cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME MySorting)
project($(PROJECT_NAME))

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) # ставит статические библеотеки в lib
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) # ставит динамические библиотеки в lib
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin) # для конфигурации release помещает исполняемые программы в build/bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE}) # тот же путь для DEBUG

set(PROG_LIBRARY "${PROJECT_NAME}") # имя будущей библиотеки, наше значение это MySortings
set(PROG_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include") # здесь лежит главный CMakeLists.txt
include_directories(${PROG_INCLUDE}) # компилятор ищет здесь все заголовочные файлы

add_subdirectory(src) # чтение CMakeLists.txt в директории




