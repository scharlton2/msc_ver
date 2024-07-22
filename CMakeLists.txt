cmake_minimum_required(VERSION 3.5.0)
project(msc_ver VERSION 0.1.0 LANGUAGES C CXX)

add_executable(msc_ver main.cpp)

include(CTest)
enable_testing()

add_test(NAME msc_ver COMMAND msc_ver)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
