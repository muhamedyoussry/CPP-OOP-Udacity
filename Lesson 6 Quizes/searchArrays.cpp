/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of
**the element. If the value is not in the array, the user will be notified
**that the value is not in the array. To exit the program the user will enter -1.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int searchArray[10] = {324, 4567, 6789, 5421345, 7, 65, 8965, 12, 342, 485};
    // use searchKey for the number to be found
    // use location for the array index of the found value
    int searchKey;

    while (true)
    {
        int location = -1;
        cout << "Enter an integer ('-1' to quit): " << endl;
        cin >> searchKey;

        if (searchKey == -1)
        {
            break;
        }
        else
        {
            for (int i = 0; i < sizeof(searchArray) / sizeof(searchArray[0]); i++)

            {
                if (searchKey == searchArray[i])
                {
                    if (location == -1)
                    {
                        location = i;
                        cout << searchKey << " is at location " << location << " in the array.\n";
                        break;
                    }
                }
            }
            if (location == -1)
            {
                cout << searchKey << " is not in the array." << endl;
            }
        }
    }
}
