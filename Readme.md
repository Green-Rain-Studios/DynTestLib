# DynTestLib

DynTestLib is a simple dynamic library project designed to demonstrate the creation and usage of shared libraries in C++ projects. It includes basic arithmetic operations and a string echo function, showcasing how to expose both C-style functions and C++ classes through a shared library interface. This project serves as a practical example for developers learning how to build, link, and utilize dynamic libraries across different platforms.

## Features

- Arithmetic operations for integers, floats, and doubles:
  - Addition
  - Multiplication
- String echo function to return the input string.

## Getting Started

### Prerequisites

- CMake 3.10 or higher
- A C++ compiler supporting C++11 or higher (e.g., GCC, Clang, MSVC)

### Building the Library

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/Green-Rain-Studios/DynTestLib.git
   cd DynTestLib
   ```

2. Create a build directory and navigate into it:

   ```bash
   mkdir build && cd build
   ```

3. Run CMake to configure the project and generate the build system:

   ```bash
   cmake ..
   ```

4. Build the library:

   ```bash
   cmake --build .
   ```

   On Windows, this will generate `DynTestLib.dll` and `DynTestLibd.dll` for release and debug builds, respectively. On other platforms, it will generate the appropriate shared library format (e.g., `.so` on Linux).

### Using the Library in Other Projects

To use DynTestLib in your C++ projects, follow these steps:

1. Include the header files in your project.
2. Link against the built `DynTestLib` library (make sure to choose the correct debug or release version as per your build configuration).
3. Use the provided functions and classes as demonstrated in the examples below.

#### Example Usage

```cpp
#include <iostream>
#include "DynTestLib.h"
#include "SimpleClass.h"

int main() {
    // Using the C-style function
    std::cout << add_int(5, 3) << std::endl;  // Output: 8

    // Using the C++ class
    SimpleClass obj;
    std::cout << obj.add(5, 3) << std::endl;  // Output: 8
    std::cout << obj.echo("Hello World") << std::endl;  // Output: Hello World

    return 0;
}
```

Make sure to adjust your compiler's include and library directories to find the DynTestLib headers and binary.

## Contributing

Contributions to DynTestLib are welcome! Please feel free to submit pull requests, report bugs, or suggest features.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.