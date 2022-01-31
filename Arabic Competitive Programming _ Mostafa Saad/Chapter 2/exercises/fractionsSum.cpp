#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d = 0;
    char dummyChar;

    cout << "Enter the first fraction: ";
    cin >> a >> dummyChar >> b;

    cout << "Enter the second fraction: ";
    cin >> c >> dummyChar >> d;

    int upperFractionSum = ((a * d) + (b * c));
    int lowerFractionSum = (b * d);

    cout << "Sum = " << upperFractionSum << "/" << lowerFractionSum << endl;
    return 0;
}