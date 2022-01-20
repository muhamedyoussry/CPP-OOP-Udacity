#include <iostream>

using namespace std;

class Student
{
    string name;
    int id;
    int gradDate;

public:
    void setName(string Sname);
    void setId(int Sid);
    void setGradDate(int SgradeDate);
    string getName();
    int getId();
    int getGradDate();
    void print();
};

void Student::setName(string Sname)
{
    name = Sname;
}
void Student::setId(int Sid)
{
    id = Sid;
}
void Student::setGradDate(int SgradDate)
{
    gradDate = SgradDate;
}
string Student::getName()
{
    return name;
}
int Student::getId()
{
    return id;
}
int Student::getGradDate()
{
    return gradDate;
}
void Student::print()
{
    cout << name << " " << id << " " << gradDate;
}

int main()
{
    Student s;
    s.setName("Mohamed");
    s.getName();

    return 0;
}