/*
project_absolute_02_12_ideal_body_weight.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Absolute C++
               Chapter 2: C++ Basics
               p 43              

REQUIREMENTS:
12. A simple rule to estimate your ideal body weight is to allow 110 pounds for the first 5
feet of height and 5 pounds for each additional inch.

Write a program with a variable for the 
height of a person in feet and another variable for the 
additional inches and input values for these variables from the keyboard. 

Assume the person is at least 5 feet tall. 
For example, a person that is 6 feet and 3 inches tall would be represented with
a variable that stores the number 6 and another variable that stores the number 3.
Based on these values calculate and output the ideal body weight.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_y_or_n();
void set_decimal_places();

//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES
    int height_feet(0);
    int height_inches(0);
    
    double ideal_body_weight(0); 
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will : "
         << endl 
         << "  (i) Ask for the height in feet, and then inches"
         << endl 
         << " (ii) Calculate and output the ideal body weight"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "Height in feet ? : ";
        height_feet = input_double();

        cout << endl << endl
             << "Height in inches ? : ";
        height_inches = input_double();
       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "height_feet : " 
             << height_feet 
             << endl << endl;
        
        cout << "height_inches : " 
             << height_inches 
             << endl << endl; 
        
         // CALCULATION
        int additional_height_feet = height_feet - 5;
        int total_additional_inches = (additional_height_feet * 12) + height_inches;
        ideal_body_weight = 110 + (total_additional_inches * 5);

        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << "Ideal Body Weight = " 
             << ideal_body_weight 
             << " pounds. " 
             << endl << endl;

        
        // USER determines if program repeats
        cout << endl << endl
             << "Repeat Program ? ";
        REPEAT = input_char_y_or_n();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << endl << endl
         << "You entered : "
         << REPEAT 
         << endl << endl;

    // end program
	cout << "\t\t\t\t\t= END OF PROGRAM =\n";
    cout << endl;
    
	return 0; 
}

// function: take numerical double from User
double input_double ()
{
    double entered_number; 
    std::cout << " (enter number): ";
    std::cin >> entered_number;
    return entered_number; 
}

// function: format number of decimal places
void set_decimal_places()
{
    cout.setf(ios::fixed);		
    cout.setf(ios::showpoint);
    cout.precision(2);			// number of decimal places in parantheses
} // end function

// function: take y/ n char input
char input_char_y_or_n()
{
    char entered_letter = 'x'; 
    do
        {
            std::cout << "\t(enter y/n):  ";
            std::cin >> entered_letter; 
            
        } while ( entered_letter != 'y' && entered_letter != 'Y' &&  entered_letter != 'n' && entered_letter != 'N'  );

    return entered_letter; 
} // end function


