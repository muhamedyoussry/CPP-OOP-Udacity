#include <iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;

public:
    void setName(string dName);
    void setLicenseNumber(int dLicenseNumber);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

void Dog::setName(string dName)
{
    name = dName;
}
void Dog::setLicenseNumber(int dLicenseNumber)
{
    licenseNumber = dLicenseNumber;
}
string Dog::getName()
{
    return name;
}
int Dog::getLicenseNumber()
{
    return licenseNumber;
}
void Dog::printInfo()
{
    cout << name << " " << licenseNumber << endl;
}