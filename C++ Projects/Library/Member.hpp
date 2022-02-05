// include guard concept: https://en.wikipedia.org/wiki/Include_guard

#ifndef MEMBER_H
#define MEMBER_H

#include <bits/stdc++.h>
#include "Person.hpp"
#include "Book.hpp"

using namespace std;

class Member : public Person
{
private:
    static int library_id_counter;
    int library_id;
    string phone_number;
    vector<Book> purchase_history;
    vector<Book> current_borrowed;

public:
    Member();
    Member(string first_name, string last_name, int age, string phone_number);
    void print_info();
    void update_member_info();
    void new_member();
    int get_member_id();
    void purchase_book(Book b);
    void borrow_book(Book b);
    void return_book(Book b);
    void get_purchase_history();
    void get_current_borrowed();
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

int Member::get_member_id()
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

void Member::purchase_book(Book b)
{
    purchase_history.push_back(b);
}

void Member::borrow_book(Book b)
{
    if (current_borrowed.size() < 5)
    {
        current_borrowed.push_back(b);
    }
    else
    {
        cout << "Sorry, You can't borrow more than 5 books ... Try to return some borrowed books first" << endl;
    }
}

void Member::return_book(Book b)
{
    for (auto it = current_borrowed.begin(); it != current_borrowed.end(); it++)
    {
        if (it->get_book_ISBN() == b.get_book_ISBN())
        {
            current_borrowed.erase(it);
            return;
        }
    }
}

void Member::get_purchase_history()
{
    for (auto it = purchase_history.begin(); it != purchase_history.end(); it++)
    {
        it->print_book_details();
    }
}
void Member::get_current_borrowed()
{
    for (auto it = current_borrowed.begin(); it != current_borrowed.end(); it++)
    {
        it->print_book_details();
    }
}
#endif