#include <iostream>

using namespace std;

int *ReturnArray()
{
    static int ar[3] = {1, 2, 3};
    // remember is that C++ does not advocate to return the address of a local variable
    // to outside of the function so you would have to define the local variable as static variable.

    // A static variable remains in memory while the program is running
    return ar;
}

void PrintArray(int *ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << endl;
    }
}

int main()
{
    int *p;
    p = ReturnArray();
    PrintArray(p, 3);
    cout << p[1];
    return 0;
}