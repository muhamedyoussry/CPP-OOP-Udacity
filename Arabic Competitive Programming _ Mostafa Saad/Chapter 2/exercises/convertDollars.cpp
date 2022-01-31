#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double amount = 0;

    cout << "Enter the amount in dollars: ";
    cin >> amount;

    cout << "USD" << setw(12) << amount << " $" << endl
         << "GBP" << setw(12) << amount / 1.487 << " £" << endl
         << "FRF" << setw(12) << amount / 0.172 << " ₣" << endl
         << "DEM" << setw(12) << amount / 0.584 << " DM" << endl
         << "JPY" << setw(12) << amount / 0.009955 << " ¥" << endl;

    return 0;
}