#include "Functions.h"

void addBook(LibraryBook books[], int &count)
{
    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Author: ";
    getline(cin, author);

    books[count] = LibraryBook(id, title, author);
    count++;

    cout << "Book added successfully.\n";
}

void displayBooks(LibraryBook books[], int count)
{
    for (int i = 0; i < count; i++)
    {
        books[i].displayBook();
    }
}

void searchBook(LibraryBook books[], int count)
{
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (books[i].getBookID() == id)
        {
            books[i].displayBook();
            return;
        }
    }

    cout << "Book not found.\n";
}

void borrowBookMenu(LibraryBook books[], int count)
{
    int id, days;
    string borrower;

    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (books[i].getBookID() == id)
        {
            if (!books[i].getBorrowStatus())
            {
                cin.ignore();

                cout << "Borrower Name: ";
                getline(cin, borrower);

                cout << "Days Borrowed: ";
                cin >> days;

                books[i].setBorrowerName(borrower);
                books[i].setDaysBorrowed(days);
                books[i].setBorrowStatus(true);

                cout << "Book borrowed.\n";
            }
            else
            {
                cout << "Already borrowed.\n";
            }
            return;
        }
    }

    cout << "Book not found.\n";
}

void returnBookMenu(LibraryBook books[], int count)
{
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (books[i].getBookID() == id)
        {
            books[i].setBorrowerName("");
            books[i].setDaysBorrowed(0);
            books[i].setBorrowStatus(false);

            cout << "Book returned.\n";
            return;
        }
    }

    cout << "Book not found.\n";
}

void displayOverdueBooks(LibraryBook books[], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (books[i].getBorrowStatus() &&
            books[i].getDaysBorrowed() > 7)
        {
            books[i].displayBook();
        }
    }
}

void calculateTotalFines(LibraryBook books[], int count)
{
    int total = 0;

    for (int i = 0; i < count; i++)
    {
        if (books[i].getDaysBorrowed() > 7)
        {
            total += (books[i].getDaysBorrowed() - 7) * 100;
        }
    }

    cout << "Total Fine: " << total << " RWF\n";
}