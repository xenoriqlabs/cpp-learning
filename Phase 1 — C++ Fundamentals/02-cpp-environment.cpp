// 1. Compiler

/*
A compiler converts C++ source code into machine-readable code.

Example:
C++ Source Code → Compiler → Machine Code

Popular C++ compilers:
- GCC / G++
- Clang
- Microsoft Visual C++ (MSVC)
*/

// 2. IDE

/*
IDE stands for Integrated Development Environment.

An IDE usually provides:
- Code editor
- Compiler integration
- Debugger
- Build tools
- Project management

Examples:
- Visual Studio
- Code::Blocks
- CLion
- Eclipse
*/

// 3. VS Code

/*
Visual Studio Code (VS Code) is a source-code editor.

VS Code itself is NOT a C++ compiler.

To develop C++ in VS Code, you normally need:
- VS Code
- C++ extension
- C++ compiler such as G++
*/

// 4. GCC / G++

/*
GCC stands for GNU Compiler Collection.

G++ is the GNU compiler used for C++.

Example command:

g++ program.cpp -o program.exe

program.cpp  → C++ source file
program.exe  → executable file
*/

// 5. Compilation Process

/*
The C++ compilation process generally involves:

1. Preprocessing
2. Compilation
3. Assembly
4. Linking

Simplified process:

Source Code → Compiler → Object Code → Linker → Executable
*/

// 6. Source Code

// Source code is the C++ code written by the programmer.

// Example:

#include <iostream>

int main()
{
    std::cout << "Hello, World!";
    return 0;
}

// 7. Object Code

/*
Object code is the machine-level code generated from the
source code during compilation.

Object files commonly have extensions:
- .o   → Linux / Unix
- .obj → Windows with MSVC
*/

// 8. Executable

/*
An executable is the final program that the operating system
can run.

On Windows, executables commonly use:

.exe

Example:

program.cpp
    ↓
program.o / program.obj
    ↓
Linker
    ↓
program.exe
*/

// 9. Complete C++ Build Flow

/*
C++ Source Code
      ↓
Preprocessor
      ↓
Expanded Source Code
      ↓
Compiler
      ↓
Assembly Code
      ↓
Assembler
      ↓
Object Code
      ↓
Linker
      ↓
Executable File
      ↓
Run Program
*/