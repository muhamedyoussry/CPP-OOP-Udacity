#include <iostream>
#include <string>

using namespace std;

// create an employee class
class Employee
{                   // create class attributes
public:             // create public access specifier
    string name;    // string variable
    string company; // string variable
    int age;        // int variable
};                  // end the class definition with a semicolon ;

int main()
{
    int number = 100;
    Employee emp1;
    emp1.age = number;
    cout << "Employee age is " << emp1.age << endl;
}