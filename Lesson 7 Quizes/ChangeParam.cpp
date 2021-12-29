#include <iostream>

using namespace std;

// passing by reference function with overloading
void changeParamFunc(int *x) // the argument is a pointer and should contain an address
{
    *x = *x + 3; // changing the value by reference will change the original variable
    cout << "The variable value of the function is : " << *x << endl;
}

// passing by value function with overloading
void changeParamFunc(int x) // the argument is not a pointer and will contain a variable value
{
    x = x + 3;                                                       // will create a copy of the variable and change it
    cout << "The variable value of the function is : " << x << endl; // print the copied variable
}

// passing by reference withoout overloading
void changeParamFuncRef(int &x) // the argument is a pointer and should contain an address
{
    x = x + 3; // changing the value by reference will change the original variable
    cout << "The variable value of the function is : " << x << endl;
}

int main()
{

    int Mynumber1 = 0;
    cout << endl
         << "Functino that pass variable by reference with overloading" << endl
         << endl;
    changeParamFunc(&Mynumber1); // send the variable address to the function
    cout << "my number address is : " << &Mynumber1 << endl;
    cout << "my number is : " << Mynumber1 << endl;

    cout << endl
         << "Functino that pass variable by copy with overloading" << endl
         << endl;
    int Mynumber2 = 0;
    changeParamFunc(Mynumber2); // send the variable address to the function
    cout << "my number address is : " << &Mynumber2 << endl;
    cout << "my number is : " << Mynumber2 << endl;

    int Mynumber3 = 0;
    cout << endl
         << "Functino that pass variable by reference without overloading" << endl
         << endl;
    changeParamFuncRef(Mynumber3); // send the variable address to the function
    cout << "my number address is : " << &Mynumber3 << endl;
    cout << "my number is : " << Mynumber3 << endl;

    return 0;
}