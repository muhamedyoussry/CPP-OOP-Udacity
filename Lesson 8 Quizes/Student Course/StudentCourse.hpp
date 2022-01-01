#include <iostream>
#include <stdio.h>

using namespace std;

class Student
{
private:
    int id;
    int grades[10];

public:
    Student(/* args */);
    ~Student();
    void setStudentID(int StudId);
    void setGrade(int j, int StudGrade);
    void printGrades();
    int getGrade(int index);
    int getMin();
    int getMax();
    float getAverageGrade();
};

Student::Student(/* args */)
{
}

Student::~Student()
{
}
void Student::setStudentID(int StudId)
{
    id = StudId;
}
void Student::setGrade(int j, int StudGrade)
{
    grades[j] = StudGrade;
}
void Student::printGrades()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "grade [ " << i + 1 << " ] : " << grades[i] << endl;
    }
}
int Student::getMin()
{
    int min = grades[0];
    for (int i = 1; i < 10; i++)
    {
        if (grades[i] < min)
        {
            min = grades[i];
        }
    }
    return min;
}

int Student::getMax()
{
    int max = grades[0];
    for (int i = 1; i < 10; i++)
    {
        if (grades[i] > max)
        {
            max = grades[i];
        }
    }
    return max;
}

float Student::getAverageGrade()
{
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += grades[i];
    }
    return sum / 10.0;
}
int Student::getGrade(int index)
{
    return grades[index];
}

class CourseEnrollment
{
private:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];

public:
    CourseEnrollment(/* args */);
    ~CourseEnrollment();
    void addStudents(Student stds[]);
    int *getAllGrades();
    int *sortAllGrades();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade();
};

CourseEnrollment::CourseEnrollment(/* args */)
{
}

CourseEnrollment::~CourseEnrollment()
{
}
void CourseEnrollment::addStudents(Student std[])
{
    for (int i = 0; i < 6; i++)
    {
        students[i] = std[i];
    }
}

int *CourseEnrollment::getAllGrades()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            grades[(i * 10) + j] = students[i].getGrade(j);
        }
    }
    for (int i = 0; i < 60; i++)
    {
        cout << grades[i] << endl;
    }

    return grades;
}

int *CourseEnrollment::sortAllGrades()
{
    int temp;
    for (int i = 0; i < 60; i++)
    {
        for (int j = i + 1; j < 60; j++)
        {
            if (grades[i] > grades[j])
            {
                temp = grades[i];
                grades[i] = grades[j];
                grades[j] = temp;
            }
        }
    }
    return grades;
}
int CourseEnrollment::getMinGrade()
{
    int min = grades[0];
    for (int i = 1; i < 60; i++)
    {
        if (grades[i] < min)
        {
            min = grades[i];
        }
    }
    return min;
}
int CourseEnrollment::getMaxGrade()
{
    int max = grades[0];
    for (int i = 1; i < 60; i++)
    {
        if (grades[i] > max)
        {
            max = grades[i];
        }
    }
    return max;
}
float CourseEnrollment::getAvgGrade()
{
    float sum = 0;
    for (int i = 0; i < 60; i++)
    {
        sum += grades[i];
    }
    return sum / 60.0;
}