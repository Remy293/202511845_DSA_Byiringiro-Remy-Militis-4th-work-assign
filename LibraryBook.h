#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <iostream>
using namespace std;

class LibraryBook
{
private:
    int bookID;
    string title;
    string author;
    string borrowerName;
    int daysBorrowed;
    bool isBorrowed;

public:
    // Constructors
    LibraryBook();
    LibraryBook(int, string, string);

    // Destructor
    ~LibraryBook();

    // Getters
    int getBookID();
    string getTitle();
    string getAuthor();
    string getBorrowerName();
    int getDaysBorrowed();
    bool getBorrowStatus();

    // Setters
    void setBorrowerName(string);
    void setDaysBorrowed(int);
    void setBorrowStatus(bool);

    // Methods
    void displayBook();
};

#endif