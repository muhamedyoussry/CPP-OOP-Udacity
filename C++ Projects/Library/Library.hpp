#ifndef LIBRARY_H
#define LIBRARY_H

#endif

#include <iostream>
#include "ClassBook.hpp"

using namespace std;

class Library
{
private:
    int maxSize;
    int current;
    Book *booklist;

    void resizeLibrary(int n);
    
public:
    Library(/* args */);
    ~Library();
};

Library::Library(/* args */)
{
}

Library::~Library()
{
}
