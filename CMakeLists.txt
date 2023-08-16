cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp Person.h PersonToDat.h PersonToCSV.h Facade.h IExport.h PersonExport.h ProxyExport.h)
