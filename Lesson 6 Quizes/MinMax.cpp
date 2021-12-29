/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int sum = 0;
    int min = 101;
    int max = -1;
    for (int i = 0; i < 15; i++)
    {
        cin >> x;
        sum += x;
        if (x > max)
        {
            max = x;
        }
        else if (x < min)
        {
            min = x;
        }
    }

    cout << sum / 15.0 << endl;
    cout << max << endl;
    cout << min << endl;
    return 0;
}