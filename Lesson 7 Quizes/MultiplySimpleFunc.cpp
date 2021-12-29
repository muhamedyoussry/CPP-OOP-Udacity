/*GOAL: Practice writing functions

/*Write a function called printProduct that prints the results of the multiplication
**of two integers.
*/
#include <iostream>

using namespace std;
void printProduct(int x, int y, int result)
{
    cout << x << " * " << y << " = " << result << endl;
}

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);
    return 0;
}
