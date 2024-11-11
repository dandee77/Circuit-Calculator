cmake_minimum_required(VERSION 3.0)
project(OpenCVExample)


set(OpenCV_DIR "C:/opencv/build")
find_package(OpenCV REQUIRED)


include_directories(${OpenCV_INCLUDE_DIRS})



add_executable(OpenCVExample main.cpp)


target_link_libraries(OpenCVExample ${OpenCV_LIBS})