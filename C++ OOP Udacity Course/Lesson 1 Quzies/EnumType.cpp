#include <iostream>

using namespace std;
enum colorType
{
    white = 1,
    green,
    red,
    blue,
    yellow,
    black,
    grey
};

int main()
{
    colorType Mycolor = green;
    cout << Mycolor << endl;
}
