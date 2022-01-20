/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/

#include <iostream>

using namespace std;

int main()
{
    // TODO: multiply a 4x4 array with vector of size 4.
    // Print the resultant product vector
    int mdArray[4][4];
    int vector[4] = {0};
    int result[4] = {0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> mdArray[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cin >> vector[i];
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result[i] = result[i] + (mdArray[i][j] * vector[j]);
        }
        cout << result[i] << endl;
    }

    return 0;
}