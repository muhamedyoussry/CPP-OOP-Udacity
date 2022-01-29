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
- [2.10 Type `bool`](#210-type-bool)
- [2.11 The `setw` Manipulator](#211-the-setw-manipulator)
- [2.12 Variable Type Summary](#212-variable-type-summary)
- [2.13 Type Conversion](#213-type-conversion)
- [2.14 Arithmetic Operators](#214-arithmetic-operators)
- [2.15 Library Functions](#215-library-functions)


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

Floating-point variables represent numbers with a decimal place—like 3.1415927, 0.0000625, and –10.2.

Type float stores numbers in the range of about 3.4x10–38 to 3.4x1038, with a precision of seven digits. It occupies 4 bytes (32 bits) in memory.

```C++
int main()
{
    float rad;                           // variable of type float
    const float PI = 3.14159F;           // type const float
    cout << “Enter radius of circle : “; // prompt
    cin >> rad;                          // get radius
    float area = PI * rad * rad;         // find area
    cout << “Area is “ << area << endl;  // display answer
    return 0;
}
```

Type double requires 8 bytes of storage and handles numbers in the range from 1.7x10–308 to 1.7x10308 with a precision of 15 digits.

The *exponent* can be positive or negative. The exponential number 6.35239E–5 is equivalent to 0.0000635239 in decimal notation. This is the same as 6.35239 times 10–5. (*exponential notation*)

The keyword `const` (for constant) precedes the data type of a variable. It specifies that the value of a variable will not change throughout the program. Any attempt to alter the value of a variable defined with this qualifier will elicit an error message from the compiler.

## 2.10 Type `bool`

Variables of type bool can have only two possible values: true and false. In theory a bool type requires only one bit (not byte) of storage, but in practice compilers
often store them as bytes because a byte can be quickly accessed, while an individual bit must be extracted from a byte, which requires additional time.

> Type bool gets its name from *George Boole*, a 19th century English mathematician who invented the concept of using logical operators with true-or-false values. Thus such true/false values are often called Boolean values.

## 2.11 The `setw` Manipulator

We’ve mentioned that manipulators are operators used with the insertion operator (<<) to modify or manipulate the way data is displayed.

`setw` changes the field width of output.

```C++
// width2.cpp
// demonstrates setw manipulator
#include <iostream>
#include <iomanip> // for setw [Input Output Manipulator]
using namespace std;
int main()
{
    long pop1 = 2425785, pop2 = 47, pop3 = 9761;
    cout << setw(8) << "LOCATION" << setw(15)
         << "POPULATION" << endl
         << setw(8) << "Portcity" << setw(15) << pop1 << endl
         << setw(8) << "Hightown" << setw(15) << pop2 << endl
         << setw(8) << "Lowville" << setw(15) << pop3 << endl;
    return 0;
}
```
width2.cpp result
```
LOCATION     POPULATION
Portcity        2425785
Hightown             47
Lowville           9761
```

## 2.12 Variable Type Summary

<p align="center"><img src="./table1.png" width ="500"> </p>

<p align="center"><img src="./table2.png" width ="500"> </p>

<p align="center"><img src="./table3.png" width ="500"> </p>

## 2.13 Type Conversion

 ```C++
 // mixed.cpp
// shows mixed expressions
#include <iostream>
using namespace std;
int main()
{
    int count = 7;
    float avgWeight = 155.5F;
    double totalWeight = count * avgWeight;
    cout << "totalWeight =" << totalWeight << endl;
    return 0;
}
```
result
```
totalWeight =1088.5
```

<p align="center"><img src="./dataconversion.png" width ="500"> </p>

*Casting* is to change data type manually. Here’s a statement that uses a C++ cast to change a variable of type int into a variable of type char:

```c++
aCharVar = char(anIntVar);
```

## 2.14 Arithmetic Operators

As you have probably gathered by this time, C++ uses the four normal arithmetic operators +, -, *, and / for addition, subtraction, multiplication, and division.

*Remainder operator* (%) works only with integer variables (types char, short, int, and long). This operator (also called the *modulus operator*) finds the remainder when one number is divided by another. The REMAIND program demonstrates the effect.


```C++
// remaind.cpp
// demonstrates remainder operator
#include <iostream>
using namespace std;
int main()
{
    cout << 6 % 8 << endl   // 6
         << 7 % 8 << endl   // 7
         << 8 % 8 << endl   // 0
         << 9 % 8 << endl   // 1
         << 10 % 8 << endl; // 2
    return 0;
}
```
C++ offers several ways to shorten and clarify your code. One of these is the arithmetic *assignment operator*.

```C++
// assign.cpp
// demonstrates arithmetic assignment operators
#include <iostream>
using namespace std;
int main()
{
    int ans = 27;
    ans += 10; // same as: ans = ans + 10;
    cout << ans << ", ";
    ans -= 7; // same as: ans = ans - 7;
    cout << ans << ", ";
    ans *= 2; // same as: ans = ans * 2;
    cout << ans << ", ";
    ans /= 3; // same as: ans = ans / 3;
    cout << ans << ", ";
    ans %= 3; // same as: ans = ans % 3;
    cout << ans << endl;
    return 0;
}

```
Here’s the output from this program : 

```
37, 30, 60, 20, 2
```
You don’t need to use arithmetic assignment operators in your code, but they are a common feature of the language; they’ll appear in numerous examples in this book.

Here’s an even more specialized operator. You often need to add 1 to the value of an existing variable.

```C++
int count = 0 ;
count++ ; // increase the count value by 1
```
Also, it can be used as *prefix* `++count` or *postfix* `count++`. Often a variable is incremented within a statement that performs some other operation on it. For example

```C++
totalWeight = avgWeight * ++count;
```
In this case count is incremented first. How do we know that? Because *prefix* notation is used: `++count`. If we had used *postfix* notation, `count++`, the multiplication would have been performed first, then count would have been incremented.

<p align="center"><img src="./postandpre.png" width ="500"> </p>

```C++
// increm.cpp
// demonstrates the increment operator
#include <iostream>
using namespace std;
int main()
{
    int count = 10;
    cout << "count =" << count << endl;   // displays 10
    cout << "count =" << ++count << endl; // displays 11 (prefix)
    cout << "count =" << count << endl;   // displays 11
    cout << "count =" << count++ << endl; // displays 11 (postfix)
    cout << "count =" << count << endl;   // displays 12
    return 0;
}
```

The decrement operator, `--`, behaves very much like the increment operator, except that it subtracts 1 from its operand. It too can be used in both *prefix* and *postfix* forms.

## 2.15 Library Functions

