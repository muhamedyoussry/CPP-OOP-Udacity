/*Fix the errors and get an error free compilation and execution.*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int coeff1, coeff2, constant;
    int exp1, exp2;
    int y;
    int x;
    // Calculate the value of y for a user defined three term polynomial
    // Get the coefficients, exponents, and the constants
    cout << "What is the first coefficient?";
    cin >> coeff1;
    cout << coeff1 << endl;
    cout
        << "What is the exponent of the first term?";
    cin >> exp1;
    cout << exp1 << endl;
    cout << "What is the second coefficient?";
    cin >> coeff2;
    cout << coeff2 << endl;
    cout << "What is the exponent of the second term?";
    cin >> exp2;
    cout << exp2 << endl;
    cout << "What is the constant?";
    cin >> constant;
    cout << constant << endl;
    // Print the complete equation
    cout << "The polynomial we are solving is: " << endl;
    cout << coeff1 << "*x^" << exp1 << " + " << coeff2 << " * x ^ " << exp2 << " + " << constant << endl;
    cout << "What is the value of x?";
    cin >> x;
    cout << x << endl;
    // Solve the equation with the given x
    y = coeff1 * pow(x, exp1) + coeff2 * pow(x, exp2) + constant;
    cout << "y = " << coeff1 << "*" << x << "^" << exp1 << " + " << coeff2 << "*" << x << "^" << exp2 << "+ " << constant << " = " << y;
    return 0;
}