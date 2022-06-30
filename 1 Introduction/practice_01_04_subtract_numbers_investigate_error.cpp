/*
practice_1_4_subtract_numbers_investigate_error.cpp

Savitch_2018_Problem Solving with C++
Chapter 1 Introduction to Computers and C++ Programming  
p 67

Modify the C++ program you wrote in Practice Problem 3. 

Change the addition sign 1 in your C++ program to the subtraction sign 2. 

What happens if the user enters a negative number like -2 as the second input? 

What happens if the user enters an extremely big number, ,

such as 9,876,543,210, and subtracts another number from it?

INPUT:
9876543210
210

OUTPUT:

Please enter the first number.

Please enter the first number.


The sum of 2147483647 and 32767 is 2147450880.

*/


#include <iostream>
using namespace std;
int main()
{
    int number1, number2;

    cout << "Please enter the first number.\n";
    cin  >> number1;
    
    cout << "\nPlease enter the first number.\n";
    cin  >> number2;
    
    cout << "\n\n"
         << "Subtracting  "
         << number2
         << " from "
         << number1
         << " is "
         << number1 - number2
         <<".";

   
    return 0;
}
