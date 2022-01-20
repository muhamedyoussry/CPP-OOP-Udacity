#include <iostream>

using namespace std;

void calculate(float x, float y, char op, float &r);
void printEquation(float x, float y, char op, float r);

void calculate(float x, float y, char op, float &r)
{
    if (op == '*')
    {
        r = x * y;
    }
    else if (op == '+')
    {
        r = x + y;
    }
    else if (op == '-')
    {
        r = x - y;
    }
    else if (op == '/')
    {
        r = x / y;
    }
    else
    {
        cout << "please enter a correct and premetive operation " << endl;
    }
}

void printEquation(float x, float y, char op, float r)
{
    cout << x << " " << op << " " << y << " = " << r << endl;
}