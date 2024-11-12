@echo off
if not exist "build" (
    echo Build directory not found. Creating and configuring the project...
    mkdir build
    cd build
    cmake -DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake ..
    cd ..
)
echo Building the project...
cmake --build build
