# CIRCUIT CALCULATOR
A powerful tool for analyzing electrical circuits, providing matrix notation and Gaussian solutions. Designed to help users draw circuits graphically and interpret them using OpenCV and Tesseract OCR.


## FEATURES

- **Circuit Drawing Interface**: Intuitive GUI built with Raylib for circuit creation.
- **Matrix Representation**: Automatically generates matrix notation for the input circuit.
- **Gaussian Solver**: Solves the circuit using Gaussian elimination.
- **AI-Powered Image Recognition**: Processes user-drawn circuits to extract data with OpenCV and Tesseract.


## REQUIREMENTS

- **C++ Compiler**: MSVC (Windows) or GCC/Clang (Linux/macOS).
- **Build Tool**: [CMake](https://cmake.org/download/)
- **Libraries** 
    - [OpenCV](https://opencv.org/releases/) for image processing.
    - [Tesseract OCR](https://github.com/tesseract-ocr/tesseract) for AI-based text recognition
        - Downlaod the [Tesseract Language Data Files](https://github.com/tesseract-ocr/tessdata)
    - [Raylib](https://www.raylib.com/) for the graphical user interface


## INSTALLATION

### 1. Install Dependencies 

**Install vcpkg for Tesseract and OpenCV**
```bash
git clone git clone https://github.com/microsoft/vcpkg.git
```
Navigate to the `vcpkg` directory and run:
- **Windows**
```bash
.\bootstrap-vcpkg.bat
```
- **Linux/macOS**
```bash
./bootstrap-vcpkg.sh
```
**Add vcpkg to PATH (Optional)**
To use `vcpkg` commands globally:
- Windows: Add the full path to `vcpkg.exe` (e.g., `C:\path\to\vcpkg`) to the system environment variables under PATH.
- Linux/macOS: Add `vcpkg` to your PATH by appending the following line to your `.bashrc` or `.zshrc`: 
```bash 
export PATH="$PATH:/path/to/vcpkg"
```
**Install Required Libraries with vcpkg**
```bash
vcpkg install tesseract --no-binarycaching
```
**Integrate vcpkg with CMake (Optional)**
```bash
vcpkg integrate install
```

### 2. Configure Environment Variables
Add the following paths to your system’s environment variables:
- **PATH:**
    - `C:\Program Files\CMake\bin`
    - `C:\opencv\build\x64\vc16\lib`
    - `C:\opencv\build\x64\vc16\bin`
- **System Variables:**
    - `OpenCV_DIR` = `C:\opencv\build`
    - `TESSDATA_PREFIX` = `C:\vcpkg\installed\x64-windows\share\tesseract\tessdata\` (Location of `eng.traineddata`)
    - `Tesseract_DIR` = `C:\vcpkg\installed\x64-windows\sharet\tesseract\`

### 3. Clone the Repository
```bash
git clone https://github.com/dandee77/Circuit-Calculator.git
```
### 4. Build the Project
Run the following commands to build the project:
```bash
cmake -DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake -S . -B build
```
```bash
cmake --build build
```
### 5. Run the Application
After a successful build, execute the program:
- **Windows:**
```bash
.\build\Debug\CircuitCalculator.exe
```
- **Linux/macOS:** (I don't know lmao)

## Contributing
We welcome contributions! To contribute:

1. Fork the repository.
2. Create a feature branch (git checkout -b feature-branch).
3. Commit your changes (git commit -m "Add feature").
4. Push to your fork (git push origin feature-branch).
5. Submit a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.