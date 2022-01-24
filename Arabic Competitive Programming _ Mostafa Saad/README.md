# Object-Oriented Programming in C++, *Fourth Edition , Robert Lafore*

<p align="center"><img src="https://www.informit.com/ShowCover.aspx?isbn=0672323087" width ="300"> </p>

*This will be my first repo of this type, which is a book summary with the questions and exercise solutions. And I will support my reading with some mentor guidance using MOSTAFA SAAD [YouTube Channel](https://www.informit.com/ShowCover.aspx?isbn=0672323087)*

### Objectives From this Repo
- Master C++ Concepts by practice
- Master OOP Concepts by practice
- Design a C++ and OOP reference for me.
- Give me new ideas for C++, OOP projects.
- Implement many C++ and OOP projects.
- Increase my technical writing skills in English.

<hr>

## Introduction

As programming projects became large and more complicated, it was found that this approach did not work very well. The problem was complexity.

Three major innovations in programming have been devised to cope with the problem of complexity. They are
  - ***Object Oriented Programming (OOP)*** it is a programming style that views the program as a group of objects that have certain properties.
  - ***Unified Modeling Language (UML)*** it is a graphical language used to help clarify OOP concepts.
  - ***Software Development Process***

This book teaches object-oriented programming with the C++ programming language. It also introduces the UML and software development processes.

<h1 align="center"> Chapter 1: The Big Picture </h1>

#### In This Chapter

1. Why Do We Need Object-Oriented Programming?
2. Characteristics of Object-Oriented Languages
3. C++ and C
4. Laying the Groundwork
5. The Unified Modeling Language (UML)


## 1.1 Why Do We Need OOP?

For very small programs, the programmer creates the list of instructions, and the computer carries them out. (*Procedural Programming*)

*Functions* were adopted as a way to make programs more comprehensible to their human creators. *Functions* are list of instructions and we group many functions to build a program. group of functions called *module*.

Dividing a program into functions and modules is one of the cornerstones of *structured programming*

Analyzing the reasons for these failures reveals that there are weaknesses in the procedural paradigm itself. No matter how well the structured programming approach is implemented, large programs become excessively complex.

Procedural programming have two main problems:
- ***unrestricted Acess*** in procedural programming, data have two access types; global and local. In large programs we will need many connections between functions and data, this will cause some problems; first, the program structure will be diffuclt, second, the programg will be difficutl to modify; some change in global data can cause unwanted change in other functions. (Everything will be related to Everything)
- ***unrelated functions and data*** In the real world we deal with objects. objects aren’t data only or functions only. Complex real-world objects have both *attributes* and *behavior*. 
  - *attributes* object characteristics (equivalent to data).
  - *behaviour* object response and actions (equivalent to functions).

The Object-Oriented approach is to combine data and functions that operatoe on that data into a single unit called object.

## 1.2 Characteristics of Object-Oriented Languages

In object oriented programming you see the world as objects; you think of your program in terms of objects rather than functions such as; human entities, collections of data, componenents in a computer games, or physical objects.

> Object-Oriented Approch offer a revolution in program design.

 