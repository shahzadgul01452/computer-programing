/*
 * Name: Shahzad Gul
 * Semester: 2
 * Section: B
 * Reg No: 0671
 * Lab: 13 - Task 3: Accessing Structure Elements (Book)
 * Description: Declare a Book structure with title, author, price, and pages.
 *              Declare two variables, initialize them, and display their values.
 */

#include <iostream>
#include <string>       // Required for string class
using namespace std;

// Declare a structure called 'Book' with the required members
struct Book
{
    string title;       // Member: title (string)
    string author;      // Member: author (string)
    float price;        // Member: price (float)
    int pages;          // Member: pages (integer)
};

int main()
{
    // Declare variables of type Book: book1 and book2
    Book book1, book2;
    
    // Initialize members of book1
    book1.title = "C++ Programming";
    book1.author = "Bjarne Stroustrup";
    book1.price = 45.99;
    book1.pages = 350;
    
    // Initialize members of book2
    book2.title = "Data Structures";
    book2.author = "Mark Allen Weiss";
    book2.price = 39.50;
    book2.pages = 280;
    
    // Display values of structure members of variable book1
    cout << "=== Book 1 Information ===" << endl;
    cout << "Title:  " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price:  $" << book1.price << endl;
    cout << "Pages:  " << book1.pages << endl;
    
    // Display values of structure members of variable book2
    cout << "\n=== Book 2 Information ===" << endl;
    cout << "Title:  " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Price:  $" << book2.price << endl;
    cout << "Pages:  " << book2.pages << endl;
    
    return 0;
}
