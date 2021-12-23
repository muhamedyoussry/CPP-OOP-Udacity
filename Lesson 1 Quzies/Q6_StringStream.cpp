#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string roomLength;
    float roomLength_F;
    string roomWidth;
    float roomWidth_F;

    cout << "What is the room length " << endl;
    getline(cin, roomLength);
    stringstream(roomLength) >> roomLength_F;
    cout << "What is the room width" << endl;
    getline(cin, roomWidth);
    stringstream(roomWidth) >> roomWidth_F;

    cout << "Area is " << roomWidth_F * roomLength_F;
}