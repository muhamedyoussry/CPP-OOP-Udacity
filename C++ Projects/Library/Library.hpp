// include guard concept: https://en.wikipedia.org/wiki/Include_guard

#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include "Book.hpp"
#include "Member.hpp"

using namespace std;

class Library
{
private:
    vector<Book> book_list;
    vector<Member> member_list;

public:
    Library();
    void library_main_window();
    void print_all_members();
};

Library::Library()
{
    cout << "_________________________________ WELCOME To Our Library _________________________________" << endl;
}

void Library::library_main_window()
{
    int choice = 0;
    cout << "Choose your Operation ... " << endl;
    cout << "1. Enter New Library Member" << endl;
    cout << "2. Print All Library Members" << endl;
    cout << "0. Exit Library" << endl;
    cout << endl
         << "Enter Your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        Member m;
        m.new_member();
        member_list.push_back(m);
        library_main_window();
    }
    if (choice == 2)
    {
        print_all_members();
        library_main_window();
    }
    else if (choice == 0)
    {
        return;
    }
}

void Library::print_all_members()
{
    for (auto it = member_list.begin(); it != member_list.end(); it++)
    {
        it->print_info();
    }
}
#endif