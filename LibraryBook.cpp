#include "LibraryBook.h"

// Default constructor
LibraryBook::LibraryBook()
{
    bookID = 0;
    title = "";
    author = "";
    borrowerName = "";
    daysBorrowed = 0;
    borrowed = false;
}

// Parameterized constructor
LibraryBook::LibraryBook(int id, string t, string a)
{
    bookID = id;
    title = t;
    author = a;
    borrowerName = "";
    daysBorrowed = 0;
    borrowed = false;
}

// Destructor
LibraryBook::~LibraryBook()
{
    cout << "Book object destroyed: " << title << endl;
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

bool LibraryBook::getBorrowed()
{
    return borrowed;
}

// Setters
void LibraryBook::setBookID(int id)
{
    bookID = id;
}

void LibraryBook::setTitle(string t)
{
    title = t;
}

void LibraryBook::setAuthor(string a)
{
    author = a;
}

void LibraryBook::setBorrowerName(string name)
{
    borrowerName = name;
}

void LibraryBook::setDaysBorrowed(int days)
{
    daysBorrowed = days;
}

void LibraryBook::setBorrowed(bool status)
{
    borrowed = status;
}

// Display
void LibraryBook::displayBook()
{
    cout << "ID: " << bookID
         << "\nTitle: " << title
         << "\nAuthor: " << author;

    if (borrowed)
    {
        cout << "\nBorrower: " << borrowerName
             << "\nDays Borrowed: " << daysBorrowed;
    }

    cout << "\nStatus: " << (borrowed ? "Borrowed" : "Available")
         << "\n----------------------\n";
}

// Borrow
void LibraryBook::borrowBook(string borrower, int days)
{
    borrowed = true;
    borrowerName = borrower;
    daysBorrowed = days;
}

// Return
void LibraryBook::returnBook()
{
    borrowed = false;
    borrowerName = "";
    daysBorrowed = 0;
}

// Overdue = more than 7 days
bool LibraryBook::isOverdue()
{
    return borrowed && daysBorrowed > 7;
}

// Fine = 500 per day after 7 days
int LibraryBook::calculateFine()
{
    if (isOverdue())
    {
        return (daysBorrowed - 7) * 500;
    }

    return 0;
}