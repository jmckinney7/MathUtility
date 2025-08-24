# MathUtility DLL
A small math utility DLL (Dynamic-Link Library) that provides basic arithmetic operations.
Demonstrates both **static** and **dynamic linking** in C++.

## Features
| Function | Description |
|----------|-------------|
| `add`    | Adds two numbers |
| `sub`    | Subtracts the second number from the first |
| `mul`    | Multiplies two numbers |
| `div`    | Divides the first number by the second number |
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
    mUtil_d div = (mUtil_d)GetProcAddress(hmod, "div");
    mUtil_i mod = (mUtil_i)GetProcAddress(hmod, "mod");

    std::cout << "2 + 5 = " << add(2, 5) << std::endl;
    std::cout << "3 - 5 = " << sub(3, 5) << std::endl;
    std::cout << "10 * 10 = " << mul(10, 10) << std::endl;
    std::cout << "100 / 250 = " << div(100, 250) << std::endl;
    std::cout << "10 mod 5 = " << mod(10, 5) << std::endl;

    FreeLibrary(hmod);
}
```

## Static-linking example
``` cpp
#include <iostream>
#include "MathUtility.h"

#pragma comment(lib, "MathUtility.lib")

int main() {
    std::cout << "4 + 5 = " << MathUtility::add(4, 5) << std::endl;
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
