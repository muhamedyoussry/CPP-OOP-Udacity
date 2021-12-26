#include <iostream>
#include <string>

using namespace std;

// create an employee class
class Employee
{                   // create class attributes
public:             // create public access specifier
    string name;    // string variable
    string company; // string variable
    int age = 10;   // int variable
};                  // end the class definition with a semicolon ;

int main()
{
    Employee emp1;
    cout << "Employee 1 age is " << emp1.age << endl;

    emp1.age++;
    cout << "Employee 1 age is " << emp1.age << endl;

    Employee emp2;
    cout << "Employee 2 age is " << emp2.age << endl;
}