#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

class Person
{
public:
    string name;
    int age;

public:
    Person()
    {
        this->name = "Mohamed";
        this->age = 25;
    }
    virtual void getInfo()
    {
        cout << "Name is " << name << ", and age is " << age << endl;
    }
};

class Employee : public Person
{
public:
    int salary;

public:
    Employee() : Person()
    {
        this->salary = 7000;
    }
    void getInfo()
    {
        cout << "Name is " << name << ", and age is " << age << ", salary is " << salary << endl;
    }
};

int main()
{
}