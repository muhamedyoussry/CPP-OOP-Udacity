#include <iostream>

using namespace std;

int main()
{
    int pounds, shillings, pence;

    cout << "Enter pounds: ";
    cin >> pounds;

    cout << "Enter shillings: ";
    cin >> shillings;

    cout << "Enter pence: ";
    cin >> pence;

    cout << "Decimal pounds " << pounds << "." << ((shillings * 12) + pence) * 100 / 240;
}
