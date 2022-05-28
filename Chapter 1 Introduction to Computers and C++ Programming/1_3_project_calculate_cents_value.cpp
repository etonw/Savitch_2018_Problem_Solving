/*
1_3_project_calculate_cents_value.cpp

Savitch_2018_Problem Solving with C++
Chapter 1 Introduction to Computers and C++ Programming  


Write a program that allows the user to 
enter a number of quarters, dimes, and nickels and 
then outputs the monetary value of the coins in cents. ,

For example, if the user enters 2 for the number of quarters, 3 for the number
of dimes, and 1 for the number of nickels, then the program should
output that the coins are worth 85 cents.

INPUT:
4
5
5

OUTPUT:
 
Enter the number of quarters: 

Enter the number of dimes:  

Enter the number of nickels:  

The worth of the coins are: 1.75

*/

#include <iostream>
using namespace std;
int main()
{

 int quarters, dimes, nickels;
 
 cout << endl; 
 cout << "Enter the number of quarters: " << endl;
 cin >> quarters;

 cout << endl; 
 cout << "Enter the number of dimes:  " << endl;
 cin >> dimes;
 
 cout << endl; 
 cout << "Enter the number of nickels:  " << endl;
 cin >> nickels;
 
 cout << endl; 
 cout << "The worth of the coins are: ";
 cout << (quarters*.25) + (dimes*.10) + (nickels*.05);
 
 
    return 0;
}
