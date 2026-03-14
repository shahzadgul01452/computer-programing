                                    // Lab 2 Task 9.cpp
                                    // Name: [Shahzad Gul]
                                    // Registration Number: [BF25NWELE0671]



#include <iostream>

using namespace std;

int main() 
{

    //Variables declaration 
    
    int a=8, b=5, age=20;
    
    // Basic Output for memory size of declared variables,

	cout <<"Memory of size of int a is: " <<sizeof (a) << "Byte" << endl << endl;
    cout <<"Memory of size of int b is: " <<sizeof (b) << "Byte" << endl << endl;
    cout <<"Memory of size of int age is: " <<sizeof (age) << "Byte" << endl << endl;
 
    // Basic output for values of declared variables,

	cout <<"Value of int a is: " <<a << endl << endl;
    cout <<"Value of int b is: " <<b << endl << endl;
    cout <<"Value of int age is: " <<age << endl << endl;   

    // Basic output for memory address of declared variables,

    cout <<"Memory address of int a is: " <<&a << endl << endl;
    cout <<"Memory address of int b is: " <<&b << endl << endl;
    cout <<"Memory address of int age is: " <<&age << endl << endl; 
    
    return 0;
}

