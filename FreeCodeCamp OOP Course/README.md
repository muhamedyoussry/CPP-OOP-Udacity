# FreeCodeCamp Course
*this an online free simple [course](https://www.youtube.com/watch?v=wN0x9eZLix4) on YouTube to apply on the fundementals of the OOP and document my learning journey to get back to it at anytime.*

---
## What is OOP?

OOP stands for Object-Oriented Programming. [^1]
  
Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

- OOP is faster and easier to execute
- OOP provides a clear structure for the programs
- OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
- OOP makes it possible to create full reusable applications with less code and shorter development time

[^1]: Classes and Objects Introduction copied from [W3Schools](https://www.w3schools.com/cpp/cpp_oop.asp)

---
## What are Classes and Objects?

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

---
## Access modifiers
- The `public` keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed.

In C++, there are three access specifiers:

- `public` - members are accessible from outside the class
- `private` - members cannot be accessed (or viewed) from outside the class
- `protected` - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. [^2]

[^2]: Access modifiers Introduction copied from [W3Schools](https://www.w3schools.com/cpp/cpp_access_specifiers.asp)

- The Class members are `private` access modifiers in defalut.


---
## Class Methods

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
---
## Constructors

- constructors is a special method that called automatically when an object of a class is created.
- Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
```c++
class Car {        
  public:          
    string brand;  
    string model;  
    int year;      
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};
```
- a constructor does not have a return type.
- a constructor should be public.


---
## Encabsulation
- it involves the bundling of data members and functions inside a single class.

<img src="https://cdn.programiz.com/sites/tutorial2program/files/cpp-encapsulation-implementation.png" style="height:200px">

- Encabsulation use setters and getters to deal with private class memebrs.
- we can add valdiation checks when set values to class members.


---
## Abstraction
- hiding implementation from user.
- shows only essential attributes and hides unnecessary information.
- composed of interface and implementation. we can deal with class using the interface but the complex implementation is hidden from the user.
- an abstract class is 
- pure virtual function or abstract function is to make the function mandatory to be overriden; any class that will use the abstract class should provide and override implementation for the pure virtual method.

```c++
// an abstract class that have one rule
class A  
{ 
  virtual void method() = 0; // this a pure virtual function 
};
```
---
## Inheritance
- The capability of a class to derive properties and characteristics from another class.
  - Sub Class: The class that inherits properties from another class is called Sub class or Derived Class.
  - Super Class:The class whose properties are inherited by sub class is called Base Class or Super class. 

```c++
class A
{ // base, parent, super class
  // all class member are here
};
class B : public A
{
  // derived, child, sub class
  // all class of derived class are here
};
```
- Modes of Inheritance
  - `Public mode`: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class
  - `Protected mode`: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will become protected in derived class.
  - `Private mode`: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will become Private in derived class. 
- If we want to add a constructor to our derived class we can use the base class constructor implmenetation to avoid redundency.

```c++
class A
{
  A (int a, int b);
}; 
class B : public A
{
  B(int a, int b, string x) : A(a, b);
};

```