<h1 align="center"> Chapter 2: C++ Programming Basics </h1>

#### In This Chapter

- [2.1 Getting Started](#21-getting-started)
- [2.2 Basic Program Construction](#22-basic-program-construction)
- [2.3 Output using `cout`](#23-output-using-cout)
- [2.4 Directives](#24-directives)
- [2.5 Comments](#25-comments)
- [2.6 Integer Variables](#26-integer-variables)
- [2.7 Character Variables](#27-character-variables)
- [2.8 Input with `cin`](#28-input-with-cin)
- [2.9 Floating Point Types](#29-floating-point-types)


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

When a variable is given a value, that value is actually placed in the memory space assigned to the variable.

Integer variables represent integer numbers like 1, 30,000, and –27. Such numbers are used for counting discrete numbers of objects, like 11 pencils or 99 bottles of beer.

an `int` occupies 4 bytes (which is 32 bits) of memory. This allows an int to hold numbers in the range from –2,147,483,648 to 2,147,483,647.

you must declare a variable before using it; this means to give the variable a data type.

```C++
int total ; // variable declaration
```

The names given to variables are called identifiers such as `total`.
What are the rules for writing identifiers? You can use upper- and lowercase letters, and the digits from 1 to 9. You can also use the underscore (_). The first character must be a letter or underscore. Identifiers can be as long as you like, but most compilers will only recognize the first few hundred characters. The compiler distinguishes between upper- and lowercase letters, so Var is not the same as var or VAR.

you can assign value to variables.

```C++
int total = 10 ; // variable assignment (variable initialization in some cases)
```
`cout` and the `<<` operator know how to treat an integer and a string differently. If we send them a *string*, they print it as text. If we send them an *integer*, they print it as a number.

```C++
#include <iostream>
using namespace std;

int main()
{   
    int var = 10 ; 
    cout << "var is " << var << endl ;
    return 0 ;
}
```

## 2.7 Character Variables

Type char stores integers that range in value from –128 to 127. Variables of this type occupy only 1 byte (eight bits) of memory. They are commonly used to store ASCII characters.

Character constants use single quotation marks around a character, like ‘a’ and ‘b’. (Note that this differs from string constants, which use double quotation marks.)


```C++
#include <iostream>
#include <string>
using namespace std;

int main()
{   
    char var1 = '-' ; // character variable with single quotation
    string var2 = "This is a string" ; // string variable with double quotation
    return 0 ;
}
```
escape sequence is a character that come after backslash `/` to interpret that character differently such as `/n`, `/t`, and `/a`.


## 2.8 Input with `cin`

```C++
#include <iostream>
using namespace std;
int main()
{
    int ftemp; // for temperature in fahrenheit
    cout << “Enter temperature in fahrenheit : “;
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    cout << “Equivalent in Celsius is : “ << ctemp << ‘\n’;
    return 0;
}
```

the statement `cin` causes the program to wait for the user to enter a number (based on the variable type). the inserted number will be placed in the variabel `ftemp`.

<p align="center"><img src="./cin.png" width ="500"> </p>

## 2.9 Floating Point Types