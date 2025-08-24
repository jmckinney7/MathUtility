# MathUtility DLL
A small math utility DLL (Dynamic-Link Library) that provides basic arithmetic operations.
Demonstrates both **static** and **dynamic linking** in C++.

## Features
| Function | Description |
|----------|-------------|
| `add`    | Adds two numbers |
| `sub`    | Subtracts the second number from the first |
| `mul`    | Multiplies two numbers |
| `divide`    | Divides the first number by the second number |
| `mod`    | Returns the remainder of integer division |

## Dynamic-linking example
``` cpp
#include <iostream>
#include <Windows.h>

typedef double(*mUtil_d)(double, double);
typedef int(*mUtil_i)(int, int);

int main() {
    HMODULE hmod = LoadLibrary(L"MathUtility.dll");
    if (!hmod) {
        std::cout << "Failed to load DLL" << std::endl;
        return 1;
    }

    mUtil_d add = (mUtil_d)GetProcAddress(hmod, "add");
    mUtil_d sub = (mUtil_d)GetProcAddress(hmod, "sub");
    mUtil_d mul = (mUtil_d)GetProcAddress(hmod, "mul");
    mUtil_d div = (mUtil_d)GetProcAddress(hmod, "divide");
    mUtil_i mod = (mUtil_i)GetProcAddress(hmod, "mod");

    std::cout << "2 + 5 = " << add(2, 5) << std::endl; // 7
    std::cout << "3 - 5 = " << sub(3, 5) << std::endl; // -2
    std::cout << "10 * 10 = " << mul(10, 10) << std::endl; // 100
    std::cout << "100 / 4 = " << div(100, 4) << std::endl; // 25
    std::cout << "10 mod 5 = " << mod(10, 5) << std::endl; // 0
    std::cout << "15 / 0 = " << div(15, 0) << std::endl; // nan

    FreeLibrary(hmod);
    return 0;
}
```

## Static-linking example
``` cpp
#include <iostream>
#include "MathUtility.h"

#pragma comment(lib, "MathUtility.lib")

int main() {
    std::cout << "4 + 5 = " << add(4, 5) << std::endl; // 9
    std::cout << "5 - 5 = " << sub(5, 5) << std::endl; // 0
    std::cout << "2 * 2 = " << mul(2, 2) << std::endl; // 4
    std::cout << "10 / 2 = " << divide(10, 2) << std::endl; // 5
    std::cout << "10 mod 5 = " << mod(10, 5) << std::endl; // 0
    return 0;
}
```

## Installation
Clone the repository:
```bash
git clone https://github.com/jmckinney7/MathUtility.git
```

## License

This project is licensed under the MIT License.  
See the [LICENSE](./LICENSE.md) file for details.
