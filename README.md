# C++ OOP Udacity

> *You can see the course on Udacity and what we will learn from [here](https://www.udacity.com/course/c-for-programmers--ud210)*

---
## Lesson 1: Basics

*This lesson will cover C++ basics: Program structure, namespaces, user I/O, file I/O, and header files.*


### why learn C++ ?

- it is used in a wide variety of fields.
- it has a lot of features.

### what makes C++ differenet from other languages

- it works directly and efficiently with the hardware.


### C++ Program Structure

- two main sections for C++ program:
  - Preprocessor directive ( `#inclued <iostream>` )
  - Main body ( `int main()` )


### Escape sequences
- We can format the output by using the iomanip library. ( `#include <iomanip> `)
  - we can use the ` setw() ` function to set width of a string.

### File IO
- we can read and write files, File IO steps:
  - `#Include <fstream> `library 
  - Create a stream, we have three options (input, output, both)
      - `ofstream myfile` (for writing to a file)
      - `ifstream myfile` (for reading a file)
      - `fstream myfile`  (for reading and writing a file)
  - Open the file  `myfile.open(“filename”) `
  - Write or read the file
  - Close the file `myfile.close()`


###  Header files
- have a an extension of `.hpp`
- to include a header file you use `#include 'filename.hpp'`


### Strings User Input
- When we want to enter strings with spaces we should use the function of `getline(cin, VariableName) ;`

---
## Lesson 2: Compilation and Execution

*This lesson will cover compilation and execution in a Linux/Unix environment.*

### What is compilation?
- Compiling is the process of translating the code that you've written into machine code that processors understand.
- An object file contains machine code but may not be executable in and of itself.
- Linking is the process of creating an executable by effectively combining object files

---
## Lesson 3: Arithmetic Operations

*Arithmetic operations including prefix and postfix.*

### Arithmetic Operations 
- You can find all operators from this [document](http://www.cplusplus.com/doc/tutorial/operators/)
- When doing math operations you may need to include the cmath library, it contains a number of useful functions like `pow(base,exponent) `

### prefix and postfix
- Incrementing
  - prefix: `++a` increment the value then return a reference 
  - postfix: `a++` create a copy of the variable, increment its value, then return the copied value before the incremenet.
- Decrementing
  - prefix: `--a` decrement the value then return a reference 
  - postfix: `a--` create a copy of the variable, decrement its value, then return the copied value before the decrement.

---
## Lesson 4: Control Flow
*This lesson covers: relational operators, logic operatoes, conditional statements and loops*

### Operators
- Relational operators [W3Schools Guide](https://www.w3schools.com/cpp/cpp_operators_comparison.asp)
- Logical operators [W3Schools Guide](https://www.w3schools.com/cpp/cpp_operators_logical.asp)
- Bitwise operators [GeeksForGeeks Guide](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/)

### Conditional Statements
- if statement
- if-else statement
- if else-if statements
- switch statement


### Loops
- for loop
- while loop
- do-while loop

---
## Pointers
*this lesson specifies what is pointers, why we need it and how we use it*

- pointers are fundemntal to dealing with hardware.
- we can get the memory address of a variable by using the `&` operator
- pointer stores the memory address as a value.
- pointer data type should be the same as the data type it points to or it reference to.
- to get the value from a pointer use the dereference operator `*`
- the `*` sign has two differenet uses 
  - When used in declaration `string* ptr`, it *creates a pointer variable*
  - When not used in declaration, it act as a *dereference operator*.

---
## Arrays
*this lesson we will learn about hte most famous data structure which are single and multi-dimensional arrrays*

- Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
- *In C++ you don't need to learn arrays.* Because there is a good case that instead of using arrays, you can use vectors. Vectors are more powerful /versatile than arrays.
- Multidimensional arrays.

---
## Funcions
*declaring and defining functions, passing by reference, include passing arrays to functions.*

- All C++ functions must have:
  - A declaration: this is a statement of how the function is to be called
  - A definition: this is the statement(s) of the task the function performs when called


- C++ functions can:
  - Accept parameters, but they are not required
  - Return values, but a return value is not required
  - Can modify parameters, if given explicit direction to do so
- Passing parameters by value and by reference
- We can pass parameters by reference in two ways:
  - with pinters `int *pr = b`
  - with passing by reference through declaration `int &a = b`
  - you can see the difference in the [ChangeParam.cpp](https://github.com/muhamedyoussry/CPP-OOP-Udacity/blob/main/Lesson%207%20Quizes/ChangeParam.cpp) file

- C++ does not allow arrays to be passed to functions, but, as we have seen, it does allow pointers to be passed. So, **there are three methods for passing an array by reference to a function:**
  - void functionName(variableType *arrayName)
  - void functionName(variableType arrayName[length of array])
  - void functionName(variableType arrayName[])

- A *static* variable remains in memory while the program is running and it is important for return an array from a function
  - C++ does not advocate to return the address of a local variable to outside of the function so you would have to define the local variable as *static* variable.
- When creating functions there is a precaution that is often considered a 'best practice'.
  - When passing variables that are not going to be modified in the function, define the variable as a 'const' so that it cannot be changed by the function.

--- 
## Classes
*The basics of classes, how to define and use them. overview of the OOP*

- Classes allow the user to build their own data types according to their application. (user-defined type = Class)
- 