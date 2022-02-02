// include guard concept: https://en.wikipedia.org/wiki/Include_guard

#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include <iomanip>

#include "Member.hpp"

using namespace std;

class Book
{
    /*
        In here we will define the book details:
            *book_name: the book title.
            *author_name: the writer full name.
            *book_publisher: A Publisher is one who publishes the content on his property or website.
            *ISBN: ISBN is an acronym for International Standard Book Number.
            It's a unique series of digits assigned to every book published in the world
            *price: the book cost in decimals.
            *book_copies: to track the book copy availability.
    */
private:
    string book_name;
    string author_name;
    double price;
    int book_copies;
    string book_publisher;
    string ISBN;
    vector<Member> book_borrower;

public:
    Book();
    Book(string book_name, string author_name, double price, int book_copies, string book_publisher, string ISBN);
    void print_book_details();
    void new_book();
    void update_book_copies(int new_copies_number);
    void update_price(double new_price);
};

Book::Book()
{
    this->book_name = "Unknown";
    this->author_name = "Unknown";
    this->price = 0;
    this->book_copies = 0;
    this->book_publisher = "Unknown";
    this->ISBN = "Unknown";
}
Book::Book(string book_name, string author_name, double price, int book_copies, string book_publisher, string ISBN)
{
    this->book_name = book_name;
    this->author_name = author_name;
    this->price = price;
    this->book_copies = book_copies;
    this->book_publisher = book_publisher;
    this->ISBN = ISBN;
}

// print all the information of a book.
void Book::print_book_details()
{
    cout << "______ Book Details ______" << endl;
    cout << left << setw(15) << "Book Name: " << setw(15) << right << book_name << endl;
    cout << left << setw(15) << "Author Name: " << setw(15) << right << author_name << endl;
    cout << left << setw(15) << "price: " << setw(15) << right << price << endl;
    cout << left << setw(15) << "Book Available Copies: " << setw(15) << right << book_copies << endl;
    cout << left << setw(15) << "Book Publisher: " << setw(15) << right << book_publisher << endl;
    cout << left << setw(15) << "ISBN: " << setw(15) << right << ISBN << endl;
}

void Book::new_book()
{
    cout << "Enter Book Name: ";
    cin >> book_name;
    cout << "Enter Book Author Name: ";
    cin >> author_name;
    cout << "Enter Book Price: ";
    cin >> price;
    cout << "Enter Book Copies: ";
    cin >> book_copies;
    cout << "Enter Book Publisher Name: ";
    cin >> book_publisher;
    cout << "Enter Book ISBN: ";
    cin >> ISBN;
}

void Book::update_book_copies(int new_copies_number)
{
    this->book_copies = new_copies_number;
}

void Book::update_price(double new_price)
{
    this->price = new_price;
}
#endif