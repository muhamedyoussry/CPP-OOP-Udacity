#ifndef CLASS_BOOK_H
#define CLASS_BOOK_H

#endif

#include <iostream>

using namespace std;

class Book
{
private:
    string title;
    string ISBN;
    string firstAuthor;
    int numberOfCopies;

public:
    Book();
    Book(string title_, string ISBN_, string firstAuthor_, int numberOfCopies_);
    void setTitle(string title_);
    void setISBN(string ISBN_);
    void setFirstAuthor(string firstAuthor_);
    void setNumberOfCopies(int numberOfCopies_);
    string getTitle();
    string getISBN();
    string getFirstAuthor();
    int getNumberOfCopies();
    void updateBookNumCopies(int n);
};

Book::Book()
{
    title = "-";
    ISBN = "-";
    firstAuthor = "-";
    numberOfCopies = 0;
}
Book::Book(string title_, string ISBN_, string firstAuthor_, int numberOfCopies_)
{
    title = title_;
    ISBN = ISBN_;
    firstAuthor = firstAuthor_;
    numberOfCopies = numberOfCopies_;
}
void Book::setTitle(string title_)
{
    if (title_.size() > 0)
    {
        title = title_;
    }
}
void Book::setISBN(string ISBN_)
{
    if (ISBN_.size() > 0)
    {
        ISBN = ISBN_;
    }
}
void Book::setFirstAuthor(string firstAuthor_)
{
    if (firstAuthor_.size() > 0)
    {
        firstAuthor = firstAuthor_;
    }
}
void Book::setNumberOfCopies(int numberOfCopies_)
{
    if (numberOfCopies_ >= 0)
    {
        numberOfCopies = numberOfCopies_;
    }
}
string Book::getTitle()
{
    return title;
}
string Book::getISBN()
{
    return ISBN;
}
string Book::getFirstAuthor()
{
    return firstAuthor;
}
int Book::getNumberOfCopies()
{
    return numberOfCopies;
}
void Book::updateBookNumCopies(int n)
{
    int sum = n + numberOfCopies;

    if (sum >= 0)
    {
        numberOfCopies = n;
    }
    else
    {
        cout << "Sorry but Invalid entry of the updated number copies" << endl;
    }
}