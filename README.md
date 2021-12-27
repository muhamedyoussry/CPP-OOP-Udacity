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