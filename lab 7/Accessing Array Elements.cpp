// ============================================
// Name: Shahzad Gul
// Registration No: 0671
// Semester: 2
// Section: B
// Lab: 07 - Task 2
// ============================================

#include <iostream>
using namespace std;

int main()
{
    // Declare a character array called "message" to store a word
    char message[] = "Hello";
    
    // Use a loop to access each character and display it on a separate line
    cout << "Characters in the message:" << endl;
    for (int i = 0; message[i] != '\0'; i++)
    {
        cout << message[i] << endl;
    }
    
    return 0;
}
