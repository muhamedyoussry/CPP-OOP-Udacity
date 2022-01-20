/*GOAL: Practice writing to the console and learn
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "int size = " << sizeof(int) << endl;
    cout << "short size = " << sizeof(short) << endl;
    cout << "long size = " << sizeof(long) << endl;
    cout << "char size = " << sizeof(char) << endl;
    cout << "float size = " << sizeof(float) << endl;
    cout << "double size = " << sizeof(double) << endl;
    cout << "bool size = " << sizeof(bool) << endl;
    return 0;
}