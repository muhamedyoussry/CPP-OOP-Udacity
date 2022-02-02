// include guard concept: https://en.wikipedia.org/wiki/Include_guard

#ifndef LIBRARY_H
#define LIBRARY_H

#include <bits/stdc++.h>

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
    // Members Functions
    void print_all_members();
    void print_id_member(int search_id);
    void update_library_member(int member_id);
    // Books Functions
    void print_all_books();
    void print_ISBN_book(string search_ISBN);
    void update_library_book_price(string book_ISBN);
    void update_library_book_copies(string book_ISBN);
};

Library::Library()
{
    cout << "_________________________________ WELCOME To Our Library _________________________________" << endl
         << endl;
}

void Library::library_main_window()
{
    int choice = 0;
    cout << "Choose your Operation ... " << endl;
    cout << "________ Library Members Management System ________" << endl;
    cout << "1. Enter New Library Member" << endl;
    cout << "2. Print All Library Members Information" << endl;
    cout << "3. Search for Specific Library Member Information" << endl;
    cout << "________ Library Books Management System ________" << endl;
    cout << "4. Enter New Book" << endl;
    cout << "5. Print All Library Books Information" << endl;
    cout << "6. Search for Specific Library Book Information" << endl;
    cout << "0. Exit Library" << endl;
    cout << endl
         << "Enter Your Choice: ";
    cin >> choice;
    cout << endl;

    if (choice == 1)
    {
        Member m;
        m.new_member();
        member_list.push_back(m);
        library_main_window();
    }
    else if (choice == 2)
    {
        print_all_members();
        library_main_window();
    }
    else if (choice == 3)
    {
        int search_id;
        cout << "Search By Member ID: ";
        cin >> search_id;
        print_id_member(search_id);

        int sub_choice = 0;
        cout << endl
             << "Do You want to update Member Information?" << endl;
        cout << "1. Yes" << endl;
        cout << "0. No" << endl;
        cin >> sub_choice;

        if (sub_choice == 1)
        {
            update_library_member(search_id);
            cout << "Member Information updated Successfully" << endl;
            library_main_window();
        }
        else if (sub_choice == 0)
        {
            library_main_window();
        }
    }
    else if (choice == 4)
    {
        Book b;
        b.new_book();
        book_list.push_back(b);
        library_main_window();
    }
    else if (choice == 5)
    {
        print_all_books();
        library_main_window();
    }
    else if (choice == 6)
    {
        string search_ISBN;
        cout << "Search by Book ISBN: ";
        cin >> search_ISBN;
        print_ISBN_book(search_ISBN);

        int sub_choice = 0;
        cout << endl
             << "Do You want to update any Book Information?" << endl;
        cout << "1. Update Price" << endl;
        cout << "2. Update Copies Number" << endl;
        cout << "0. No" << endl;
        cin >> sub_choice;

        if (sub_choice == 1)
        {
            update_library_book_price(search_ISBN);
            cout << "Book Price updated Successfully" << endl;
            library_main_window();
        }
        else if (sub_choice == 2)
        {
            update_library_book_copies(search_ISBN);
            cout << "Book Copies Number updated Successfully" << endl;
            library_main_window();
        }
        else if (sub_choice == 0)
        {
            library_main_window();
        }
    }

    else if (choice == 0)
    {
        cout << "_________________________________ GOODBYE _________________________________" << endl
             << endl;
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

void Library::print_id_member(int search_id)
{
    for (auto it = member_list.begin(); it != member_list.end(); it++)
    {
        if (it->get_member_id() == search_id)
        {
            it->print_info();
            return;
        }
        else
        {
            continue;
        }
    }
}

void Library::update_library_member(int member_id)
{
    for (auto it = member_list.begin(); it != member_list.end(); it++)
    {
        if (it->get_member_id() == member_id)
        {
            it->update_member_info();
            return;
        }
        else
        {
            continue;
        }
    }
}

void Library::print_all_books()
{
    for (auto it = book_list.begin(); it != book_list.end(); it++)
    {
        it->print_book_details();
        return;
    }
}

void Library::print_ISBN_book(string search_ISBN)
{
    for (auto it = book_list.begin(); it != book_list.end(); it++)
    {
        if (it->get_book_ISBN() == search_ISBN)
        {
            it->print_book_details();
            return;
        }
        else
        {
            continue;
        }
    }
}

void Library::update_library_book_price(string book_ISBN)
{
    for (auto it = book_list.begin(); it != book_list.end(); it++)
    {
        if (it->get_book_ISBN() == book_ISBN)
        {
            it->update_price();
            return;
        }
        else
        {
            continue;
        }
    }
}

void Library::update_library_book_copies(string book_ISBN)
{
    for (auto it = book_list.begin(); it != book_list.end(); it++)
    {
        if (it->get_book_ISBN() == book_ISBN)
        {
            it->update_book_copies();
            return;
        }
        else
        {
            continue;
        }
    }
}

#endif