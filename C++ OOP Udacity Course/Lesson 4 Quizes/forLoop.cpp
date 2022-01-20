#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    float average = 0;
    for (int i = 0; i < 5; i++)
    {
        int x = 0;
        cin >> x;
        sum += x;
    }
    average = sum / 5.0;

    cout << sum << endl
         << average << endl;
    return 0;
}