/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
*/

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int userInput[40];

    // Enter the numbers into an array called userInput
    for (int i = 0; i < 40; i++)
    {
        scanf("%d", &userInput[i]);
    }
    // print the array
    cout << "\nThe array\n";
    for (int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }
    // print the array in reverse order
    cout << "\n\nThe array in reverse order\n";
    for (int i = 39; i >= 0; i--)
    {
        cout << userInput[i] << " ";
    }
    // sorting the array
    for (int i = 0; i < 40; i++)
    {
        for (int j = i + 1; j < 40; j++)
        {
            if (userInput[i] > userInput[j])
            {
                int temp = userInput[j];
                userInput[j] = userInput[i];
                userInput[i] = temp;
            }
        }
    }
    cout
        << "\n\nThe array sorted\n";
    for (int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }
    return 0;
}