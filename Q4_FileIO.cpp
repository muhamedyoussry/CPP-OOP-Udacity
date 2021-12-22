/*The goal of this quiz is to practice writing and reading files.
**Read the contents of input.txt and then write to it.
**
**We are using input.txt as our file. This is not an ideal
**situation, because when we write to it, we cannot
**see the changes. We can manually write in input.txt and
**we can also use the program to write to the file.
**Then we can read what we wrote using our program.
**
**Your assignment for this quiz**
**Change the contents of the file called input.txt
**Change the ifstream and ofstream to fstream

*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string line;
    // create an output stream to write to the file
    ofstream myfileO("input.txt", ios::app);

    if (myfileO.is_open())
    {
        myfileO << "Hello this is the added new line, my name is Mohamed Youssry";
        myfileO.close();
    }
    else
    {
        cout << "Unable to open the file for writing" << endl;
    }
    // create an input stream to read the file

    ifstream myfileI("input.txt");

    if (myfileI.is_open())
    {
        while (getline(myfileI, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "Unable to open the file for reading" << endl;
    }
    return 0;
}