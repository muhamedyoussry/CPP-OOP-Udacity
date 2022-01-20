#include "dogClass.hpp"

int main()
{
    Dog dog1;
    Dog dog2;

    dog1.setName("Trixie");
    dog2.setName("Kali");
    dog1.setLicenseNumber(1234);
    dog2.setLicenseNumber(5678);

    dog1.printInfo();
    dog2.printInfo();

    return 0;
}