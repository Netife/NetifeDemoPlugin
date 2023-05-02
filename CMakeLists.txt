cmake_minimum_required(VERSION 3.25)
project(NetifeDemoPlugin)

set(CMAKE_CXX_STANDARD 17)
find_package(Poco REQUIRED Foundation)
add_library(NetifeDemoPlugin SHARED
        include/plugins/v1/NetifePlugins.h
        DemoClass.cpp DemoClass.h library.cpp include/plugins/v1/BaseAgent.h)
target_link_libraries(NetifeDemoPlugin PRIVATE Poco::Foundation)