<h1 align="center"> Chapter 2: C++ Programming Basics </h1>

#### In This Chapter

1. Getting Started
2. Basic Program Construction
3. Output using `cout`
4. Directives
5. Comments
6. Integer Variables
7. Character Variables
8. Input with `cin`
9. Floating Point Types
10. Type `bool`
11. The `setw` Manipulator
12. Variable Type Summary
13. Type Conversion
14. Arithmetic Operators
15. Library Functions


## 2.1 Getting Started

Compilers take source code and transform it into executable file.

## 2.2 Basic Program Construction

This a a very simple program in C++.

```C++
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl ;
    return 0 ;
}
```

In this simple program there a single function called `main()`, When you run a C++ program the first statement executed will be at the beginning of a function called `main()`.

if there is no function called `main()` in your program, an error will be reported when you run the program.

## 2.3 Output using `cout`

