// include guard concept: https://en.wikipedia.org/wiki/Include_guard

#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <iomanip>
#include "Person.hpp"
#include "Borrowed_Books.hpp"

using namespace std;

const int MAX_BOOKS_TO_BORROW = 5;

class Member : public Person
{
protected:
    static int library_id_counter;
    int library_id;
    string phone_number;

public:
    Member();
    Member(string first_name, string last_name, int age, string phone_number);
    void print_info();
    void update_member_info();
    void new_member();
    int get_library_id();
};

int Member::library_id_counter = 0;

Member::Member() : Person()
{
    this->phone_number = "Unknown";
}
Member::Member(string first_name, string last_name, int age, string phone_number) : Person(first_name, last_name, age)
{
    this->library_id = ++library_id_counter;
    this->phone_number = phone_number;
}

void Member::print_info()
{
    cout << "______ Member with ID \"" << library_id << "\" Information ______" << endl;
    cout << left << setw(15) << "First Name: " << setw(15) << right << first_name << endl;
    cout << left << setw(15) << "Last Name: " << setw(15) << right << last_name << endl;
    cout << left << setw(15) << "Age: " << setw(15) << right << age << endl;
    cout << left << setw(15) << "Library ID: " << setw(15) << right << library_id << endl;
    cout << left << setw(15) << "Phone Number: " << setw(15) << right << phone_number << endl;
    cout << endl;
}

void Member::new_member()
{
    cout << "Enter Member First Name: ";
    cin >> first_name;
    cout << "Enter Member Last Name: ";
    cin >> last_name;
    cout << "Enter Member Age: ";
    cin >> age;
    this->library_id = ++library_id_counter;
    cout << "Member Library ID: " << library_id << endl;
    cout << "Enter Member Phone Number: ";
    cin >> phone_number;
}

int Member::get_library_id()
{
    return library_id;
}

void Member::update_member_info()
{
    cout << "Enter Member updated Age: ";
    cin >> age;
    cout << "Enter Member updated Phone Number: ";
    cin >> phone_number;
}
#endif