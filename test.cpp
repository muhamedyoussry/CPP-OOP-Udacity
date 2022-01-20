#include <bits/stdc++.h>

using namespace std;
class Employee
{
private:
    string name;
    static int emp_count;

public:
    Employee(string name);
    string getName();
    static int getEmpCount();
    void printStatic();
    static void help();
};

int Employee::emp_count = 0;
Employee::Employee(string name)
{
    this->name = name;
    emp_count++;
}

string Employee::getName()
{
    return name;
}
int Employee::getEmpCount()
{
    return emp_count;
}
void Employee::printStatic()
{
    cout << "The employee counnt from the static function is : " << Employee::getEmpCount() << endl;
}

void Employee::help()
{
    cout << "Helper Manual for the user " << endl;
}

int main()
{
    Employee em("Mohamed");
    Employee em2("Mazen");
    Employee em3("khaled");

    cout << em.getName() << endl;
    cout << Employee::getEmpCount() << endl;
    Employee::help();
    em.printStatic();
    return 0;
}