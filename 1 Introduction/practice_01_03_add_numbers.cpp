/*
practice_1_3_add_numbers.cpp

Savitch_2018_Problem Solving with C++
Chapter 1 Introduction to Computers and C++ Programming  


Further modify the C++ program that you already modified in Practice
Program 2. 

Ask the user for two numbers.

Store the two numbers the user entered in two int variables. 

Print out the sum of these variables. 

For example, if the user entered 3 and 5, print out, “The sum of 3 and 5 is 8”.

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
         << "The sum of "
         << number1
         << " and "
         << number2
         << " is "
         << number1 + number2
         <<".";

   
    return 0;
}
