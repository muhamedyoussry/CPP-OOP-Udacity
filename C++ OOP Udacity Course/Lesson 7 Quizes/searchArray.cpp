/*Goal: create a function that searches an array for
**a given value.
*/

#include <iostream>
using namespace std;

int search(int *ar, int size, int key);

int main()
{
    const int size = 4;
    int array[] = {345, 75896, 2, 543};
    int searchKey = 543;
    cout << "Found at: " << search(array, size, searchKey);
    return 0;
}

int search(int *ar, int size, int key)
{
    int location = 0;
    for (int i = 0; i < size; i++)
    {
        if (key == ar[i])
        {
            location = i;
            break;
        }
    }

    return location;
}