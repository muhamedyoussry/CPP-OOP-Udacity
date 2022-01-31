#include <iostream>

using namespace std;

int main()
{
    double degree = 0;

    cout << "Enter your degrees in Celsius: ";
    cin >> degree;

    cout << "degrees in Fahrenheit = " << degree * 9 / 5 + 32 << " Fahrenheit" << endl;
    return 0;
}