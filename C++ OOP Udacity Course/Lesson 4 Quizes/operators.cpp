/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 1; i++)
    {
        int A = i;

        for (int i = 0; i <= 1; i++)
        {
            int B = i;
            for (int i = 0; i <= 1; i++)
            {
                int C = i;
                //(A and B and C) or (A and( (not B) or (not C))) = Q
                bool Q = (A && B && C) || (A && ((!B) || (!C)));
                // Use this output format
                cout << "A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\t" << Q << endl;
            }
        }
    }

    return 0;
}