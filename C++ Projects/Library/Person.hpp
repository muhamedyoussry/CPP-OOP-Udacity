#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <iomanip>

using namespace std;

class Person
{
protected:
    string first_name;
    string last_name;
    int age;

public:
    Person();
    Person(string first_name, string last_name, int age);
    virtual void print_info();
};

Person::Person()
{
    this->first_name = "Unknown";
    this->last_name = "Unknown";
    this->age = 0;
}
Person::Person(string first_name, string last_name, int age)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = age;
}

void Person::print_info()
{
    cout << "______ Person Information ______" << endl;
    cout << left << setw(15) << "First Name: " << setw(15) << right << first_name << endl;
    cout << left << setw(15) << "Last Name: " << setw(15) << right << last_name << endl;
    cout << left << setw(15) << "Age: " << setw(15) << right << age << endl;
}
#endif