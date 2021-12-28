#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string Name = "Mr.X";
    string Company = "Y Group";
    int Age = 25;

public:
    void IntroduceYourself(string funcParam)
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
        cout << "functino parameter - " << funcParam << endl;
    }
};

int main()
{
    Employee emp1;
    emp1.IntroduceYourself("This is the function parameter");
}