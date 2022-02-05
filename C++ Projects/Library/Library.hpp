// include guard concept: https://en.wikipedia.org/wiki/Include_guard

#ifndef LIBRARY_H
#define LIBRARY_H

#include <bits/stdc++.h>

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
    void delete_library_member(int member_id);
    int get_member_position_in_member_list(int member_id);
    // Books Functions
    void print_all_books();
    void print_ISBN_book(string search_ISBN);
    void update_library_book_price(string book_ISBN);
    void update_library_book_copies(string book_ISBN);
    void delete_library_book(string book_ISBN);
    int get_book_position_in_book_list(string book_ISBN);
    // Members and Books Functions
    void member_purchase_book();
    void member_borrow_book();
    void member_return_book();
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
    cout << "4. Delete Library Member Information" << endl;
    cout << "________ Library Books Management System ________" << endl;
    cout << "5. Enter New Book" << endl;
    cout << "6. Print All Library Books Information" << endl;
    cout << "7. Search for Specific Library Book Information" << endl;
    cout << "8. Delete Library Book Information" << endl;
    cout << "________ Library Purchase Management System ________" << endl;
    cout << "9. Book Purchase Process" << endl;
    cout << "10. Book Borrow Process" << endl;
    cout << "11. Book Return Process" << endl;
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
        int member_id;
        cout << "Delete Member by ID: ";
        cin >> member_id;
        delete_library_member(member_id);
        cout << "Member Deleted Succesfully" << endl;
        library_main_window();
    }
    else if (choice == 5)
    {
        Book b;
        b.new_book();
        book_list.push_back(b);
        library_main_window();
    }
    else if (choice == 6)
    {
        print_all_books();
        library_main_window();
    }
    else if (choice == 7)
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
    else if (choice == 8)
    {
        string book_ISBN;
        cout << "Delete Book by ISBN: ";
        cin >> book_ISBN;
        delete_library_book(book_ISBN);
        cout << "Book Deleted Succesfully" << endl;
        library_main_window();
    }
    else if (choice == 9)
    {
        member_purchase_book();
        library_main_window();
    }
    else if (choice == 10)
    {
        member_borrow_book();
        library_main_window();
    }
    else if (choice == 11)
    {
        member_return_book();
        library_main_window();
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

void Library::delete_library_member(int member_id)
{
    for (auto it = member_list.begin(); it != member_list.end(); it++)
    {
        if (it->get_member_id() == member_id)
        {
            member_list.erase(it);
            return;
        }
        else
        {
            continue;
        }
    }
}

void Library::delete_library_book(string book_ISBN)
{
    for (auto it = book_list.begin(); it != book_list.end(); it++)
    {
        if (it->get_book_ISBN() == book_ISBN)
        {
            book_list.erase(it);
            return;
        }
        else
        {
            continue;
        }
    }
}

int Library::get_member_position_in_member_list(int member_id)
{
    for (int i = 0; i < member_list.size(); i++)
    {
        if (member_list[i].get_member_id() == member_id)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
    cout << "This Member ID is not exist in our Database" << endl;
    return -1;
}

int Library::get_book_position_in_book_list(string book_ISBN)
{
    for (int i = 0; i < book_list.size(); i++)
    {
        if (book_list[i].get_book_ISBN() == book_ISBN)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
    cout << "This ISBN is not exist in our Database" << endl;
    return -1;
}

void Library::member_purchase_book()
{
    int member_id;
    cout << "Enter Member ID: ";
    cin >> member_id;
    int member_pos = get_member_position_in_member_list(member_id);

    string book_ISBN;
    cout << "Enter Book ISBN: ";
    cin >> book_ISBN;
    int book_pos = get_book_position_in_book_list(book_ISBN);

    member_list[member_pos].purchase_book(book_list[book_pos]);

    int decrement_copies = book_list[book_pos].get_book_copies();
    decrement_copies--;
    book_list[book_pos].update_book_copies(decrement_copies);
}

void Library::member_borrow_book()
{
    int member_id;
    cout << "Enter Member ID: ";
    cin >> member_id;
    int member_pos = get_member_position_in_member_list(member_id);

    string book_ISBN;
    cout << "Enter Book ISBN: ";
    cin >> book_ISBN;
    int book_pos = get_book_position_in_book_list(book_ISBN);

    member_list[member_pos].borrow_book(book_list[book_pos]);
    int decrement_copies = book_list[book_pos].get_book_copies();

    decrement_copies--;
    book_list[book_pos].update_book_copies(decrement_copies);
}

void Library::member_return_book()
{
    int member_id;
    cout << "Enter Member ID: ";
    cin >> member_id;
    int member_pos = get_member_position_in_member_list(member_id);

    string book_ISBN;
    cout << "Enter Book ISBN: ";
    cin >> book_ISBN;
    int book_pos = get_book_position_in_book_list(book_ISBN);

    member_list[member_pos].return_book(book_list[book_pos]);

    int incremenet_copies = book_list[book_pos].get_book_copies();

    incremenet_copies++;
    book_list[book_pos].update_book_copies(incremenet_copies);
}

#endif