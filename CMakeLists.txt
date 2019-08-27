cmake_minimum_required(VERSION 2.4)
project(Verwaltungsschale CXX)

set(CMAKE_CXX_STANDARD 14)

set (CMAKE_INCLUDE_CURRENT_DIR ON)

#add_library(Verwaltungsschale SHARED src/AssetAdministrationShell.hpp src/includeCommon.hpp src/includeDictionaries.hpp src/includeModeling.hpp test.cpp)

add_executable(Verwaltungsschale test.cpp src/includeCommon.hpp src/includeDictionaries.hpp src/includeModeling.hpp)

set_target_properties(Verwaltungsschale PROPERTIES LINKER_LANGUAGE CXX)