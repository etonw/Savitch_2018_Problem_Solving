/*
project_2_11_velocity_of_sound_in_air.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 140

Date:   20 June 2022

Author:    Eton Williams

Required:
11. Sound travels through air as a result of collisions between the molecules in the air. The temperature of the air affects the speed of the molecules, which in turn affects the speed of sound. The velocity of sound in dry air can be approximated by the formula:

velocity ≈ 331.3 + 0.61 × Tc 

where Tc is the temperature of the air in degrees Celsius and the velocity is in meters/second.

Write a program that allows the user to input a starting and an ending
temperature. 

Within this temperature range, the program should output
the temperature and the corresponding velocity in 1° increments. 
For example, if the user entered 0 as the start temperature and 2 as the end temperature, 

then the program should output
At 0 degrees Celsius the velocity of sound is 331.3 m/s
At 1 degrees Celsius the velocity of sound is 331.9 m/s
At 2 degrees Celsius the velocity of sound is 332.5 m/s

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
double input_double();
char input_char ();
char repeat_query();
void setDecimalPlaces();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
int starting_temperature = 0,
    ending_temperature = 0,
    temp = 0;
double velocity = 0;

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << "(i) Ask the user for a starting and ending temperature .\n"
         << "(ii) Output the temperature and corresponding velocity in 1 degree increments  \n"
         << endl << endl;
    
    do{ //runs repeatedly
        // prompt for input
        cout << "\n\n\t\t\t\t\t\t\t\t= NEW INPUT =\n" << endl << endl;
        cout << "Starting temperature? ";
        starting_temperature = input_double();
        cout << "\n\n Ending temperature? ";
        ending_temperature = input_double();
       
        // Echo input
        cout << "\n\n\t\tYou entered: \t Starting temperature: " 
             << starting_temperature                             
             << "\nEnding temperature: " 
             << ending_temperature 
             << endl << endl; 
        
        setDecimalPlaces();
         // Calculation
        temp = starting_temperature;
        while ( temp <= ending_temperature )
        {
            velocity = 331.3 + ( 0.61 * temp ) ;
            cout << "\nAt "
            	<< temp
            	<<" degrees Celcisus the velocity of sound is "
            	<< velocity
            	<<" m/s";
            temp++;  
        }    
        // function to query if user wishes to continue 
        REPEAT = repeat_query();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << "\n\nYou entered: " << REPEAT << endl << endl;

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

// function to format number of decimal places
void setDecimalPlaces()
{
    cout.setf(ios::fixed);		
    cout.setf(ios::showpoint);
    cout.precision(1);			// set number of decimal places in bracket
}

// function to query if user wishes to repeat program 
char repeat_query()
{
   char ans;
   std::cout << "\nRepeat Program ? (enter y/n): ";
   std::cin >> ans; 
   return ans;
}

// function to take y/ n char input
char input_char ()
{
    char entered_letter = 'a'; 
    do
        {
            std::cout << " (enter y/n): ";
            std::cin >> entered_letter; 
        
        } while ( entered_letter != 'y' || entered_letter != 'Y' || entered_letter != 'n'|| entered_letter != 'N'  );
    return entered_letter; 
}
