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
    bool borrowed;

public:
    // Constructors
    LibraryBook();
    LibraryBook(int id, string t, string a);

    // Destructor
    ~LibraryBook();

    // Getters
    int getBookID();
    string getTitle();
    string getAuthor();
    string getBorrowerName();
    int getDaysBorrowed();
    bool getBorrowed();

    // Setters
    void setBookID(int id);
    void setTitle(string t);
    void setAuthor(string a);
    void setBorrowerName(string name);
    void setDaysBorrowed(int days);
    void setBorrowed(bool status);

    // Methods
    void displayBook();
    void borrowBook(string borrower, int days);
    void returnBook();
    bool isOverdue();
    int calculateFine();
};

#endif
