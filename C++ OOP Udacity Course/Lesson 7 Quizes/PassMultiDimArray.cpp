/*Goal: Learn to pass arrays to functions*/

#include <iostream>
#include <iomanip> // to allow the set width function [ setw(15)]

using namespace std;

void arrayUnSized(int array[][3], int size)
{

    for (int i = 0; i < 2; i++)
    {
        cout << setw(5);
        cout << endl;
        for (int j = 0; j < size; j++)
        {
            array[i][j] = 1;
            cout << array[i][j] << " ";
        }
    }
    cout << "\n";
}

int main()
{
    const int size = 3;
    int array[2][size] = {{33, 66, 99}, {33, 66, 99}};

    arrayUnSized(array, size);
    return 0;
}
