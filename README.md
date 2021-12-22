# CPP OOP Udacity

> *You can see the course on Udacity and what we will learn from [here](https://www.udacity.com/course/c-for-programmers--ud210)*

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