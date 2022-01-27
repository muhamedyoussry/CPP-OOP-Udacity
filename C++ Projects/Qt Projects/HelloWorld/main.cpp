#include <QCoreApplication>
#include <iostream>
#include <string>
#include <QTextStream>

using namespace std;

void print_Hello()
{
    string myName = "Mohamed Youssry";
    string name ;
    cout <<"Please Enter your Name: " ;
    cin >> name;
    cout << "Hello " << name << endl << "I am " << myName << ", and this is My first Qt Console Application." << endl;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    print_Hello();
    return a.exec();
}
