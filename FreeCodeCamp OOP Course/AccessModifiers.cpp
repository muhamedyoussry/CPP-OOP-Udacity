#include <iostream>
#include <string>

using namespace std;

// create an employee class
class Employee
{                               // create class attributes
public:                         // create public access specifier
    string name = "Mr.X";       // string variable
    string company = "Y Group"; // string variable
    int age = 30;               // int variable
    
private:
    string password;
    float salary;
}; // end the class definition with a semicolon ;

int main()
{
    Employee emp1;
    cout << "Employee 1 name is " << emp1.name << endl;       // can access name
    cout << "Employee 1 company is " << emp1.company << endl; // can access company
    cout << "Employee 1 age is " << emp1.age << endl;         // can access age
    // cout << "Employee 1 password is " << emp1.password << endl; // cannot access password
    // cout << "Employee 1 salary is " << emp1.salary << endl;   // cannot access salary
}