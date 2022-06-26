/*
project_absolute_02_07_calories_burned.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Absolute C++
               Chapter 2: C++ Basics
               p 42            

REQUIREMENTS:
7. One way to measure the amount of energy that is expended during exercise is to use metabolic equivalents (MET). Here are some METS for various activities:

Running 6 MPH: 10 METS
Basketball: 8 METS
Sleeping: 1 MET

The number of calories burned per minute may be estimated using the formula
Calories/Minute = 0.0175 × 1 MET × (Weight in kilograms)

Write a program that inputs a 
subject’s weight in pounds, 
the number of METS for an activity, and 
the number of minutes spent on that activity, and then 

outputs an estimate for the total number of calories burned. 

One kilogram is equal to 2.2 pounds.

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
    double weight_in_pounds(0);
    double weight_in_kilograms(0);
    double activity_METS =(0);
    double activity_minutes(0);

    double total_calories_burned(0);

    const double CONVERT_POUNDS_TO_KILOGRAM = 2.2;
 
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i)  Ask the user for their weight in pounds, the METS for the activity completed and the number of minutes spent on that activity"
         << endl 
         << " (ii) Calculate and output the total number of calories burned"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "What is your weight in pounds? : ";
        weight_in_pounds = input_double();

        cout << endl << endl
             << " What is the METS for the activity completed? : ";
        activity_METS = input_double();

        cout << endl << endl
             << " What is the number of minutes spent on that activity? : ";
        activity_minutes = input_double();       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "weight_in_pounds : " 
             << weight_in_pounds 
             << endl << endl;
        
        cout << "activity_METS : " 
             << activity_METS 
             << endl << endl; 
        
        cout << "activity_minutes : " 
             << activity_minutes 
             << endl << endl;   
        
         // CALCULATION
        weight_in_kilograms = CONVERT_POUNDS_TO_KILOGRAM * weight_in_pounds;
        
        total_calories_burned = 0.0175 * activity_METS * 
                          weight_in_kilograms * activity_minutes;

        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << "Total number of calories burned :" 
             << total_calories_burned
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


