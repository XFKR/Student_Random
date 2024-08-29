#指定最小CMake版本
cmake_minimum_required(VERSION 3.30.2)
#初始化项目
project(Student_Random VERSION 1.0.0 LANGUAGES C CXX)

#设置 C/C++版本
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)

#读取根目录所有源文件 
aux_source_directory(. DIR_SRCS)

#指定生成文件名及主文件
add_executable(Student_Random main.cpp)

#添加子目录
add_subdirectory(DataStruct) #数据结构
# add_subdirectory(csvReader)  #.csv文件读取
#添加链接库
target_link_libraries(Student_Random DataStruct)
# target_link_libraries(Student_Random csvReader)

include(CTest)
enable_testing()
include(CPack)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})