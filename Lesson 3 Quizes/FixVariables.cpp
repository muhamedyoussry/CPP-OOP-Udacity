/*Goal: fix the variable types problem.
**This program outputs the wrong answer
**even though it compiles and executes without errors.
**Fix it so that it outputs the correct value.
*/

using namespace std;

#include <iostream>
int main(void)
{
    float numerator = 4;
    float denominator = 5;

    float answer = numerator / denominator;
    cout << "answer = " << answer;
    return 0;
}
