# FreeCodeCamp Course
*this an online free simple [course](https://www.youtube.com/watch?v=wN0x9eZLix4) on YouTube to apply on the fundementals of the OOP and document my learning journey to get back to it at anytime.*

### What is OOP?

OOP stands for Object-Oriented Programming. [^1]
  
Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

- OOP is faster and easier to execute
- OOP provides a clear structure for the programs
- OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
- OOP makes it possible to create full reusable applications with less code and shorter development time

[^1]: Classes and Objects Introduction copied from [W3Schools](https://www.w3schools.com/cpp/cpp_oop.asp)


### What are Classes and Objects?

- Class is the building block of OOP.
- Class can be considered a complicated data type. For example, a user can be a class that have some attributes (data) and contain some methods (actions).
- Class attributes are considered *variables*, and methods are considered *functions*.
- Class is a blueprint for creating objects.
- Class is a template for objects, and an object is an instance of a class.
- To create a class in C++
``` C++ 
class MyClass{ // define the class name
public: // Access specifier means that these attributes are accessible from outside the class
     int number; // integer variable
     string name; // string variable
};
```


### Access modifiers
- The `public` keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed.

In C++, there are three access specifiers:

- `public` - members are accessible from outside the class
- `private` - members cannot be accessed (or viewed) from outside the class
- `protected` - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. [^2]

[^2]: Access modifiers Introduction copied from [W3Schools](https://www.w3schools.com/cpp/cpp_access_specifiers.asp)

- The Class members are `private` access modifiers in defalut.

### Class Methods

- Methods are the *functions* of the class. You can define it in two ways
  1. Inside the class
```C++
class MyClass {        
  public:              
    void myMethod() {  
      cout << "Hello World!";
    }
};
```
  2. Outside the class *using the scope operator `::`*
``` C++
class MyClass {       
  public:             
    void myMethod();  
};

void MyClass::myMethod() {
  cout << "Hello World!";
}
```
- Methods like functions can have parameters.