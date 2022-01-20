#include <bits/stdc++.h>

using namespace std;
class Employee
{
private:
    string name;

public:
    Employee();
    Employee(string name);
    string getName();
    void setName(string &name);
};

Employee::Employee(string name)
{
    this->name = name;
}

string Employee::getName()
{
    return name;
}

void Employee::setName(string &name)
{
    this->name = name;
}

int main()
{
    Employee em("Mohamed");
    Employee em2("");
    cout << em.getName() << endl;
    string name_ = "Mazen";
    em2.setName(name_);
    cout << em2.getName() << endl;
    cout << em.getName() << endl;
    Employee em3;
    cout << em3.getName() << endl;
    return 0;
}