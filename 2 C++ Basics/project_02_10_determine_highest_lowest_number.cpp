/*
project_2_10_determine_highest_lowest_number.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 140

Date:   20 June 2022
Author:    Eton Williams

Required:
10. Write a program that reads in int values from the user until they enter
a negative number like 21. Once the user has finished entering numbers,
print out the highest value they’ve entered, the lowest value they’ve
entered, and the total number of numbers they’ve entered. 

The negative number they entered should not be taken as one of the values entered.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
double input_double();
char input_char ();
char repeat_query();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
    double input = 1,
        count = 0, 
        highest_value = 0,
        lowest_value = 0;  

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << " Read values from the user until they enter a negative number \n"
         << "Once the user has finished entering numbers, it will print out\n"
         << "  (i) the highest value of the numbers entered \n "
         << " (ii) the lowest value of the numbers entered \n"
         << "(iii) the total amount of numbers entered \n"
         << endl << endl;


        // for positive inputs
        while ( input > 0 )
        {
            // prompt for input
            cout << endl;
            input = input_double();
            
            // Echo input
            cout << "\n\n\t\tYou entered: \t " 
                 << input 
                 << endl << endl; 

            // Calculation
            if (input > 0){  // consider only positive numbers

                if ( count == 0 ) // for the first positive input
                {
                        highest_value = input; 
                        lowest_value = input;
                }                 
                else // subsequent inputs
                {
                    if (input > highest_value) highest_value = input; 
                    if ( input < lowest_value) lowest_value = input;
                }
                count++;
            } // end if loop
        } // end while loop  

    // Output
    // if there have been more than one postive input
     if (count > 0 )
     {
        cout << "\n\n\t\tThe highest value of the numbers entered: \t " 
             << highest_value 
             << endl << endl;  
        cout << "\n\n\t\tThe lowest value of the numbers entered: \t " 
             << lowest_value 
             << endl << endl;
        cout << "\n\n\t\t \tThe total amount of numbers entered: \t" 
             << count 
             << endl << endl;           
     }
     else
     {
        cout << "\n\n\t\tYou have entered no positive numbers. \t "
            << endl << endl; 
     }
 
    
    // end program
	cout << "\n\t\t\t\t\t\t\t~ End of Program ~\n";
    cout << endl;
	return 0; 
}

// function for taking numerical input ( double) from the user
double input_double ()
{
    double entered_number; 
    std::cout << " (enter number): ";
    std::cin >> entered_number;
    return entered_number; 
}
