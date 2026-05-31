#include "LibraryBook.h"

// Default constructor
LibraryBook::LibraryBook()
{
    bookID = 0;
    title = "";
    author = "";
    borrowerName = "";
    daysBorrowed = 0;
    isBorrowed = false;
}

// Parameterized constructor
LibraryBook::LibraryBook(int id, string t, string a)
{
    bookID = id;
    title = t;
    author = a;
    borrowerName = "";
    daysBorrowed = 0;
    isBorrowed = false;
}

// Destructor
LibraryBook::~LibraryBook()
{
    cout << "Book object destroyed." << endl;
}

// Getters
int LibraryBook::getBookID()
{
    return bookID;
}

string LibraryBook::getTitle()
{
    return title;
}

string LibraryBook::getAuthor()
{
    return author;
}

string LibraryBook::getBorrowerName()
{
    return borrowerName;
}

int LibraryBook::getDaysBorrowed()
{
    return daysBorrowed;
}

bool LibraryBook::getBorrowStatus()
{
    return isBorrowed;
}

// Setters
void LibraryBook::setBorrowerName(string name)
{
    borrowerName = name;
}

void LibraryBook::setDaysBorrowed(int days)
{
    daysBorrowed = days;
}

void LibraryBook::setBorrowStatus(bool status)
{
    isBorrowed = status;
}

// Display
void LibraryBook::displayBook()
{
    cout << "ID: " << bookID
         << " | Title: " << title
         << " | Author: " << author
         << " | Borrower: " << borrowerName
         << " | Days: " << daysBorrowed
         << " | Status: " << (isBorrowed ? "Borrowed" : "Available")
         << endl;
}