<h1 align="center"> Chapter 2: C++ Programming Basics </h1>

#### In This Chapter

- [2.1 Getting Started](#21-getting-started)
- [2.2 Basic Program Construction](#22-basic-program-construction)
- [2.3 Output using `cout`](#23-output-using-cout)
- [2.4 Directives](#24-directives)
- [2.5 Comments](#25-comments)
- [2.6 Integer Variables](#26-integer-variables)


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

We use the semicolon `;` after each line to tell the compiler to execute this instruction and without it C++ won't know when to execute this instruction.

## 2.3 Output using `cout`

`cout` is an object, it is predefined in C++ correspond to standart output stream to print something on the screen.

This operator `<<` is called *insertion* operator used to direct the contents of its right to the object on its left. shortly, it is used to display the information after it on the screen.

<p align="center"><img src="./cout.png" width ="500"> </p>

The phrase in quotation marks, “Hello World”, is an example of a *string*. and it muyst exist between double quotation marks. you will use the *string* to print characters on the screen.

`endl` meaning *end line* in C++, and it is used to go to the next line or *escape sequence* in our programs.


## 2.4 Directives

the **first** line `#include<iostream>` is called a *preprocessor directive*, it is used to instruct the compiler, the compiler call this *preprocessor directives* in the beginening of the copmilation process. this type of directives must start with `#` sign.

`iostream` is an example of a header file. It’s concerned with basic input/output operations, and contains declarations that are needed by the `cout` identifier and the `<<` operator. Without these declarations, the compiler won't recognize `cout` and will think `<<` is being used incorrectly.

the **second** directive we used in this program is `using namespace std;`, we use the word namespace to recognize certain names nad if we didn't use the `using namespace std` for example, some statemnets like cout won't be recogonized untill you put `std::` before it such as

```C++
std::cout << "Hello World" << std::endl;
```

## 2.5 Comments

Comments are an important part of any program. They help the person writing a program, and anyone else who must read the source file, understand what’s going on. The compiler ignores comments, so they do not add to the file size or execution time of the executable program.

Comments start with a double slash symbol (//) and terminate at the end of the line.

```C++
#include <iostream>
using namespace std;
// This is a comment and the compiler will ignore the entire line completly

int main()
{
    cout << "Hello World" << endl ;
    return 0 ;
}
```

we use comments to clarify the big picture and reasone behind your code. So, we use it to:
1. explain the code to our team mates and what you are trying to do.
2. explain the code to ourselves in future when we forget about the logic behind this.

## 2.6 Integer Variables

